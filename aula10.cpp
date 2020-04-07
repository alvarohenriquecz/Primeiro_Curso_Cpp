#include <iostream>
using namespace std;

int main(){
    int num = 10;

    switch(num){
        case 9:
            cout << "numero 9" << endl;
            break;
        case 10:
            cout << "numero 10"<< endl;
            break;
        case 11:
            cout << "numero 11" << endl;
            break;
        default:
            cout << "numero nao encontrado" << endl;
    }

    return 0;
}