/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include "player.h"
using namespace std;

Player::Player(string n,int i,float a,string t): nome(n),idade(i),altura(a),team(t) {}


void Player::print() const{
    cout<< fixed<< setprecision(2);
    cout<< "Nome:"<< nome<< "Idade:"<< idade<< "Altura:"<< altura<< "Time:"<<team<<endl;
}


string Player::getNome() const{
   return nome;
}

int Player::getIdade() const{
   return idade;
}

float Player::getAltura() const{
    return altura;
}

string Player::getTime() const{
    return team; 
}

int Player::getHash(int max_number) const{
    return getNome().at(0) * getIdade() * getTime().at(0) % max_number;
}

Player::Player(const Player& obj) {
    nome = obj.nome;
    idade = obj.idade;
    team = obj.team;
}