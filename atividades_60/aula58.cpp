#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l1;
    list<int> l2(3, 10); // 3 inteiros com valor 10
    list<int>::iterator it;

    l1.push_back(10); //l1: 10
    l1.push_front(20); //l1: 20, 10
    l1.push_back(30); // l1: 20, 10 ,30

    cout << "Mostrando os elementos de l1\n";
    for(it = l1.begin(); it !=l1.end(); it++)
        cout << *it << endl;

    cout << "mostrando elementos de l2\n";
    for(it = l2.begin(); it != l2.end(); it++)
        cout << *it << endl;
    cout << "\nprimeiro elemento de l1: " << l1.front() << endl;
    cout << "\nultimo elemento de l2: " << l2.back() << endl;

    cout << "\n Tamanho de l1: " << l1.size() << endl;

    l1.pop_front();
    l1.pop_back();

    cout << "\n Mostrando novamente os elementos de l1\n";
    for(it = l1.begin(); it!= l1.end(); it++)
        cout << *it << endl;

    while(!l2.empty())
        l2.pop_front();

    cout << "Novo tamanho de l2: " << l2.size() << endl;
    
    int vet[] = {1, 2 ,3, 4};
    l2.assign(vet, vet+4);

    cout << "\nMostrando novos elementos de l2:\n";
    for(it = l2.begin(); it!= l2.end(); it++)
        cout << *it << endl;

    l2.insert(l2.begin(), 100);
    cout << "\nMostrando novamente elementos de l2:\n";
    for(it = l2.begin(); it!= l2.end(); it++)
        cout << *it << endl;
    return 0;
}