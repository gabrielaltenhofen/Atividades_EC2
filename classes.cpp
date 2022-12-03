#include <cstdlib>
#include <iostream>
using namespace std;

class  flores {
    private:
        float custo=7.5;
        int quantidade=5;
        string nome="violeta";

    public:
   
    flores(){
        cout << "Banca do Altenhofen" << endl;
        cout << "Nome:"<< nome<<endl;
        cout << "Quantidade de petalas:"<< quantidade<<endl; 
        cout << "Custo da flor: R$"<<custo<<endl;
    }
    
    void teste(){
        int quantidade;
        float custo;
        string nome;

        cout << "==============================="<<endl;
        cout << "Digite o nome de uma flor:"<<endl;
        cin >> nome;
        cout << "Digite o número de petalas:"<<endl;
        cin >> quantidade;
        cout << "Digite o valor em R$:"<<endl;
        cin >> custo;

        cout << "==============================="<<endl;
        cout << "Banca do Altenhofen" << endl;
        cout << "Nome:"<< nome<<endl;
        cout << "Quantidade de petalas:"<< quantidade<<endl; 
        cout << "Custo da flor: R$"<<custo<<endl;
    } 
    ~flores(){
        cout <<"Destrutor executado com sucesso!"<<endl;
    }
};

int main() {
    flores flor1;
    flor1.teste();
}
