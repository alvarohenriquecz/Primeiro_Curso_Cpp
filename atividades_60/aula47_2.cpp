#include <iostream>
using namespace std;
class Carro
{
    private:
    int ano;
    public:
    Carro(int ano)
    {
        this->ano = ano;
    }
    int getAno()
    {
        return ano;
    }
    void setAno(int ano)
    {
        this->ano = ano;
    }
};

int main()
{
    Carro c(2010);
    cout << "Ano: " << c.getAno() << endl;
    return 0;
}