#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
	char nome[100];
	char cpf[20];
	int idade;
};

int getIdade(Pessoa pessoas[], const char* nome)
{
	int tam = sizeof(pessoas);

	for(int i = 0; i < tam; i++)
	{
		if(strcmp(nome, pessoas[i].nome) == 0)
			return pessoas[i].idade;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	 Pessoa pessoas[3] = 
    {
        {"joao", "82923454312", 20},
        {"marta", "89237823432", 15},
        {"julho", "90387334832", 90},
    };

	cout << "Nome: " << pessoas[0].nome << endl;
	cout << "Nome: " << pessoas[1].nome << endl;
	cout << "Nome: " << pessoas[2].nome << endl;

	int idade = getIdade(pessoas, "marcos");

	if(idade != -1)
		cout << "Idade do pedro: " << idade << endl;
	else
		cout << "Pessoa nao encontrada." << endl;

	return 0;
}
