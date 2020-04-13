#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;
class Carro{
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

// ordenação utilizando o algoritmo bubble sort
void ordena(Carro carros[], int tam){
    int i, j;
    Carro aux;

    for (int i =tam; i >= 0; i--){

        for(int j = 1; j <= i; j++){
           if((strcmp(carros[j-1].nome, carros[j].nome)) == 1){
            strcpy(aux.nome, carros[j-i].nome);
            aux = carros[j-1];
            carros[j-1]= carros[j];
            carros[j] = aux;
           }
        }
    }
}


int main(){
    Carro carros[MAX];
    int i = 0;

    while (true)
    {
        char resp;
        cout << "Digite o nome do carro: ";
        cin >> carros[i] .nome;
        cout << "Digite o preco: ";
        cin >> carros[i] .preco;
        cout << "Voce deseja continuar? <S>Sim ou <N> Nao ";
        cin >> resp;
        if(resp != 'S'){
            break;
        }
        cout << endl;
        i++;
    }     
       cout << endl;
       cout << "Exibindo todos os carros..." << endl;
    for(int j= 0; j<= i; j++){
        cout << "Nome do carro: " << carros[j].nome << endl;
        cout << "Valor do carro: R$" << carros[j].preco << endl;
        cout << endl;
    }
    char novaresp;
    cout << "Deseja ver ordenado por nome? <S>Sim ou <N> Nao" << endl;
    cin >>novaresp;
    if (novaresp != 'S' || 's'){
        ordena(carros, i);
        cout << "Exibindo os carros ordenados pelo nome...\n\n";
        for(int j= 0; j<= i; j++){
            cout << "Nome do carro: " << carros[j].nome << endl;
            cout << "Valor do carro: R$" << carros[j].preco << "\n\n";
            cout << endl;
        }
    }
    return 0;
}