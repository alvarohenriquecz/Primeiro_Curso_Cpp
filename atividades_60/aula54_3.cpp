//abrir um arquivo para saída
#include <iostream>
#include <fstream>

using namespace std;
//cria um arquivo .txt
int main()
{
    ofstream output("Saida.txt");
    output << "Aprendendo C++++++++++\n";
    output << "Engenharia pakas\n";
    return 0;
}