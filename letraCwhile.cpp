#include <cstdlib>
#include <iostream>
 
int main( ) {
    int x, y, i, soma;
    std::cout << "Digite dois números: ";
    std::cin >> x >> y;
+
    if (x != y)
    {
        if (x > y)
        {
            std::cout << "Os dois números digitados são diferentes:" <<std::endl;
            std::cout << "intervalo de números entre os dois valores:" <<std::endl;
            
            i=y+1;

            while ( i < x)
            {   
                std::cout<<" "<< i;
                i= i+1;
            }
            std::cout << std::endl;
           
        }
         if (x < y)
        {
            std::cout << "Os dois números digitados são diferentes:" <<std::endl;
            std::cout << "intervalo de números entre os dois valores:" <<std::endl;
           
            i=x+1;

            while ( i < y)
            {   
                std::cout<<" "<< i;
                i= i+1;
            }
            std::cout << std::endl;
    
        }
        
    }

    return EXIT_SUCCESS;
}