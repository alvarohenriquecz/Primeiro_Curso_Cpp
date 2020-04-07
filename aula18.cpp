#include <iostream>
using namespace std;
int main(){
    int vetor[8] = {1,2,3,4,5,6,7,8}; //...
    for(int i = 0; i <8; i++){
     //vai do indice 0 até n-1(n ultimo vetor)
        cout << vetor[i] << endl;
    }
     cout << sizeof(vetor) << endl;
    return 0;
}