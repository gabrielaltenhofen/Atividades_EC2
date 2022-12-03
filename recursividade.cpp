#include <iostream>
using namespace std;
 
int soma(int k) { //int k recebe o valor do main, =10
 if (k > 0) { //enquanto k > 0 vai executar a função abaixo
   int recursivo = k + soma(k - 2);
   cout << " Valor: " << recursivo << endl; // apresenta 
   return recursivo;
 } else {
   return 0;
 }
}
 
int main() { //funcao main
 int resultado = soma(10); 
 cout << "Soma final: " << resultado << endl;
 return 0;
}
