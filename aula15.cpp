#include <iostream>
using namespace  std;
void mensagem (int n){
    cout << "numero: " << n << endl;  //mensagem precisa ter tipo de diferente de argumentos
}
void mensagem(char c){
    cout << "Caractere: " << c << endl;
}
int soma(int n1, int n2){
    return n1 +n2;
}
int soma(int n1, int n2, int n3){
    return n1 +n2 +n3;
}

int main(){ 
    mensagem(10);
    mensagem('A');
    cout << "Soma1: " << soma(1, 2) << endl;
    cout << "soma2: " << soma(1,2,3) << endl;
    return 0;
}
