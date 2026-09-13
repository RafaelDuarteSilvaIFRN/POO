#include <iostream>

class Cinema {

    public: 
        std::string dia;
        int horario;
        double ingresso;

        double inteira(){
            ingresso = 0;

            if(dia == "Segunda" || dia == "Terça" || dia == "Quinta"){
                ingresso = 16.0;
                
                if(horario >= 17 && horario <= 24){
                    ingresso *= 1.5;
                }
                
            }
 
            if(dia == "Sexta" || dia == "Sabado" || dia == "Domingo"){
                ingresso = 20.0;
 
                if(horario >= 17 && horario <= 24){
                    ingresso *= 1.5;
                }

            }

            return ingresso;
        }

        double meiaEntrada(){
            return 8.0;
        }

};

int main(){

    Cinema cinema;
    std::cout << "informe o dia da sessão:\n" ;
    std::cin >> cinema.dia;

    std::cout << "\ninforme o horario da sessão:\n";
    std::cin >> cinema.horario;

    if(cinema.dia == "Quarta"){

       std::cout << "O valor do ingresso para " << cinema.dia << " é de " 
       << cinema.meiaEntrada() << " Reais" << "\n";

    }else{
        
      std::cout << "O valor do ingresso para " << cinema.dia << " é de " 
       << cinema.inteira() << " Reais" << "\n";

    }
    return 0;
}
