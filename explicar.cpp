#include <cstdlib> //definidas bibliotecas 
#include <iostream>
int main() {
 
   int a = 25; // Definido valor expecifico para variavel A sendo ele 25

   std::cout << "O valor de A é: " << a << std::endl; // apresentado valor A na tela, pela sua definição é 25
   double b = a; //Definido valor variavel B como double, para números decimais e atribuido o valor de A a ela.
   std::cout << "O valor de B é: " << b << std::endl; //apresentado o valor de B na tela, pela sua definição é 25.
 
   double y = 6.375; //definido valor de variável Y como 6.375 e com o tipo double para ser possível conter números decimais.
   std::cout << "O valor de Y é: " << y << std::endl; //apresentado valor Y pela sua definição é 6.375
 
   int x = y; // definido x como uma variável do tipo inteira e atribuido o valor de Y a ele
   std::cout << "O valor de X é: " << x << std::endl; //Apresentado o valor de X na tela.

   //O problema do algoritmo é na parte da atribuição de x = y, pelo simples fato de Y ter um número
   //decimal atribuido ao seu valor, e ao x receber o valor de y ocorre o problema de não serem enviados
   //todos os números que estão em Y, pois X só recebe valores inteiros e Y é uma variavel com números decimais
   //Para resolver o problema seria necessário definir X como uma varíavel do tipo double que assim
   //seria possível atribuir x a y sem nenhum problema.
 
   return EXIT_SUCCESS;
 
}
