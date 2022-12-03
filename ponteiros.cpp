#include <cstdlib> 
#include <iostream>
using namespace std;

int main() {

    int a, b, *ptrA, *ptrB;

   
    cout << "Digite dois valores inteiros: ";
    cin >> a >> b;

    ptrA = &a;
    ptrB = &b;
    
    cout << "O endereço do ponteiro A é: "<< ptrA <<endl;
    cout << "O valor do ponteiro A é: "<< *ptrA <<endl;
    cout << "O endereço do ponteiro B é: "<< ptrB <<endl;
    cout << "O valor do ponteiro B é: " << *ptrB <<endl;
    

 
   return EXIT_SUCCESS;
 
}
//1 - Escreva um programa que peça ao usuário para inserir dois números inteiros como 
//entradas a serem armazenadas nas variáveis 'a' e 'b' respectivamente. Crie dois ponteiros 
//inteiros chamados ptrA e ptrB. Atribua os valores de 'a' e 'b' a ptrA e ptrB respectivamente. 
//Exiba nas tela os valores e endereços de memória de PtrA e ptrB.
