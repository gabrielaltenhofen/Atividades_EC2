//3. Escreva um programa em C++ que tenha dois vetores preenchidos com valores
//do tipo double (pelo menos 5 valores em cada vetor),  vetor a e b, e retorne
 //o produto elemento por elemento de a e b. Ou seja, ele produz (imprime) um vetor 
 //c de mesmo comprimento tal que c[i] = a[i] * b[i]. Utilize uma função para
 // receber os vetores e realizar a multiplicação e outra função para receber 
 // e imprimir o vetor de resultado.

#include <cstdlib>
#include <iostream>
using namespace std;

void mult (double a[], double b[], double c[])
{
 
  for (size_t i = 0; i < 5; i++)
  {
    c[i]= a[i]* b[i];
  }
}
void exibe (double c[])
{
  for (size_t i = 0; i < 5; i++)
  {
    cout <<"O valor da multiplicação na posição:"<< i<<" é: "<< c[i]<< endl;
  }
}

int main( )
{
  double a[5]= {1.6, 2.9, 3.7, 4.4, 5.7};
  double b[5]= {4.1, 8.2, 7.3, 10.4, 9.5};
  double c[5];

  mult (a, b, c);
  exibe(c);
}
