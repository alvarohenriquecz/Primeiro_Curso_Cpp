#include <iostream>
using namespace std;
class Conta{
public:
    int numero;
    double saldo;
   double depositar(double quantidade){
        if(quantidade > 0)
            saldo += quantidade;
        return saldo;
    }

    double retirar(double quantidade){
        if(quantidade > 0 && saldo >= quantidade)
            saldo -= quantidade;
        return saldo;
    }

    double getSaldo(){
        return saldo;
    }
};

void foo(Conta* pc){
    pc->depositar(50);
}

int main(){
    Conta c;
    Conta* pc = &c;

    pc ->numero = 1;
    pc->saldo = 200;
//faz uma copia do valor inicial, voce pode escolher colocar a copia ou nao
//sem mudanças permanentes
    foo(&c);

    cout << "Saldo: " << pc->getSaldo() << endl;
    return 0;
}