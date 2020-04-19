#include <iostream>
using namespace std;
//inline vai aumentar a velocidade da função void
//deve ter cuidado com uma sobrecarga de desempenho
inline void foo()
{
    cout << "Apredendo Cpp" << endl;
}

int main()
{
    foo();
    return 0;
}