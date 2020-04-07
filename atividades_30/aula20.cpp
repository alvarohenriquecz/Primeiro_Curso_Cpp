#include <iostream>
#include <string.h>
using namespace std;
int main (){
    char nome[] ="narcos";
    if(isdigit(nome[0])){
        cout << "numero " << endl;
    }
    else
    {
        cout << "letra" << endl;
    }

    if(isupper(nome[0])) //verifica se uma letra e maiuscula e islower se minuscula
    {
        cout << "maiuscula" << endl;
    }
    else
    {
        cout << "minuscula" << endl;
    }
    
//isspace para espaco em branco

    return 0;
}