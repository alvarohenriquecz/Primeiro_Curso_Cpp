#include <stdio.h>
#include <iostream>
#include <typeinfo>

using namespace std;

int main ()
{
  char input [256] = "1234567890#1234567890#1234567890#123490";5678
  int a;
  int b;
  int c;
  int d;

  //cout << "Digite uma string: " <<endl;
  //cin >> input;

  sscanf (input,"%i#%i#%i#%i",&a,&b,&c,&d);
  printf ("A: %i B: %i C: %i D: %i\n",a,b,c,d);

  cout << a << typeid(a).name() <<endl;
  cout << b << typeid(b).name() <<endl;
  cout << c << typeid(c).name() <<endl;
  cout << d << typeid(c).name() <<endl;

  return 0;
}

//Gerberson Felix 