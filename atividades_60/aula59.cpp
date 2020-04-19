#include <iostream>
#include <list>

using namespace std;

bool par(const int& n)
{
    return(n%2==0);
}

bool comparar_tamanho(const string& s1, const string& s2)
{
    if(s1.length() < s2.length())
        return true;
    return false;
}

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


        //parte2

    it = l2.begin();
    it++;
    l2.insert(it, 200);
      cout << "\nMostrando new elementos de l2:\n";
    for(it = l2.begin(); it!= l2.end(); it++)
        cout << *it << endl;



    l2.insert(l2.begin(), 2, 50);
      cout << "\nMostrando new_2 elementos de l2:\n";
    for(it = l2.begin(); it!= l2.end(); it++)
        cout << *it << endl;


    list<int>::iterator it2 = l2.begin();
    it2++;
    it2++;
    l2.erase(l2.begin(), it2);
      cout << "\nMostrando novamente elementos de l2:\n";
    for(it = l2.begin(); it!= l2.end(); it++)
        cout << *it << endl;
    
    l2.clear();
    cout << "\nTamanho de l2: " << l2.size() << endl;

    list<int> lista1(2,10), lista2(2, 20);
    it = lista1.begin();
    
    lista1.splice(it, lista2);
    cout << "\nElementos de lista1: \n";
    for(it = lista1.begin(); it != lista1.end(); it++)
        cout << *it << endl;
    cout << "\nTamanho de lista2: " << l2.size() << endl;

    //remove todos os valores 20
    lista1.remove(20);
    for(it = lista1.begin(); it != lista1.end(); it++)
        cout << *it << endl;
    
    int vet2[] = {6, 8, 10, 5, 20, 21};
    list<int> lista3(vet2, vet2 +6);
    cout << "\nElementos de lista3 antes de remocao: \n";
    for(it = lista3.begin(); it != lista3.end(); it++)
        cout << *it << " ";
    cout << endl;

    lista3.remove_if(par);
     cout << "\nElementos de lista3 depois de remocao(de numeros pares): \n";
    for(it = lista3.begin(); it != lista3.end(); it++)
        cout << *it << " ";
    cout << endl;

    int vet3[] = {17, 60, 5, 30, 50};
    list<int> list4(vet3, vet3+ 5);
    list4.sort();
    cout << "\n\nElementos de lista4 ordenados crescentemente:\n";
    for(it = list4.begin(); it != list4.end(); it++)
        cout << *it << endl; 

    //ordenando strings
    list<string> lista5;
    list<string>::iterator it5;
    lista5.push_back("python");
    lista5.push_back("ruby");
    lista5.push_back("c++");
    lista5.push_back("java");
    lista5.sort();
    cout << "\n\nElementos de lista5 ordenados: \n";
    for(it5 = lista5.begin(); it5 != lista5.end(); it5++)
        cout << *it5 << endl;

    //ordenando usando algum criterio
    // ex tamanho da string

    lista5.sort(comparar_tamanho);
     cout << "\n\nElementos de lista5 ordenados pelo tamanho: \n";
    for(it5 = lista5.begin(); it5 != lista5.end(); it5++)
        cout << *it5 << "- tamanho:" << (*it5).length() << endl;



    return 0;
}