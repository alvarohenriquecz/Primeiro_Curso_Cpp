#include <iostream>
using namespace std;
int main(){
    int* vet = new int[10];
    int aux[4];

    aux[0] = 10;
    aux[1] = 20;;
    aux[2] = 30;
    aux[3] = 40;

    for(int i = 0; i < sizeof(aux)/sizeof(int); i++){
        cout << aux[i] << endl;
    }
    return 0;
}