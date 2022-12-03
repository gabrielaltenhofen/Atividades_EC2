#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class Nodo
{
    public:
    string data;
    string data2;
    Nodo *proximo;
};
void append(Nodo** head_ref, string new_data)
{
    // 1. aloca
    Nodo* new_Nodo = new Nodo();
    //usado no passo 5
    Nodo *last = *head_ref;
    // 2. preenche com dados
    new_Nodo->data = new_data;
    /* 3. o novo nodo será o último, então o proximo será NULL*/
    new_Nodo->proximo = NULL;
    /* 4. se a lista encadeada está vazia, faz o novo ser o início */
    if (*head_ref == NULL)
    {
        *head_ref = new_Nodo;
        return;
    }
    /* 5. ou percorra até o último nodo */
    while (last->proximo != NULL)
    {
        last = last->proximo;
    }
    /* 6. altera o proximo do últio nodo */
    last->proximo = new_Nodo;
    return;
}

// imprime o conteúdo da lista a partir do início recebido
void printList(Nodo *Nodo)
{
    while (Nodo != NULL)
    {
        cout << " " << Nodo->data;
        Nodo = Nodo->proximo;
        //cout << Nodo <<endl;
    }
    cout << endl;
}

void deletanodo(Nodo** head_ref, string key)
{
    // Store head node
    Nodo* temp = *head_ref;
    Nodo* prec = NULL;

    //Se o valor a ser deletado tá no inicio:
    if (temp != NULL && temp->data == key)
    {

        //modifica o inicio
        *head_ref = temp->proximo;

        //deleta
        delete temp;
        return;
    }
    //Senão, pesquisa pelo valor a ser deletado
    else 
    {
        while (temp != NULL && temp->data != key)
         {
            prec = temp;
           temp = temp->proximo;
        }

        //remove o nodo da lista
        prec->proximo = temp->proximo;

        // desaloca a memória
      delete temp;
      return;
    }
}
/*
Implemente aqui a funçao que identifica e remove palavras duplicadas
*/

int main (int argc, char **argv) {    
    fstream arquivo; 
    string palavra; 
   
    if (argc < 2){
        cout << "Faltou passar o arquivo como argumento!\n";
        return 1;
    }
    //arg 1 é um arquivo com as palavras a ser aberto       
    arquivo.open(argv[1]); 
    if (!arquivo.is_open()) { //Se retornar algum erro:
        cout << "Erro ao abrir o arquivo!\n";
        return 1;
    }
    Nodo* head = NULL;  
    // extrai todas as palavras e adiciona a lista:
    while (arquivo >> palavra)
        append(&head, palavra);

    cout << "ENTRADA:" << endl;
    printList(head);
    deletanodo(&head,"Uruguai");
    /* Aqui é chamada a função que filtra os dados duplicados */
    cout << endl;
    cout << "RESULTADO REMOVENDO DUPLICADOS:" << endl;
    printList(head);
    return 0;
}