#include <iostream>
using namespace std;
 
int main( ) {
    string valor;
    string vet[]={"h", "t", "t", "p"};
    string veto2[4];

    cin >> teste;

    for (size_t j=0; j < 4; j++)
    {
        veto2[j]=teste[j];
    }
    int contador=0;
    for (size_t i=0; i < 4; i++)
    {
        if (vet[i]==veto2[i])
        {
            contador = contador+1;
        }
    }
    if (contador == 4)
    {
        cout<<"URL válido"<< endl;
    }
    else{
        cout<<"URL inválido"<< endl;
        exit;
    }  
}