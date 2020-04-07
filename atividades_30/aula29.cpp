#include <iostream>
using namespace std;
//structs podem conter metodos
//por padrao os membros de uma structs sao publicos
//public, private and protected
struct Pessoa
{
   public:
    int idade;
    Pessoa(int idade);

    void set_idade(int idade){
        this->idade = idade;
    }

    int getIdade(){
        return idade;
    }
};

Pessoa::Pessoa(int idade)
{
    this->idade = idade;
}

int main(){
    Pessoa p(20);
    cout << p.idade << endl;
}
