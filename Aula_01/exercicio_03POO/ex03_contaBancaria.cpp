#include <iostream>
#include <string>

class Banco{

    public:
        std::string nome;
        int conta_num;
        double saldo_conta = 0;

        void deposito(double novoDeposito){
            if(novoDeposito > 0){
                saldo_conta += novoDeposito;
                std::cout << "novo valor de " << novoDeposito << " reais foi transferido para a sua conta\n";
            }
        }
        void saque(double novoSaque){

            if(novoSaque > 0 && novoSaque <= saldo_conta){
                saldo_conta -= novoSaque;
                std::cout << "novo valor de " << novoSaque << " foi sacado da sua conta";
            } else {
                std::cout << "valor de saque invalido! seu saldo atual esta abaixo do limite de saque permitido";
            }
        }

        double saldoAtual(){
            return saldo_conta;
        }
};


int main(){

    Banco banco;

    double deposito;
    double saque;

    std::cout << "Informe o titular da conta: ";
    std::getline(std::cin, banco.nome);

    std::cout << "\ninforme o numero da conta: ";
    std::cin >> banco.conta_num;

    std::cout << "\nescolha as 3 opções abaixo para a sua conta";
    bool verificar = true;
    do{

    std::cout << "\nDeposito[1]   |   Saque[2]   |  verificar saldo[3] |  Sair[4]\n";

    int selecione;
    std::cin >> selecione;
    switch(selecione){

        case 1: {

            std::cout << "\ninforme o valor que você deseja depositar na sua conta: \n";
            std::cin >> deposito;

            banco.deposito(deposito);
            //std::cout << "novo valor de " << deposito << " reais foi transferido para a sua conta\n";
            break;
        }

        case 2: {

            std::cout << "\ninforme o valor que você deseja sacar da sua conta: \n";
            std::cin >> saque;

            banco.saque(saque);
            break;
        }

        case 3: {

            std::cout << "Titular: " << banco.nome;
            std::cout << "\nnumero da conta: " << banco.conta_num;
            std::cout << "\nSaldo atual = " << banco.saldoAtual() << " reais";
            break;
        }

        case 4: {
            verificar = false;
            break;
        }

    }
    } while(verificar);

    std::cout << "\napp fechado!\n";

    return 0;
}
