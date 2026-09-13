#include <iostream>
#include <cmath>
const float pi = 3.1415f;

class Circulo{

    public:
        double raio;

        double area(){
            return pi * std::pow(raio, 2);
        }

        double circuferencia(){
            return 2 * pi * raio;
        }

};


int main (){

    double raio;
    Circulo circulo;

    std::cout << "\n" << "informe o raio: ";
    std::cin >> raio;

    circulo.raio = raio;

    std::cout << "\n" << "a area do circulo é " << circulo.area() << "\n";
    std::cout << "\n" << "a circuferencia do circulo é " << circulo.circuferencia() << "\n";

    return 0;
}

/*
        raio           Area              circuferencia
        2              12.566               12.566
        4              50.264               25.132      
        6              113.094              37.698       
        8              201.056              50.264
        10              314.15              62.83
        */