#include <iostream>
#include <string.h>
using namespace std;
//struct e para usar agrupamentos de dados
typedef struct pessoa
{
    char nome[100];
    int idade;
}t_pessoa;

int main(){
    t_pessoa pessoa[100];
    t_pessoa* p;

    p= &pessoa[0];
    pessoa[0] .idade =46;
    pessoa[1] .idade =45;
    pessoa[2] .idade =12;


    cout << "A idade de Dr. Alvaro e:" <<p->idade << endl;
    cout << "A idade de Dr. Mike e:" <<(p +1)->idade<< endl;
    cout << "A idade do filho de mike e:" <<(p +2)->idade << endl;

    return 0;
}
