/*Adiciona em uma lista encadeada todos as letras do seu nome, 
sendo cada letra um nodo da lista;
Imprima na tela a lista com o seu nome;
Procure na lista o nodo com a segunda vogal do seu nome e exclua tal nodo.
*/
#include <cstdlib>
#include <iostream>
using namespace std;
class Nodo
{
    public:
    char data;
    Nodo *proximo;
};

void apresentaLista(Nodo *Nodo)
{
    while (Nodo != NULL)
    {
        cout << Nodo->data;
        Nodo = Nodo->proximo;
    }
    cout << endl;
}
void adicionafinal(Nodo** head_ref, char new_data)
{
    Nodo* new_Nodo = new Nodo();
    Nodo *last = *head_ref;

    new_Nodo->data = new_data;
    new_Nodo->proximo = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_Nodo;
        return;
    }
    while (last->proximo != NULL)
    {
        last = last->proximo;
    }
    last->proximo = new_Nodo;
    return;
}
void deletaVogal(Nodo** head_ref, char key)
{
    Nodo* temp = *head_ref;
    Nodo* prec = NULL;

    if (temp != NULL && temp->data == key) {
        *head_ref = temp->proximo;
        delete temp;
        return;
    }
    else {
        while (temp != NULL && temp->data != key) {
            prec = temp;
            temp = temp->proximo;
        }
        if (temp == NULL)
            return;
        prec->proximo = temp->proximo;
        delete temp;
    }
}
int main (){
    Nodo* head = NULL;
    cout<<"Lista inicial: " << endl;

    adicionafinal(&head, 'G');
    adicionafinal(&head, 'a');
    adicionafinal(&head, 'b');
    adicionafinal(&head, 'r');
    adicionafinal(&head, 'i');
    adicionafinal(&head, 'e');
    adicionafinal(&head, 'l');
    apresentaLista(head);
    
    deletaVogal(&head, 'i');
    cout<<"Lista encadeada depois de deletar a segunda vogal "<< endl;
    apresentaLista(head); 
}