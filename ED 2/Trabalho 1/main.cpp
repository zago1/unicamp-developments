/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: victorpereira
 *
 * Created on 20 de Março de 2019, 00:53
 */

/*
    Grupo:

    Igor Zago Massaro - 217999
    Victor Pereira - 206588
*/

#include <iostream>
#include <iomanip>
using namespace std;
#include "atacante.h"
#include "player.h"
#include "carreira.h"

/*
 * 
 */
void printPlayers(Player ** player,int size) {
    int index;
    for(index = 0; index < size; index++) {
        cout << "Jogador " << index+1 << endl;
        player[index]->print();
        cout << endl;
    }
};


int main() {
    Player * players[5];

    cout << "Vamos adicionar 5 jogadores:" << endl;
    for (int i = 0; i < 5; i++) {
        int opcao, idade;
        string nome, team;
        float altura;

        cout << "Jogador " << i+1 << endl;
        cout << "Nome: " << endl;
        cin>>nome;
        cout << "Idade: " << endl;
        cin>>idade;
        cout << "Altura: " << endl;
        cin>>altura;
        cout << "Time: " << endl;
        cin>>team;
        cout << "Opcao: (1: adicionar gols marcados, 2:adicionar total de partidas)" << endl;
        cin>>opcao;
        if (opcao == 1) {
            int golsMarcados;
            cout << "Gols marcados: " << endl;
            cin>>golsMarcados;
            players[i] = new Atacante(nome, idade, altura, team, golsMarcados);
        } else if (opcao == 2) {
            int totalDePartidas;
            cout << "Numero de partidas: " << endl;
            cin>>totalDePartidas;
            players[i] = new Carreira(nome, idade, altura, team, totalDePartidas);
        }
    }

    cout << endl;
    
    printPlayers(players,5);
    
    return 0;
}

