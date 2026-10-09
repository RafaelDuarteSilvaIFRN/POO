#include <iostream>

class Viagem{

    private:
        double distancia;
        double tempo;

    public:
            Viagem(){
                distancia = 0;
                tempo = 0;
            }

            void set_distancia(double d){
                if(d > 0.0){
                    distancia = d;
                }else{
                    std::cout << "distancia informada invalida!" << std::endl;
                }
            }

            void set_tempo(double t){
                if(t > 0.0){
                    tempo = t;
                } else{
                    std::cout << "tempo informado invalido!" << std::endl;
                }
            }

            double get_distancia(){
                   return distancia; 
            }

            double get_tempo(){
                return tempo;
            }

            double velocidade_media(){
                if(tempo > 0 && distancia > 0){
                    return distancia / tempo;
                } else{
                    std::cout << "Não é possivel calcular a velocidade!" << std::endl;
                    return 0;
                }
            }

};

int main(){

    Viagem viagem;

    double distancia;
    double tempo;

    std::cout << "Informe a distancia: ";
    std::cin >> distancia;
    viagem.set_distancia(distancia);

    std::cout << "\nInforme o tempo percorrido: ";
    std::cin >> tempo;
    viagem.set_tempo(tempo);


    std::cout << "\nA velocidade media é de " << viagem.velocidade_media() << " km/h" << "\n";
 
    std::cout << "Distancia = " << viagem.get_distancia() << "\n";
    std::cout << "Tempo = " << viagem.get_tempo() << "\n";

    return 0;
}

/*
        Distancia(Km)             tempo(h)                velocidade media(km/h)
            100                      2                               50
            150                      3                               50
            240                      4                               60
            300                      5                               60
            420                      6                               70
*/