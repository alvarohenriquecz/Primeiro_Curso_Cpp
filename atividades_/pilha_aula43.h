//somente os prototipos

#include <iostream>
using namespace std;
class Pilha
{
private:
    int * vet;
    int max_tam;
    int topo;
public:
    Pilha();
    ~Pilha();
    void empilhar(int e);
    void desempilhar();
    int getTopo();
    int vazio();
};
