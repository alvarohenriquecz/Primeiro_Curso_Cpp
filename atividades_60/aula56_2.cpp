#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //ja foi definido o tamanho do vetor
    vector <int> v(3);
    v[0] = 40;
    v[1] = 30;
    v[2] = 20;
    for (unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;    

    return 0;
}