#include <iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5};
    int* parray = &array[0];
    int i =0;
    int** pparray = &parray;

    cout << **pparray << endl;
    cout << *(parray +1) << endl;


    while (i <5)
    {
        cout << *parray << endl;
        parray = parray +1;
        i++;
    }
    
    return 0;
}