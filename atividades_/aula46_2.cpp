#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Luiz henrique";

    str.replace(0, 5, "joao "); //substituindo
    cout << "nova string: " << str << endl;

    size_t achou = str.find("Luiz");
    if(achou != string::npos)
        cout << "Achou a substring!" << endl;
    else
        cout << "Substring nao encontrada" << endl;

    cout << endl << endl; 
    string my_str;
    cout << "Digite seu nome: " << endl;
    getline(cin, my_str);
    cout << "Nome digitado: " << my_str << endl;
    return 0;
}