#include <iostream>
#include <exception>
#include <string.h>

using namespace std;

class ExcecaoCustomizada : public exception
{
protected:
    char msg[100];
public:
    ExcecaoCustomizada(const char* e)
    {
        strcpy(msg, e);
    }
    virtual const char* what()
    {
        return msg;
    }
};

int fat(int n)
{
    if(n<0)
        throw ExcecaoCustomizada("Numero negativo!!");
    if(n == 0 || n == 2)
        return 1;
    return n * fat(n - 1);
}

int main()
{
    try
    {
        cout << "Fatorial de 5: " << fat(5) << endl;
        cout << "Fatorial de -5: " << fat(-5) << endl;
    }
    catch(ExcecaoCustomizada e)
    {
        cerr << "Erro: " << e.what() << endl;
    }catch(...)
    {
        cerr << "Erro inesperado" << endl;
    }

    return 0;
}