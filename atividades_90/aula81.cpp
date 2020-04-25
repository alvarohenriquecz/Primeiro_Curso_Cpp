//class queue
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> fila;
    //inserindo na fila
    fila.push(10);
    fila.push(20);
    fila.push(30);
    //fila: 10 20 30

    // mostrando o ultimo elemento
    cout << fila.back() << endl;

    if(fila.empty())
        cout << "\nFila Vazia!!";
    else
        cout << "\nFila NAO vazia!!\n";
    
    cout << "Primeiro elemento: " << fila.front() << endl;

    cout << "\nMostrando todos os elementos: ";
    while(!fila.empty())
    {
        int e = fila.front();
        cout << e << " ";
        fila.pop(); // remove do inicio
    }
    cout << "\nTamanho da fila: " << fila.size() << endl;

    

    return 0;
}