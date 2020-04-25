#include <iostream>
#include "aluno.h"

void exibirAluno(Aluno& aluno);
void construirAluno(Aluno& aluno, string nome, string universidade);

int main()
{
    t_aluno aluno;
    t_aluno * ptr_aluno;

    ptr_aluno = &aluno;

    ptr_aluno->setNome("Libanio");
    ptr_aluno->setUniversidade("UFPB");

    cout << "Aluno: " << ptr_aluno->obterNome() << endl;
    cout << "Universidade: " << ptr_aluno->obterUnversidade() << endl;
    
    Aluno aluno2;
    construirAluno(aluno2, "Charles Nancy", "UFCG");
    exibirAluno(aluno2);
    
    return 0;
}

void construirAluno(Aluno& aluno, string nome, string universidade)
{
    aluno.setNome(nome);
    aluno.setUniversidade(universidade);
}

void exibirAluno(Aluno& aluno){
    cout << "\nAluno: " << aluno.obterNome() << endl;
    cout << "Universidade: " <<aluno.obterUnversidade()<< endl;
}