#include <iostream>
#include "pilha_aula43.h"

using namespace std;

Pilha::Pilha()
    {
        vet = new int[100];
        max_tam = 99;
        topo = -1;
    }
Pilha::~Pilha()
    {
        delete[] vet;
    }
    void Pilha::empilhar(int e)
    {
        if(topo == max_tam)
            cout << "Pilha cheia!" << endl;
        else
        {
            vet[++topo] = e;
        }
        
    }
    void Pilha::desempilhar()
    {
        if(topo == -1)
            cout << "Pilha vazia!!" << endl;
        else
        {
            topo--;
        }
        
    }
    int Pilha::getTopo()
    {
        if(topo != -1)
            return vet[topo];
         return -1;
    }
    int Pilha::vazio()
    {
        return (topo == -1);
    }

