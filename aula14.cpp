#include <iostream>
using namespace std;
bool par(int num);
void mensagem();

 bool par(int num){
        if(num % 2 == 0)
        return true;
    return false;
    }

int main(){
   int n;

   mensagem();
   cout << "Digite um numero: ";
   cin >> n;
   if(par(n))
        cout << "O numero" << n << " eh par" << endl;
   else
        cout << "O numero:" << n << " eh impar" << endl;
    return 0;
} 

void mensagem(){
    cout << "aprendendo c++" << endl;
}
