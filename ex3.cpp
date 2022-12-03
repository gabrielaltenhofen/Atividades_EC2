// Programa simples que calcula se os números são primos
#include <bits/stdc++.h>
using namespace std;
bool verificador(int n)
{
   //CASO ESPECIAL
   if (n <= 1)
       return false;
  
   //VERIFICA A MAIORIA DOS NÚMEROS
   for (int i = 2; i < n; i++)
       if (n % i == 0)
           return false;
   return true;
}

int divid(int d)
{
    if(d == 1)
    {
       return 1;  
    }

    for (size_t i = 2; i <= d; ++i) 
    {
        if (d % i == 0) 
        {
            return i;
        }
    } 
    return 0;
}

int main()
{
   int limite = 100;
   int contador = 0;
   for (size_t i = 0; i < limite; i++)
   {
       if(verificador(i))
       {
           cout << "+ O número: " << i << " é primo" << endl;
           contador++;
       }
       else
       {
          int divisor = divid(i);
          if(divisor > 0)
          {
             cout << "- O número: " << i << " não é primo e é divisivel por: " << divisor << endl;
          }
          else
          {
             cout << "- O número: " << i << " não é primo e é divisivel por:" << endl;
          }
       }
   }
  
   cout << "RESULTADO: Até o número: " << limite << " tem " << contador << " números primos!" << endl;
   return 0;
}