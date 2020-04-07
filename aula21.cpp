#include <iostream>
using namespace std;
//ponteiros

void foo(int* n){
    *n = 20;
}

int main(){
    int var =10;
    int* pvar;

    pvar = &var;
    foo(&var);
    cout << *pvar << endl;
    cout << var << endl;

    return 0;
}