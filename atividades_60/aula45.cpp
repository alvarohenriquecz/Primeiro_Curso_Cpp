#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str =  "rogerio luiz";
    cout << "String:" << str << endl;
    cout << "Tamanho:" << str.size() << endl;
    cout << "Posicao que retorna caract. : " << str.at(1) << endl;

    str.append(" alves");
    str.push_back('2');
    //apagar str.erase(de onde, ate...);
    cout << "Nome completo: " << str << endl;
    return 0;
}