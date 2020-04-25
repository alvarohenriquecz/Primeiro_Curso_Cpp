//Grafos - lista de adjacência
#include <iostream>
#include <list>
#include <algorithm> //função find
using namespace std;

class Grafo
{
    int v; // número de vértices
    list<int> *adj; // ponteiro para um array contendo as listas adjacentes

public:
    Grafo(int v); //construtor
    void adicionarAresta(int v1, int v2); // adciona uma aresta

    // obtém o grau de saída de um dado vértice
    // grau de saída é o número de arcos que saem de "v"
    int obterGrauDeSaida(int v);

    bool existeVizinho(int v1, int v2); //verifica se o v2 é vizinho de v1
};

Grafo::Grafo(int v)
{
    this->v = v; //atribui o número de vértices
    adj = new list<int>[v]; // cria as listas
}

void Grafo::adicionarAresta(int v1, int v2)
{
    // adiciona vertice v2 a lista de vertices adjacentes de v1
    adj[v1].push_back(v2);
}

int Grafo::obterGrauDeSaida(int v)
{
    //basta retornar o tamanho de lista que é a quantidade de vizinhos
    return adj[v].size();
}

bool Grafo::existeVizinho(int v1, int v2)
{
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end())
        return true;
    return false;
}

int main()
{
    //criando um grafo de 4 vertices
    Grafo grafo(4);

    //adicionando as arestas
    grafo.adicionarAresta(0, 1);
    grafo.adicionarAresta(0, 3);
    grafo.adicionarAresta(1, 2);
    grafo.adicionarAresta(3, 1);
    grafo.adicionarAresta(3, 2);

    //mostrando os graus de saída
    cout << "grau de saida do vertice 3: " << grafo.obterGrauDeSaida(1) << endl;
    cout << "grau de saida do vertice 3: " << grafo.obterGrauDeSaida(3) << endl;

    //verifica se existe vizinhos 
    if(grafo.existeVizinho(0, 1))
        cout << "\n\n eh vizinho  de 0\n";
    else 
        cout << "\n\n nao eh vizinho de 0\n";

    if(grafo.existeVizinho(0, 2))
        cout << "\n\n 2 eh vizinho de 0\n";
    else
        cout << "\n\n NAO eh vizinho de 0\n";
        
    return 0;
}