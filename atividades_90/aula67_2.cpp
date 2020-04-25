#include <iostream>
#include "lista.h"

int main()
{
    Lista<string> l;

    l.inserir_final("python");
    l.inserir_final("c++");
    l.inserir_final("ruby");
    l.inserir_inicio("hacker");

    l.mostrar();
    
    return 0;
}