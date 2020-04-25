//TAD fila
#include <iostream>
#include "fila.h"




int main()
{

    Fila<double> f1;
    cout << "Antes de inserir elementos...\n";


    if(f1.vazia())
        cout << "Fila vazia!!" << endl;
    else
        cout << "Fila NAO vazia\n\n";


    try
    {
        double e = f1.remover();
        cout << "Removido o elementos: " << endl;
    }
    catch(const char* msg)
    {
        cerr << "Erro: " << msg << endl;
    }


    f1.inserir(5.67);
    f1.inserir(4.23);
    f1.inserir(8.7);


    cout << "\nDepois de inserir elementos\n";
    if(f1.vazia())
        cout << "Fila vazia!!" << endl;
    else
        cout << "Fila NAO vazia\n\n";
        

    try
    {
        cout << "Elemento da frente: " << f1.frente() << endl;
    }
    catch(const char * msg)
    {
        cerr << "Erro: " << msg << endl;
    }

    try
    {
        cout << "Elemento final: " << f1.final() << endl;
    }
    catch(const char * msg)
    {
        cerr << "Erro: " << msg << endl;
    }

    try
    {
        double e = f1.remover();
        cout << "Removido o elemento: " << e << endl;
    }
    catch(const char * msg)
    {
        cerr << "Erro: " << msg << endl;
    }

    try
    {
        cout << "Elemento da frente agora e: " << f1.frente() << endl;
    }
    catch(const char * msg)
    {
        cerr << "Erro: " << msg << endl;
    }
    
    Fila<string> f2;

    f2.inserir("c++");
    f2.inserir("python");
    f2.inserir("ruby");
    cout << "\n\nFila de strings...\n";

    try
    {
        cout << "Elemento da frente: " << f2.frente() << endl;
    }    
    catch(const char * msg)
    {
      cerr << "Erro: " << msg << endl;  
    }

    try
    {
        cout << "Elemento final: " << f2.final() << endl;
    }
    catch(const char * msg)
    {
        cerr << "Erro: " << msg << endl;
    }



    return 0;
}