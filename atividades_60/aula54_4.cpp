#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("teste.txt");
    char c;

    while (true)
    {
        in >> c;
        if(in.fail())
            break;
        cout << c;
    }
    
    return 0;
}