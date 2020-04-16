#include <iostream>
#include <string>
using namespace  std;

void showMessage(const char* str)
{
    cout << str << endl;
}

int main()
{
    string str = "Alvaro henrique alves";
    cout << "Nome: " << str << endl;
    str.insert(str.size(), "de lima");
    cout << "Nome completo: " << str << endl;
    str.erase(0, str.size());
    //ou str.clear(); que apaga todos os parametros
    if(str.empty())
        cout << "String vazia!" << endl;
    else 
        cout << "String nao vazia!!!" << endl;
    //showMessage(str); vai retornar uma str do C ERROR
    return 0;
}