#include <cstdlib> 
#include <iostream>
using namespace std;

int main() {

    int a, b, *ptrA, *ptrB;
   
    cout << "Digite dois valores inteiros: ";
    cin >> a >> b;
    
    ptrA = &a;
    ptrB = &b;

    cout << "Valores digitados: "<< *ptrA <<" "<< *ptrB <<endl;

    ptrB = &a;
    ptrA = &b;

    cout << "Valores invertidos: "<< *ptrA <<" "<< *ptrB <<endl;
 
   return EXIT_SUCCESS;
 
}
//3 - Escreva um programa em C++ para trocar (inverter) os valores de dois números
// usando ponteiros.