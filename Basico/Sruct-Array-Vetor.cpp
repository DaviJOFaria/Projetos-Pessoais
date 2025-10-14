#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    double nota;
    int semestre;
};

int main(){
    //Array
    Aluno aluno[3];
    int ver;

    for(int i = 0; i < 3; i++){
        cout << "Aluno:" << i + 1 << " digite suas informacoes:\n";

        cout << "Nome: ";
        cin >> aluno[i].nome; 

        cout << "Nota: ";
        cin >> aluno[i].nota;

        cout << "Semestre: ";
        cin >> aluno[i].semestre;
    }
    
    cout << "Digite o digito do aluno que deseja ver: ";
    cin >> ver;
    ver--;

    cout << aluno[ver].nome << endl;
    cout << "Nota:" << aluno[ver].nota << endl;
    cout << "Semestre: " << aluno[ver].semestre << endl;

}