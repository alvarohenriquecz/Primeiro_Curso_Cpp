#include <iostream>
using namespace std;
class Pessoa
{
private:
    int idade;
    int * vet;
public:
    Pessoa(int idade)
    {
        this->idade = idade;
        vet = new int[10];
    }
    ~Pessoa()
    {
        delete [] vet;
    }
    int obterIdade()
    {
        return idade;
    }
};

int main()
{
    Pessoa *p = new Pessoa(20);
    cout << p->obterIdade() << endl;
    delete p;
    
    return 0;
}