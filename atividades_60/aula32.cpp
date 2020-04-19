#include <iostream>
using namespace std;
class Conta{
public:
    int numero;
    double saldo;
    double depositar(double quantidade);
    double depositar(int quantidade);

    double retirar(double quantidade){
        if(quantidade > 0 && saldo >= quantidade)
            saldo -= quantidade;
        return saldo;
    }
};

double Conta::depositar(double quantidade){
        if(quantidade > 0)
            saldo += quantidade;
        return saldo;
    }
    

double Conta::depositar(int quantidade){
    if(quantidade > 0)
        saldo += quantidade;
    return saldo;
}

int main(){
    Conta c;
    Conta* pc = &c;
    c.numero =1;
    c.saldo = 100.75;
    (*pc).numero = 1;
    (*pc).saldo =200;

    cout << "Saldo: " << c.saldo << endl;
    cout << "Saldo depois do deposito: "<< c.depositar(100) << endl;
    cout << "Saldo depois do saque: " << c.retirar(200) << endl;
    return 0;
}