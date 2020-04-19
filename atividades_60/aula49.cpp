#include <iostream>
using namespace std;
int main()
{
    int * p = new int[100];
    *p =1;
    *(p+1) = 2;
    cout << *p << endl << *(p+1) << endl;
    delete [] p;
    return 0;
}