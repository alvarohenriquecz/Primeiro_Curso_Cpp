//criando namespace
#include <iostream>

namespace ns1
{
    int num =42;

    class A
    {
            public:
                void imprimir()
                {
                    std::cout << "Ola, sou a classe A do namespace ns1\n";
                }
    };
}

namespace ns2
{
    int num = 50;

    class A
    {
            public:
                void imprimir()
                {
                    std::cout << "Ola, sou a classe A do namespace ns2\n";
                }
    };
}

using namespace ns1;
using namespace ns2;

//vai dá ambiguidade
int main()
{
    std::cout << ns2::num << std::endl;

    ns1::A ns1A;
    ns2::A ns2A;

    ns1A.imprimir();
    ns2A.imprimir();
    return 0;
}