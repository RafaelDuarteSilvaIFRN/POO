#include <iostream>
#include<stdexcept>
#include<string>

class Conversor{

    private:
        int num;

    public:
        Conversor(int n){
            if (n >= 0){
                num = n;
            } else{
                throw std::invalid_argument("numero precisa ser positivo");
            }
        }

        void SetNum(int n){
            if (n >= 0){
                num = n;
            } else{
                throw std::invalid_argument("numero precisa ser positivo");
            }
        }

        int GetNum() const{
            return num; 
        }

        std::string Binario(){

            std::string binario = "";

            if(num == 0){
                binario = "0";
            }{
                while (num > 0){
                    
                    int resto = num % 2;
                    binario = std::to_string(resto) + binario;
                    num = num / 2;
                }
            }

            return binario;
        }

        std::string ToString(){

            return "numero decimal = " + std::to_string(num) +
                   "\nnumero em binario = " + Binario();

        }
};

int main(){

    int numero_decimal;

    std::cout << "Adicione um numero em decimal: ";
    std::cin >> numero_decimal;

    Conversor conversor(numero_decimal);

    std::cout << conversor.ToString() << std::endl;

    return 0;
}