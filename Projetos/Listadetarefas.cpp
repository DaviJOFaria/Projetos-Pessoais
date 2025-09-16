#include <iostream>
#include <list>
#include <string>
#include <fstream>

using namespace std;

void mostrarmenu();
void adicionartarefa(list<string>& tarefas, string a);
void mostrarlista(const list<string>& tarefas);
void removertarefa(list<string>& tarefas);
void salvartarefas(const list<string>& tarefas);

int main(){
    int opcao;
    list<string> tarefas = {};
    
    do{
        mostrarmenu();
        cout << ": ";
        cin >> opcao;
        switch (opcao) {

            case 1:
                mostrarlista(tarefas);
                break;

            case 2: {
                cout << "Tarefa a ser adicionada: ";
                string addtarefa;
                cin.ignore();
                getline(cin, addtarefa);
                adicionartarefa(tarefas, addtarefa);
                break;
            }

            case 3:
                removertarefa(tarefas);
                break;

            case 4:
                cout << "Deseja salvar a lista em um arquivo?\n(1 - Sim, 2 - Nao): ";
                int salvar;
                cin >> salvar;
                if (salvar == 1){
                    salvartarefas(tarefas);
                }
                else if(salvar == 2){
                    cout << "Saindo...";
                }
                else{
                    cout << "Valor invalido";
                }
                break;

        }
    } while (opcao != 4);
}
void mostrarmenu(){
    cout << "==================\n";
    cout << "Lista de tarefas\n";
    cout << "==================\n";
    cout << "1. Mostrar tarefas\n";
    cout << "2. Adicionar tarefa\n";
    cout << "3. Remover tarefa\n";
    cout << "4. Sair\n";
}

void mostrarlista(const list<string>& tarefas){
    if (tarefas.empty()){
        cout << "Nenhuma tarefa\n";
        return;
    }
    cout << "===== Sua Lista =====\n";
    for (const auto& tarefa : tarefas){
        cout << ". " << tarefa << endl;
    }
    cout << "=====================\n";
}

void adicionartarefa(list<string>& tarefas, string a){
    tarefas.push_back(a);
    cout << "Tarefa adicionada.\n";
}

void removertarefa(list<string>& tarefas){
    int remover;
    cout << "1 - Remove o primeiro item, 2 - Remove o ultimo item: ";
    cin >> remover;
    if (remover == 1){
        tarefas.pop_front();
        cout << "Primeiro item removido.\n";
    }
    else if (remover == 2){
        tarefas.pop_back();
        cout << "Ultimo item removido.\n";
    }
    else
        cout << "Valor invalido.\n";
}

void salvartarefas(const list<string>& tarefas){
    ofstream ListaDeTarefas("Tarefas.txt");

    if (ListaDeTarefas.is_open()) {
        for (const auto& tarefa : tarefas) {
            ListaDeTarefas << tarefa << endl;
        }
        ListaDeTarefas.close();
        cout << "Arquivo salvo.\n";
    }
    else{
        cout << "Erro ao salvar arquivo.\n";
    }
}

