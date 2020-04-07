#include <iostream>
using namespace std;
int main(){
    //pode modificar os ponteiros mas nao ponteiros
    //  para onde eles apontam
    // agora com caracteres
    const int vet[] = {1, 2, 3};
    const int * p1 = &vet[0];
    int const * p2 = &vet[1];
    int* const  p3 = new int[3];
    const char* const p4 = "Henrique";

    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    p1 = &vet[0];
    p2 = &vet[1];

    *p3 =1;
    *(p3 +1) =2;
    *(p3 + 2) =3;

    cout << "p3: " << endl;
    cout << *p3 << endl;
    cout << *(p3 +1) << endl;
    cout << *(p3 +2) << endl;

    cout << *(p4 + 1) << endl;
    return 0;
}