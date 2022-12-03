#include <cstdlib>
#include <iostream>
 
int main( ) {
    int x, y, i, soma;
    std::cout << "Digite dois números: ";
    std::cin >> x >> y;

   
    if (x != y)
    {
        if (x > y)
        {
            std::cout << "Os dois números digitados são diferentes:" <<std::endl;
            std::cout << "intervalo de números entre os dois valores:" <<std::endl;

            for ( i = x; i <y; i ++)
            {   
                std::cout<<" "<< i;
            }
            std::cout << std::endl;
        }
        if (x < y)
        {
            std::cout << "Os dois números digitados são diferentes:" <<std::endl;
            std::cout << "intervalo de números entre os dois valores:" <<std::endl;

            for ( i = y; i > x; i ++)
            {   
                std::cout<<" "<< i;
            }
            std::cout << std::endl;
        } 
    }
   
    return EXIT_SUCCESS;
    
   // c) Se os valores digitados não são iguais, imprima na tela todos os 
   //valores entre o menor e o maior valor digitado.
}

