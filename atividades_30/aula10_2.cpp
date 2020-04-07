/*
    Calculadora
    Operacao permitidas
    + adicao
    - subtracao
    * multiplicacao
    / divisao
*/

#include <iostream>

using namespace std;
int main(){
    int num1, num2;
    int resultado;
    float div;
    char op; //operacao

    cout << "Digite o primeiro numero:" << endl;
    cin >> num1;
    cout << "Digite o segundo numero:" <<endl;
    cin >> num2;
    cout << "Digite a operacao:" <<endl;
    cin >> op;

    switch ((op))
    {
    case '+':
        resultado = num1 +num2;
        cout << "Soma:" << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Subtracao:" << resultado << endl;
        break;
    case '*':
        resultado = num1 *num2;
        cout << "Multiplicacao" << resultado << endl;
        break;
    case '/':
        if(num2 != 0){
            div = (float)num1/num2;
            cout << "Divisao:" << div << endl;
        }
        else{
            cout << "Nao e possivel fazer a divisao, divisao por 0" << endl;
        }
        break;
    default:
        cout << "Operacao inexistente" << endl;
        break;
    }    

    return 0;
}