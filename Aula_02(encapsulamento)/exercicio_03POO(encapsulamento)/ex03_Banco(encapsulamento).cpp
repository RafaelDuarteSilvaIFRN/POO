#include <iostream>

class Banco{

    private: 
        std::string titular;
        int numero_conta;
        double saldo;

    public:
        
        Banco(){
            titular = "";
            numero_conta = 0;
            saldo = 0.0;
        }

        void set_titular(std::string new_titular){
            if(new_titular != ""){
               titular = new_titular; 
            } else{
                std::cout << "Titular invalido" << "\n";
            }
        }

        void set_conta(int new_conta){
             if(new_conta > 0){
                numero_conta = new_conta;
             } else{
                std::cout << "numero de conta invalida!" << "\n";
             }
        }

        void set_saldo(double new_saldo){
            if(new_saldo >= 0.0){
                saldo = new_saldo;
            } else{
                std::cout << "Saldo Invalido!" << "\n";
            }
        }

        std::string get_titular(){
            return titular;
        }

        int get_conta(){
            return numero_conta;
        }

        double get_saldo(){
            return saldo;
        }

        void deposito(double new_deposito){
            if(new_deposito > 0.0){
                saldo += new_deposito;
            }
        }

        
        void saque(double new_saque){
            if(new_saque > 0.0 && new_saque <= saldo){
                saldo -= new_saque;
            } else{
                std::cout << "Saque invalido!\n";
            }
        }
};

int main(){

    Banco banco;

    std::string titular;
    int numero_conta;

    std::cout << "informe seu titular: ";
    std::cin >> titular;
    banco.set_titular(titular);

    std::cout << "informe seu numero de conta: ";
    std::cin >> numero_conta;
    banco.set_conta(numero_conta);

    bool verificar = true;

    while(verificar){

        int escolha;
        double novo_deposito;

        std::cout << "Informe oque deseja fazer a seguir " << "\n";
        std::cout << "[1] Deposito     [2] Saque    [3]Informações da conta    [4]Sair\n";

        std::cin >> escolha;

        switch(escolha){

            case 1: {

                std::cout << "Informe o valor do novo deposito: ";
                std::cin >> novo_deposito;
                banco.deposito(novo_deposito);
                break;
            }

            case 2:{
                std::cout << "Informe o valor de saque: ";
                std::cin >> novo_deposito;
                banco.saque(novo_deposito);
                break;
            }

            case 3: {
                std::cout << "Titular: " << banco.get_titular() << "\n";
                std::cout << "conta: " << banco.get_conta() << "\n";
                std::cout << "Saldo: " << banco.get_saldo() << " Reais" << "\n";
                break;
            }

            case 4:{
                verificar = false;
                break;
            }

        }

    }
    return 0;
}