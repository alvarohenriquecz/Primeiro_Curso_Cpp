#include <iostream>
using namespace std;
//parametros opcionais
int quad(int num)
{
    return num * num;
}

int main()
{
    int num =10;

    cout << "Quadrado: " << quad(num) << endl;
    return 0;
}