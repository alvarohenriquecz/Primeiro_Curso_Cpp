#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    cout << v.at(1) << endl;

    cout << endl << endl;

    vector <int>::iterator it = v.begin();
    v.insert(it, 40);

    for(unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    cout << endl << endl;
    v.erase(v.begin() + 1);
    for(unsigned int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    cout << endl << endl;
    vector<int> a(2, 20);
    vector<int> b(3, 30);

    a.swap(b);
    for(unsigned int i = 0; i <a.size(); i++)
        cout << a[i] << endl;
    for(unsigned int i = 0; i<b.size();i++)
        cout << b[i] << endl;
    return 0;
}