/*
queue - FIFO - First in, first out
priority queue - fila de prioridades
*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(100);
    pq.push(50);

    //maior prioridade
    cout << pq.top() << endl;

    if(pq.empty())
        cout << "Fila vazia!!\n";
    else 
        cout << "\nFila NAO vazia!!\n";

    cout << "\nMostrando os elementos: ";

    cout << "\nTamanho da Fila: " << pq.size() << endl;

    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << "\nTamanho da Fila depois de retirar: " << pq.size() << endl;

    cout << endl;

    return 0;
}
