#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>

class Retangulo{

    private:
        double base;
        double altura;
    
    public:
        Retangulo(double b, double h){
            if (b >= 0 && h >= 0){
                base = b;
                altura = h;
            } else{
                throw std::invalid_argument("Medidas invalidas");
            }
        }

        void SetBase(double b){
             if (b >= 0){
                 base = b;
             } else {
                throw std::invalid_argument("medida invalida");
             }
        }

        void SetAltura(double h){
             if (h >= 0){
                 altura = h;
             } else {
                throw std::invalid_argument("medida invalida");
             }
        }
        
        double GetBase() const{
            return base;
        }

        double GetAltura() const {
            return altura;
        }

        double CalcArea() const{
               return base * altura; 
        }

        double CalcDiagonal() const {
              return std::sqrt(base * base + altura * altura); 
        }

      std::string ToString() {
          return "Base = " + std::to_string(GetBase()) +
           "\nAltura = " + std::to_string(GetAltura()) +
           "\nArea = " + std::to_string(CalcArea()) +
           "\nDiagonal = " + std::to_string(CalcDiagonal());
}

};

int main(){

    Retangulo retangulo(0, 0);
    double base;
    double altura;

    std::cout << "Insira a base do retangulo: ";
    std::cin >> base;
    retangulo.SetBase(base);


    std::cout << "Insira a Altura do retangulo: ";
    std::cin >> altura;
    retangulo.SetAltura(altura);

    std::cout << retangulo.ToString() << std::endl;

    return 0;
}