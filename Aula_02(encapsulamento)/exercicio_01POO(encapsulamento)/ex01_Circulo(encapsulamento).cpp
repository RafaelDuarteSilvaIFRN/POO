#include <iostream>
#include <cmath>
const float pi = 3.1415f;

class Circulo{

    private: 
        double raio;

    public:

        Circulo(){
            
        }

        double area(){
            return pi * std::pow(raio, 2);
        }

        double circuferencia(){
            return 2 * pi * raio;
        }

        void set_raio(double v){
            raio = v;
        }

        double get_raio(){
            return raio;
        }
};

int main (){

    double raio;
    Circulo circulo;

    std::cout << "\n" << "informe o raio: ";
    std::cin >> raio;

    circulo.set_raio(raio);

    std::cout << "\n" << "a area do circulo é " << circulo.area() << "\n";
    std::cout << "\n" << "a circuferencia do circulo é " << circulo.circuferencia() << "\n";

    std::cout <<"\nO raio é de " << circulo.get_raio() << "\n";

    return 0;
}