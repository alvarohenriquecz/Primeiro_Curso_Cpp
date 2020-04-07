#include <iostream>
using namespace std;
int num_global =12;
void foo(){
    int num_static =1;
    int num_local = 10;
    cout << "Var local: " << num_local << endl;
    cout << "Var global: " << num_global << endl;
    num_static++;
    cout << "Variavel estatica: " << num_static << endl;

}

int main (){
    foo();
    foo();
    foo();
    return 0;
}