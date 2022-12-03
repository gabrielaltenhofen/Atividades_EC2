#include <cstdlib>
#include <iostream>
using namespace std;

class Nodo {
    public:
    int data;
    Nodo *proximo;
};
void funcCompra(){
    Nodo* head = NULL;
    int codigo;
    int quantidade;
    cout << "Digite o código do produto: "<<endl;
    cin >> codigo;
    cout << "Digite a quantidade: "<<endl;
    cin >> quantidade;
    anotarLista(&head, codigo);
}
void anotarLista(Nodo** head_ref, int new_data){
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
void funcSaldo(){
    cout << "Digite o código do produto: "<<endl;
    cout << "Saldo em caixa: "<<endl;
    cout << "================================="<< endl;
}
void funcValor(){
    double valorCaixa;
    cout << "Valor em caixa: "<< valorCaixa << endl;
}

void printList(Nodo *Nodo){
    while (Nodo != NULL)
    {
        cout << Nodo->data;
        Nodo = Nodo->proximo;
    }
    cout << endl;
}
int main (){
    int funcEscolhida;
    Nodo* head = NULL;
    
    cout << "          MARCENARIA            "<< endl;
    cout << "================================="<< endl;
    cout << "O que deseja fazer hoje?"<<endl;
    cout << "================================="<< endl;
    cout << "Fazer uma compra:             | 1"<<endl;
    cout << "Consultar saldo de um produto:| 2"<<endl;
    cout << "Consultar valor em caixa:     | 3"<<endl;
    cout << "Sair do programa:             | 0"<<endl;
    cout << "================================="<< endl;
    cout << "Digite: "<<endl;

    cin>> funcEscolhida;

    if (funcEscolhida == 1){
        funcCompra();
        anotarLista(&head, 'i');
    }
    if (funcEscolhida == 2){
        funcSaldo();
    }
    if (funcEscolhida == 3){
        funcValor();
    }
    if (funcEscolhida == 0){
        return -1;
    }
    printList(head);

}