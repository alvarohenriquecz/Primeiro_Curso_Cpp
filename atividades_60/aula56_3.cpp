#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(3);
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    vector<int>::iterator it = v.begin();
    cout<< *it << endl; //so o primeiro elemento

    cout << endl << endl;

//todos elementos
//[begin, end) nao e possivel achar o fim assim 
//intervalo fechado ate aberto
    for(it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    return 0;
}