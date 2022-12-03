#include <cstdlib>
#include <iostream>
 
int main( ) {
    float x, y, i, media;
    std::cout << "Digite dois números: ";
    std::cin >> x >> y;

    media= (x + y)/2;

    std::cout << "A média dos dois números digitados é:" << media << std::endl;
    
   
    if( media < 10)
    {
        std::cout << "Digite valores maiores!" << std::endl;
    }

    if( x < y && x < 5)
    {
        std::cout << "O primeiro número digitado é muito pequeno!" << std::endl;
    }
    
        else if(y < 5)
        {
            std::cout << "O segundo número digitado é muito pequeno!" << std::endl;
        }

    if(media == 10)
    {
        std::cout << "A média é 10!" << std::endl;
    }
    return EXIT_SUCCESS;


}
//e) Se a média dos valores digitados for menor que 10, mostre na tela a mensagem: 
//"Digite valores maiores!";
//Se o primeiro enunciado for falso e nenhum valor digitado é menor que 0 e a média 
//dos valores é maior que 10:
//- Se o primeiro número digitado for menor que o segundo e também menor que 5, imprima na
// tela  "o primeiro número digitado é muito pequeno".
//- Se o enunciado anterior for falso e o segundo número digitado for menor que 5, imprima na tela 
// "o segundo número digitado é muito pequeno".
//Senão, mostre na tela a mensagem: "A média é 10"
