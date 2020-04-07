#include <iostream>
using namespace std;
//algumentos da funcao main
int main(int argc, char *argv[])
{
    int n1 = 10, n2 = 20, n3 = 30;
    int* parray[3] = {&n1, &n2, &n3};


    parray[0];
    parray[1];
    parray[2];
    cout << *parray[0] << endl;
    cout << *parray[1] << endl;
    cout << *parray[2] << endl;


    cout << "argc: " << argc << endl;
    cout << "argv: " << argv[0] << endl;

    cout << "Quantidade de argumentos passados: " << argc << endl;
    cout << "Argumentos passados: " << endl;

    for(int i =0; i < argc; i++)
        cout << argv[i] << endl;
    return 0;
}
