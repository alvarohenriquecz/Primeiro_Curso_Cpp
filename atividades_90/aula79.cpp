//Class Map
#include <iostream>
#include <map>

using namespace std;

int main()
{
    pair<int, string> pares[]= 
    {
        make_pair(1, "pedro"),
        make_pair(2, "joao"),
        make_pair(3, "maria")
    };
    
    map<int, string> mapa(pares, pares+3);

    cout << mapa[1] << endl;
    cout << mapa[2] << endl;
    cout << mapa[3] << endl;

    return 0;
}
