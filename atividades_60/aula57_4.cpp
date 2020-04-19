#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(3, 10);
    cout << "Antes de clear " <<v.size() << endl;
    v.clear();
    cout << "Depois de clear " << v.size() << endl;
    return 0;
}