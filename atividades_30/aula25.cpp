#include <iostream>
using namespace std;
//ponteiros
int main(){
    int var = 10;
    int * p1, * p2;

    p1 =&var;
    p2 =&var;

    *p2 = 20;
    *p1 = 15;

    cout << p1 << endl;
    cout << p2 << endl;
    cout << &var << endl;
    cout << var << endl;

    if(p1 == p2)
        cout << "P1 aponta para o mesmo endereco de p2" << endl;

    return 0;
}