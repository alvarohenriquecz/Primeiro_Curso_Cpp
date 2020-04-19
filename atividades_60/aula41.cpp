//herança
#include <iostream>
#include <string.h>
using namespace std;
class Animal
{
protected:
    char* nome;
    bool voa;
    int patas;
public:
    Animal(const char* nome){ 
        cout << "Construindo Animal..." << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
        voa = false;
        patas = 0;
    }
    ~Animal()
    {
        delete[] nome;
        nome = 0;
    }
    const char* getNome()
    {
        return nome;
    }
    int getPatas() 
    {
        return patas;
    }
};

class Cachorro : public Animal
{
protected:
    int idade;
public:
    Cachorro(const char* nome): Animal(nome)
    {
        cout << "Construindo cachorro..." << endl;
        idade = 5;
    }
    int getIdade(){
        return idade;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }
};


int main(){
    Cachorro c("Mike");

    cout << "Nome: " << c.getNome()<< endl;
    cout << "Idade: " << c.getIdade()<< endl;
    return 0;
}