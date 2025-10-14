#include <iostream>
#include <string>
using namespace std;

struct Aluno{
    string nome;
    double nota;
};

int main(){
    Aluno aluno1, aluno2, aluno3;

    aluno1.nome = "Fernando";
    aluno1.nota = 8.5;

    aluno2.nome = "Luiza";
    aluno2.nota = 10;

    aluno3.nome = "Joao";
    aluno3.nota = 6.8;

    cout << aluno1.nome;
    cout << " " << aluno1.nota << endl;

    cout << aluno2.nome;
    cout << " " << aluno2.nota << endl;

    cout << aluno3.nome;
    cout << " " << aluno3.nota << endl;
}