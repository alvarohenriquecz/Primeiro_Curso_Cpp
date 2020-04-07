#include <iostream>
#include <string.h>
using namespace std;
typedef struct pessoa
{
    char nom2[100];
    int idade;
    int ano;
    char cpf[20];
}t_pessoa;

int main(){
    char nomes[3][100] = {"marcos", "Alvaro", "Gabriel"};
    int idades[3] = {31, 18, 19};
    cout << "Nome: " << nomes[0] << endl;
    cout << "Idade: " << idades[0] << endl;

    t_pessoa p[10];
    strcpy(p[0].nom2, "Henrique");
    p[0].idade = 26;

      strcpy(p[1].nom2, "alvaro");
    p[1].idade = 13;

    cout << "Nome: " << p[0].nom2 << endl;
    cout << "Idade: " << p[0].idade << endl;

    cout << "Nome: " << p[1].nom2 << endl;
    cout << "Idade: " << p[1].idade << endl;

    return 0;
}