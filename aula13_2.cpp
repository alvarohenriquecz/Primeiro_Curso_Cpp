//Calculando o Fatorial de um numero
#include <iostream>
using namespace std;
int main(){
    int num, fat;
    fat =1;
    cout << "Digite um numero: " << endl;
    cin >>num;
    for(int i =1; i < num; i++){
        fat = fat*(i+1);
    }
    cout << "Fotorial: " << fat <<endl;
    return 0;
}