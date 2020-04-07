#include <iostream>
using namespace std;
int main(){
    int* vet = new int[10];
    int aux[4];

    cout << "Digite um numero: " << endl;
    cin >> aux[0];
    cout << "Voce digitou: " << aux[0] << endl;
    cout << "Digite outro numero: " << endl;
    cin >> *(aux + 1);
    cout << "Voce agora digitou: " << aux[1] << endl;
//ou
    cout << "Digite um novo numero: " << endl;
    cin >> *(vet);
    cout << "Voce digitou: " << *(vet) << endl;
    cout << "Digite mais um novo numero: " << endl;
    cin >> *(vet + 1);
    cout << "Voce agora digitou: " << *(vet + 1) << endl;
    delete vet;
    vet = NULL;
    return 0;
}
//ponteiros parte 2