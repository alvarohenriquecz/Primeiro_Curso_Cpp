#include <iostream>
#include "pilha_aula43.h"

using namespace std;
int main()
{
    Pilha p;

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);

    p.desempilhar();

    cout << "Pilha vazia: " << p.vazio() << endl; // 0 false e 1 true
    cout << "Topo: " <<p.getTopo() << endl; 
    return 0;

}