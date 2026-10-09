#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <iomanip>

class Frete{

    private:
        double distancia;
        double peso;
    
    public:
        Frete(double d, double p){

            if(d > 0 && p > 0){
               distancia = d;
               peso = p; 
            } else {
               throw std::invalid_argument("valores precisam ser positivos");
            }

        }

        void SetDistancia(double d) {
            if (d > 0){
                distancia = d;
            } else{
                throw std::invalid_argument("Valor de distancia precisa ser positivo");
            }
        }

        void SetPeso(double p) {
            if (p > 0){
                peso = p;
            } else{
                throw std::invalid_argument("Valor de peso precisa ser positivo");
            }    
        }

        double GetDistancia() const{
            return distancia;
        }

        double GetPeso() const{
            return peso;
        }

        double CalcFrete() const{
               return distancia * peso * 0.01;
        }

        std::string ToString() const{
             std::ostringstream stream;   
             stream << std::fixed << std::setprecision(2);   
             stream << "distancia = " << GetDistancia() << " Km" <<
             "\npeso = " << GetPeso() << " Kg" <<
             "\nfrete = " << CalcFrete() << " Reais";
             
            return stream.str(); 
        }
};

int main(){

    double distancia;
    double peso;

    std::cout << "Qual a distancia do seu frete? " << std::endl;
    std::cin >> distancia;

    std::cout << "Qual o peso do seu frete? " << std::endl;
    std::cin >> peso;
  
    Frete frete(distancia, peso);
    std::cout << frete.ToString() << std::endl;

    return 0;
}