#include <iostream>

class Cinema {

    private:
        std::string dia;
        double horario;

    public:
        Cinema(){
            dia = "";
            horario = 0.0;
        }
        
        void set_dia(std::string d){
            if(d != ""){
                dia = d;
            } else{
                std::cout << "esse campo não pode ser vazio!";
            }
        }

        void set_horario(double h){
            if(h >= 0.0 && h <= 24.0){
                horario = h;
            } else{
                std::cout << "Horario invalido!";
            }
        }

        std::string get_dia(){
            return dia;
        }

        double get_horario(){
            return horario;
        }

        double inteira(){

            double ingresso;

            if(dia == "Segunda" || dia == "Terça" || dia == "Quinta"){
                ingresso = 16.0;
            } else if(dia == "Quarta"){
                ingresso = 8.0;
            } else if(dia == "Sexta" || dia == "Sabado" || dia == "Domingo"){
                ingresso = 20.0;
            }
        
            if(horario >= 17.0 && horario <= 24.0 && dia != "Quarta"){
              return ingresso * 1.5;
            }

            return ingresso;

        }

        double meia_entrada(){
            return inteira() / 2;
        }

};

int main(){

    Cinema cinema;

    std::string dia;
    double horario;
    std::string meia;

    std::cout << "Bem-vindo ao site de compras de ingresso para o cinema!" << std::endl;
    std::cout << "Digite o dia da sessão: ";
    std::cin >> dia;
    cinema.set_dia(dia);

    std::cout << "\ndigite o horario da sessão: "; 
    std::cin >> horario;
    cinema.set_horario(horario);

    std::cout << "deseja a meia entrada para o cinema?\n";

    std::cin >> meia;

    if((meia == "Sim" || meia == "sim") && dia != "Quarta"){
       std::cout << "O valor dos ingressos para meia entrada é de: ";
       std::cout << cinema.meia_entrada() << " reais\n";
    } else{
       std::cout << "O valor do ingresso inteiro é de "; 
       std::cout << cinema.inteira() << " reais\n";
    }

    return 0;
}

