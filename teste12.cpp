
#include <bits/stdc++.h>
using namespace std;
 
// Classe para implementar um nodo da lita encadeadanome
class Nodo
{
    public:
    char data;
    Nodo *proximo;
};

void deletaNodo(Nodo** head_ref, char key)
{
    // Store head node
    Nodo* temp = *head_ref;
    Nodo* prec = NULL;
 
    //Se o valor a ser deletado tá no inicio:
    if (temp != NULL && temp->data == key) {
       
        //modifica o inicio
        *head_ref = temp->proximo;
       
        //deleta
        delete temp;
        return;
    }
 
    //Senão, pesquisa pelo valor a ser deletado
    else {
        while (temp != NULL && temp->data != key) {
            prec = temp;
            temp = temp->proximo;
        }
 
        // se o valor não tiver na lista
        if (temp == NULL)
            return;
 
        //remove o nodo da lista
        prec->proximo = temp->proximo;
 
        // desaloca a memória
        delete temp;
    }
}
void push(Nodo** head_ref, char new_data)
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
 
void printList(Nodo *Nodo)
{
    while (Nodo != NULL)
    {
        cout << Nodo->data;
        Nodo = Nodo->proximo;
    }
}
 
int main()
{
    Nodo* head = NULL;
    cout<<"Nome: " << endl;

    push(&head, 'G');
    push(&head, 'a');
    push(&head, 'b');
    push(&head, 'r');
    push(&head, 'i');
    push(&head, 'e');  
    push(&head, 'l');
    printList(head); 

    deletaNodo(&head, 'i');
    cout<<endl<<"Nome depois de deletar a segunda vogal: "<< endl;
    printList(head);
    cout << endl;     
    return 0;
}