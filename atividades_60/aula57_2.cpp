#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    while ((!v.empty()))
        v.pop_back();
    if(v.empty())
        cout << "vetor vazio\n";
    else 
        cout << "Vetor nao vazio";
    return 0;
    
}