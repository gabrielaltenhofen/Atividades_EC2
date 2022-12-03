//1. Escreva um programa em C++ que tenha uma função que recebe um inteiro n 
//e retorna a soma de todos os inteiros menores que n.
#include <cstdlib>
#include <iostream>
using namespace std;

int funcsoma(int n, int somatotal)
{
    int soma;
    somatotal=0;
    for (size_t i = 0; i < n; i++)
    {
        soma = i+n;
        cout << n <<" + "<< i <<" = "<< soma <<endl;
        somatotal = i+somatotal;    
    }
    return somatotal;
}

int main( )
{
   int n, soma, resul, somatotal;
   cout << "Digite um número: ";
   cin >> n;
   resul = funcsoma(n, somatotal);
   cout << "A soma de todos os números menores que:"<< n << " é: "<<resul<< endl;

   return EXIT_SUCCESS;
}