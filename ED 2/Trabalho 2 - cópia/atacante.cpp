/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "atacante.h"

using namespace std;

Atacante::Atacante(string nome, int idade, float altura, string equipe, int golsMarcados):Player(nome,idade, altura, equipe){
    this->golsMarcados = golsMarcados;
}
    
int Atacante::getGols() const{
    return golsMarcados;
}

/*void Atacante::setGols(int g){
    golsMarcados = g;
}*/

void Atacante::print() const{ 
    cout<< "Nome: "<< nome << endl;
    cout<< "equipe: "<< getEquipe() << endl;
    cout<< "Gols: "<< getGols() << endl;  
}

Atacante::Atacante(const Atacante& obj){
    nome = obj.getNome();
    idade = obj.getIdade();
    equipe = obj.getEquipe();
    golsMarcados = obj.getGols();
}

int Atacante::getHash(int max_number)const{
    return (getNome().at(0) * getIdade() * getEquipe().at(0) * getGols()) % max_number;
}
