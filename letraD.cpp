#include <cstdlib>
#include <iostream>
 
int main( ) {
    float x, y, media;
   
    std::cout << "Digite dois números: ";
    std::cin >> x >> y;

    media= (x + y)/2;

    std::cout << "A média dos dois números digitados é:" << media <<std::endl;

   
    return EXIT_SUCCESS;
    
   // d) Calcule a média aritmética dos números digitados.
}

