#include <cstdlib> //definidas bibliotecas 
#include <iostream>
using namespace std;

int main() {

    int a, b, *ptrA, *ptrB, soma;

   
    cout << "Digite dois valores inteiros: ";
    cin >> a >> b;

    ptrA = &a;
    ptrB = &b;
    
    soma = *ptrA + *ptrB;

    cout <<"Soma dos dois ponteiros: "<< soma<< endl;
    

 
   return EXIT_SUCCESS;
 
}
//2 - Escreva um programa em C++ para somar dois números usando ponteiros.