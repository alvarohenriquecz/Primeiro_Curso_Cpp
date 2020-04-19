#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    if(v.empty())
        cout << "vetor vazio!!\n";
    else
        cout << "vetor Nao vazio\n";

    v.push_back(10);

    if(v.empty())
        cout << "Vetor vazio\n";
    else 
        cout << "Vetor nao vazio !!\n";
    

    return 0;
}