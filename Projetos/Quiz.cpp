#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int menu();
void Geral();
void Filmes();
void Jogos();
void Animes();

int main(){
    
    int comecar, area;

    srand(time(0));

    cout << "-----Quiz-----\n";
    cout << "Digite 1 para comecar!\n";

    cin >> comecar;
    if(comecar == 1){
       area = menu();
        switch(area){
            case 1:
            Geral();
            break;

            case 2:
            Filmes();
            break;

            case 3:
            Jogos();
            break;

            case 4:
            Animes();
            break;

            default:
            cout << "Opcao invalida\n";
        }
    }
    else{
        cout << "Ate a proxima\n";
    }

    return 0;
}

int menu(){

    int a;
    cout << "Bem vindo ao Quiz de conhecimentos! Escolha sua area desejada\n";
    cout << "1 - Geral, 2 - Filmes, 3 - Jogos, 4 - Animes: ";
    cin >> a;

    return a;
}
void Geral(){

    string resposta;
    int acertos = 0, rodadas = 0;
    

    vector<string> perguntas_geral = 
    {"Qual é o maior planeta do Sistema Solar?",
    "Quem pintou a famosa obra Mona Lisa?",
    "Quantos ossos tem o corpo humano adulto?",
    "Qual é a capital do Canadá?", 
    "Que elemento químico tem o símbolo O?"};
    
    vector<string> respostas_geral = 
    {"Jupiter",
    "Leonardo da Vinci",
    "206",
    "Ottawa",
    "Oxigenio"};
    
    vector<int> perguntas_sorteadas;

    cout << "Voce escolheu perguntas gerais!\n";

    cin.ignore();

    do{
        int random;
        bool repetida;

        do{
            random = rand() % 5;
            repetida = false;

            for (int sorteada : perguntas_sorteadas){
                if(sorteada == random){
                    repetida = true;
                    break;
                }
            }
        }while(repetida);

        perguntas_sorteadas.push_back(random);

        cout << ". \n" << perguntas_geral[random];
        cout << "Escreva sua resposta (Sem acento): ";
        
        getline(cin, resposta);
        
        if(resposta == respostas_geral[random]){
            cout << "\nParabéns, você acertou a pergunta!\n";
            acertos++;
            rodadas++;
        }
        else{
            cout << "\nReposta errada :(\n";
            rodadas++;
        }
    }while(rodadas != 5);

    cout << "\nParabéns, você acertou " << acertos << " perguntas!\n";

}   
void Filmes(){

    string resposta;
    int acertos = 0, rodadas = 0;
    

    vector<string> perguntas_filmes = 
    {"Quem dirigiu o filme Titanic?",
    "Qual é o nome do vilão em O Rei Leão?",
    "Que ator interpreta o Homem de Ferro no MCU?",
    "Qual filme venceu o Oscar de Melhor Filme em 2020?",
    "Em que filme o personagem Jack Dawson é o protagonista?"};
    
    vector<string> respostas_filmes = 
    {"James Cameron",
    "Scar",
    "Robert Downey Jr",
    "Parasita",
    "Titanic"};
    
    vector<int> perguntas_sorteadas;

    cout << "Voce escolheu perguntas sobre filmes!\n";

    cin.ignore();

    do{
        int random;
        bool repetida;

        do{
            random = rand() % 5;
            repetida = false;

            for (int sorteada : perguntas_sorteadas){
                if(sorteada == random){
                    repetida = true;
                    break;
                }
            }
        }while(repetida);

        perguntas_sorteadas.push_back(random);

        cout << ". \n" << perguntas_filmes[random];
        cout << "Escreva sua resposta (Sem acento): ";
        
        getline(cin, resposta);
        
        if(resposta == respostas_filmes[random]){
            cout << "\nParabéns, você acertou a pergunta!\n";
            acertos++;
            rodadas++;
        }
        else{
            cout << "\nReposta errada :(\n";
            rodadas++;
        }
    }while(rodadas != 5);

    cout << "\nParabéns, você acertou " << acertos << " perguntas!\n";
    cout << "\nFim do jogo.";

}   
void Jogos(){
    
    string resposta;
    int acertos = 0, rodadas = 0;
    

    vector<string> perguntas_jogos = 
    {"Qual é o protagonista da série de jogos The Legend of Zelda?",
    "Que jogo é conhecido pelo modo battle royale com 100 players?",
    "Qual empresa desenvolveu o jogo Minecraft?",
    "Qual é o nome do console de videogame portátil da Nintendo lançado em 2017?",
    "Que jogo de tiro popular é conhecido por seus personagens como 'Soap' e 'Captain Price'?"};
    
    vector<string> respostas_jogos = 
    {"Link",
    "Fortnite",
    "Mojang",
    "Nintendo Switch",
    "Call of Duty"};
    
    vector<int> perguntas_sorteadas;

    cout << "Voce escolheu perguntas sobre jogos!\n";

    cin.ignore();

    do{
        int random;
        bool repetida;

        do{
            random = rand() % 5;
            repetida = false;

            for (int sorteada : perguntas_sorteadas){
                if(sorteada == random){
                    repetida = true;
                    break;
                }
            }
        }while(repetida);

        perguntas_sorteadas.push_back(random);

        cout << ". \n" << perguntas_jogos[random];
        cout << "Escreva sua resposta (Sem acento): ";
        
        getline(cin, resposta);
        
        if(resposta == respostas_jogos[random]){
            cout << "\nParabéns, você acertou a pergunta!\n";
            acertos++;
            rodadas++;
        }
        else{
            cout << "\nReposta errada :(\n";
            rodadas++;
        }
    }while(rodadas != 5);

    cout << "\nParabéns, você acertou " << acertos << " perguntas!\n";
    cout << "\nFim do jogo.";

}
void Animes(){
    
    string resposta;
    int acertos = 0, rodadas = 0;
    

    vector<string> perguntas_animes = 
    {"Qual é o nome do protagonista de 'Dragon Ball'?",
    "Quem é o irmão mais novo de Sasuke Uchiha em 'Naruto'?",
    "Qual estúdio de animação é responsável por 'A Viagem de Chihiro'?",
    "Em 'One Piece', qual é o nome da tripulação do Monkey D. Luffy?",
    "Qual é o anime baseado no mangá de Hajime Isayama que gira em torno da luta contra titãs?"};
    
    vector<string> respostas_animes = 
    {"Goku",
    "Itachi",
    "Studio Ghibli",
    "Chapeus de Palha",
    "Attack on Titan"};
    
    vector<int> perguntas_sorteadas;

    cout << "Voce escolheu perguntas sobre animes!\n";

    cin.ignore();

    do{
        int random;
        bool repetida;

        do{
            random = rand() % 5;
            repetida = false;

            for (int sorteada : perguntas_sorteadas){
                if(sorteada == random){
                    repetida = true;
                    break;
                }
            }
        }while(repetida);

        perguntas_sorteadas.push_back(random);

        cout << ". \n" << perguntas_animes[random];
        cout << "Escreva sua resposta (Sem acento): ";
        
        getline(cin, resposta);
        
        if(resposta == respostas_animes[random]){
            cout << "\nParabéns, você acertou a pergunta!\n";
            acertos++;
            rodadas++;
        }
        else{
            cout << "\nReposta errada :(\n";
            rodadas++;
        }
    }while(rodadas != 5);

    cout << "\nParabéns, você acertou " << acertos << " perguntas!\n";
    cout << "\nFim do jogo.";

}