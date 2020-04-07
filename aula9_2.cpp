#include <iostream>
using namespace std;
int main(){
    int n = 11;

    bool var = 10 < 20;    // valores bool 0 falso e 1 verdadeiro
    if(var){
        cout << "Verdadeiro" << endl;
    }



    if((n% 2 == 0) && n <20){ //Operadores logicos de programacao em c++ ou e e 
        cout << "mensagem" << endl;
    }
    else  if((n % 2 == 0) || n <20){
        cout << "Mensagem  2" << endl;        
    }
    else {
        cout << "Mensagem 3" << endl;
    }
    return 0;
}