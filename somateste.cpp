//2- Modifique o exemplo abaixo de tal forma que a soma ocorra em uma função que recebe 
//dois números e retorna a soma deles:
#include <cstdlib>
#include <iostream>
using namespace std;

int funcsoma(int x, int y, int soma)
{
    soma = x + y;
    return soma;
}

int main( )
{
   int x, y, soma;
   cout << "Digite dois números: ";
   cin >> x >> y;
   int resultado = funcsoma(x, y, soma);
 
   cout << "A soma dos números é: " << resultado << endl;
 
   return EXIT_SUCCESS;
}
