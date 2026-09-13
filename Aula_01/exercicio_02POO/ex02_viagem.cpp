#include <iostream>

class Viagem{

    public:
        double distancia;
        double tempo;

        double velocidade_media(){

            return distancia / tempo;

        }
};

int main(){

    Viagem viagem;

    std::cout << "informe a distancia percorrida: ";
    std::cin >> viagem.distancia;

    std::cout << "\ninforme o tempo gasto na viagem: ";
    std::cin >> viagem.tempo;

    std::cout << "\n" << viagem.velocidade_media() << "\n";
    return 0;
}

/*
        Distancia(km)             tempo(h)                velocidade media(km/h)
            100                      2                               50
            150                      3                               50
            240                      4                               60
            300                      5                               60
            420                      6                               70
*/