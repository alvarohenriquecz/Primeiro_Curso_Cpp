//lista encadeada 1.1 simples
#include <iostream>

using namespace std;

class No
{
private:
    int v;
    No* prox;
public:
    No(int v)
    {
        this->v=v;
        this->prox=NULL;
    }

    int obterValor()
    {
        return v;
    }

    No* obterProx()
    {
        return prox;
    }

    void setProx(No * p)
    {
        prox = p;
    }
};

class Lista
{
private:
//primeiro elemento da lista e o final da lista
    No* cabeca;
    No* cauda;
public:
     Lista()
     {
         cabeca = NULL;
         cauda = NULL;
     }
     Lista(int v)
     {
         cabeca = new No(v);
         cauda = cabeca;
     }
     virtual ~Lista()
     {
         delete cabeca;
     }
     void mostra()
     {
         cout << "\nImprimindo todos elementos...\n";
         No* c = cabeca;
         if(vazia())
            cout << "A lista nao possui elementos!\n";
        else
        {
            while (c)
            {
               cout << c->obterValor() << endl;
               c = c->obterProx();
            }
            cout << endl;
            
        }
        
     }

     bool vazia()
     {
         return(cabeca==NULL);
         
     }
     void inserir_inicio(int v)
     {
         No* novo_no = new No(v);
        
        novo_no->setProx(cabeca);
        cabeca = novo_no;
     }
     void inserir_final(int v)
     {
         No* novo_no = new No(v);

         if(vazia())
         {
             cabeca = novo_no;
             cauda = novo_no;
         } 
         else
         {
             cauda->setProx(novo_no);
             cauda = novo_no;
         }
         
     }

     int tamanho()
     {
         if(vazia)
            return 0;
        No* c = cabeca;
        int tam = 0;
        do
        {
            c = c->obterProx();
            tam++;
        }
        while(c);
     }

     bool existe(int v)
     {
         No* c = cabeca;
         while(c)
         {
             if(c->obterValor()==v)
                 return true;
            c = c->obterProx();
         }
         return false;
     }

     void remover()
     {
            if (!vazia)
            {
                //se houver só 1 elemento
                if(cabeca->obterProx() == NULL)
                    cabeca = NULL;
                else if(cabeca->obterProx()->obterProx()==NULL)//2elementos
                    cabeca->setProx(NULL);
                else//> 2 elementos
                {
                    No* ant_ant = cabeca;
                    No* ant = cabeca->obterProx();
                    No* corrente = cabeca->obterProx()->obterProx();

                    while(corrente)
                    {
                        No* aux= ant;
                        ant = corrente;
                        ant_ant = aux;
                        corrente = corrente->obterProx();
                    }
                    delete ant_ant->obterProx();
                    ant_ant->setProx(NULL);
                    cauda = ant_ant;
                }
            }
            
     }
};

int main()
{
    Lista l;

    if(l.vazia())
        cout<<"Lista vazia" << endl;
    else 
        cout<<"Lista nao vazia" << endl;

    l.mostra();

    if(l.existe(10))
        cout << "O elemento 10 existe na lista" << endl;
    else 
        cout << "O elemento 10 nAO existe na lista\n" << endl;

    l.inserir_final(10);
    l.inserir_final(20);
    l.inserir_final(30);
    l.inserir_final(40);
    l.inserir_final(50);

    l.mostra();

    if(l.vazia())
        cout << "Lista vazia\n";
    else
        cout << "Lista nao vazia\n";
    if(l.existe(10))
        cout << "O elemento 10 existe na lista" << endl;
    else 
        cout << "O elemento 10 nAO existe na lista\n" << endl;
    
    return 0;
}
