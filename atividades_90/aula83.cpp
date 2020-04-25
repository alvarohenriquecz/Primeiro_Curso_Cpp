#include <iostream>
#include <set>

using namespace std;

int main()
{
    int vet[] = {10,20,30,40,29,10};
    set<int> myset(vet, vet+5);

    set<int>::iterator it = myset.begin();
    
    cout << "\nMostrando os elementos: ";

    while(it != myset.end())
    {
        cout << *it << " ";
        it++;
    }

//elementos iguais não são repetidos e fica ordenado
    cout << endl;

    //myset.clear();

    it = myset.begin();
    myset.erase(it);

    if(myset.empty())
        cout << "\nConjunto vazio!\n";
    else
        cout << "\n\nConjunto NAO vazio!!\n";

    it = myset.begin();
    cout << "\nMostrando os elementos: ";
    while(it != myset.end())
    {
        cout << *it << " ";
        it++;
    }

    it = myset.find(40);
    if(it == myset.end())
        cout << "\n\nO elemento 40 NAO existe\n";
    else
        cout << "\n\nO elemento 40 existe\n";

    cout << "\nTamanho do conjunto: " << myset.size() << endl;

    return 0;
}