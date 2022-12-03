//Exemplo adaptado de: geeksforgeeks
#include <iostream>
using namespace std;
  
// classe para nodo da pilha
class nodoPilha 
{
   public:
   double data;
   nodoPilha* proximo;
};
  
nodoPilha* novoNodo(int data) 
{
   nodoPilha* nodo = new nodoPilha();
   nodo->data = data;
   nodo->proximo = NULL;
   return nodo;
}
  
int isEmpty(nodoPilha *base) 
{
   return !base;
}
  
void push(nodoPilha** base, int novoItem)
{
   nodoPilha* nodo = novoNodo(novoItem);
   nodo->proximo = *base;
   *base = nodo;
   cout<<"Adicionado o valor: "<<novoItem<<endl;
}
  
int pop(nodoPilha** base){
   if (isEmpty(*base))
   return -1;
   nodoPilha* temp = *base;
   *base = (*base)->proximo;
   int popped = temp->data;
   free(temp);
   cout<<"Valor removido: "<< popped << endl;
  
   return popped;
}

int peek(nodoPilha* base)
{
   if (isEmpty(base))
   return -1;
   return base->data;
}

int imprimePilha(nodoPilha* base)
{
    if (isEmpty(base)){
        return -1;
    }
    else {
        cout << "Os itens da pilha são: ";
        while (base != NULL) {
            cout<< base->data <<" ";
            base = base->proximo;
        }
    }
    cout << endl;
    return 0;
}

void esvaziaPilha(nodoPilha** base)
{
    while(!isEmpty(*base))
    {
        nodoPilha* temp = *base;
        *base = (*base)->proximo;
        free(temp);
    }
    cout << "A pilha foi esvaziada :/" << endl;
}

int main()
{
    nodoPilha* base = NULL;
    int opcao, valor;
    cout << "SELECIONE A OPÇÃO DESEJADA:"<< endl;
    cout << "digite 1 para ADICIONAR um item a pilha" << endl;
    cout << "digite 2 para REMOVER o item do topo da pilha" << endl;
    cout << "digite 3 para IMPRIMIR todos os itens da pilha" << endl;
    cout << "digite 4 para LIMPAR os itens da pilha"<< endl;
    cout << "digite 5 para FINALIZAR o programa."<< endl;
   
    cin >> opcao;
    
   
    //fica repetindo enquanto não for 5
    while (1){
        if (opcao == 1)
        {   
            cout << "Digite o valor:" << endl;
            cin >> valor;
            if (valor <= 500 || valor >= 1000 )
            {
             push(&base, valor);
            }
            else
            {
            cout << "Digite um valor válido!"<< endl; 
            }
        }
        if (opcao == 2)
        {
            pop(&base);     
        }
        //Imprime a pilha
        if (opcao == 3)
        {
            imprimePilha(base);
        }
        //Esvaziar pilha
        if (opcao == 4)
        {
            esvaziaPilha(&base);
        }
        //Fechar programa
        if (opcao == 5)
        {
            return -1;
        }
        cout << "================================ \n"<< endl;
        cout << "SELECIONE A OPÇÃO DESEJADA:"<< endl;
        cin >> opcao;
    }
}