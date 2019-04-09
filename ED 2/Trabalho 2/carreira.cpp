/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <iomanip>
#include "carreira.h"


Carreira::Carreira(string nome, int idade, float altura, string team, int totalDePartidas):Player(nome, idade, altura, team){
    this->totalDePartidas = totalDePartidas;
}

int Carreira::getTotalDePartidas() const{
    return totalDePartidas;
}

float Carreira::getAproveitamento() const{
    return totalDePartidas / 38;
}

void Carreira::setTotalDePartidas(int i){
    totalDePartidas = i;
}

void Carreira::print() const{
    cout<< fixed<< setprecision(2);
    cout<< "Nome: "<< nome << endl;
    cout<< "Time: "<< getTime() << endl;
    cout<< "Partidas: "<< getTotalDePartidas() << endl;
    cout<< "Aproveitamento: "<< getAproveitamento() << endl;  
}

int Carreira::getHash(int max_number) const {
    return ((getNome().at(0) * getTotalDePartidas() * getTime().at(0)) * 17) % max_number; 
}



