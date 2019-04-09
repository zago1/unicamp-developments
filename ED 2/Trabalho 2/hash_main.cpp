/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>

#include "basic.h"
#include "player.h"
#include "atacante.h"
#include "carreira.h"

using namespace std;



int main(){
  Hash hash;
  int opcao, idade;
  string nome, team;
  float altura;

  string nomes[5] = {"Joao","Mario","Jonas","Lucas","Alberto"};
  int idades[5] = {23,34,28,19,33}; 
  float alturas[5] = {1.60, 1.75, 1.80, 1.90, 1.70}; 
  string equipes[5] = {"Sao Paulo","Palmeiras","Corinthians","Cruzeiro","Flamengo"};
  int gols[5] = {6, 8, 12, 20, 10}; 
  int jogos[5] = {60, 80, 120, 203, 150}; 
  
  for (int i = 0; i < 5; i++) {
    if ((i % 2) == 0) {
      Atacante * atacante = new Atacante(nomes[i], idades[i], alturas[i], equipes[i], gols[i]);
      hash.insertItem(atacante);
    } else {
      Carreira * carreira = new Carreira(nomes[i], idades[i], alturas[i], equipes[i], jogos[i]);
      hash.insertItem(carreira);
    }
  }
  
  cout << "------------------------------" <<  endl;

  hash.print();

  bool found = false;
  
  Atacante atacante(nomes[0], 0, 0.0f, equipes[0], gols[0]);

  hash.retrieveItem(atacante, found);
  cout << atacante.getNome() << " anos " << " -> " << found << endl;
  atacante.print();

  cout << "------------------------------" <<  endl;

  hash.deleteItem(atacante);

  cout << "------------------------------" <<  endl;
  
  Carreira carreira(nomes[1], 0, 0.0f, equipes[1], jogos[1]);
  found = false;

  hash.retrieveItem(carreira, found);
  cout << carreira.getNome() << " -> " << found << endl;
  carreira.print();

  cout << "------------------------------" <<  endl;

  hash.deleteItem(carreira);

  cout << "------------------------------" <<  endl;

  hash.print();
  cout << "Fim" << endl;
}
