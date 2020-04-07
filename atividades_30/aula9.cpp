//estrutura aninhada
#include <iostream>

using namespace std;
int main(){
    int num = 10;
    if (num > 5){
        if (num <=10)
        {
            cout << "numero maior do que 5 e menor ou igual a 10" << endl;
        }
        else
        {
            cout << "numero maior que 5 e maior que 10" << endl;
        }
        
    }
    else
    {
       cout << "numero menor do que 5" << endl;
    }
    
    return 0;
}