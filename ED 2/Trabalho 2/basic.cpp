#include <iostream>
#include <cstddef> // Para usar o NULL
#include "basic.h" 


/*
  O construtor já foi feito para você, apenas memorize a sintaxe de
  alocação de um array. Observe que a chamada "new Account[size]" vai
  gerar novos objetos Account
 */
Hash::Hash(int size) {
  MAX_ITEMS = size;
  cadastro  = new Player*[size];

  /* 
     É sempre interessante garantir que os valores serão inicializados com NULL.
   */
  for (int i = 0; i < size; i++) {
    cadastro[i] = NULL;
  }
  length    = 0;
}

int Hash::getLength() const
{
  return length;

}

void Hash::retrieveItem(Player& player, bool& found)
{
  // Todo Implemente o método para obter um valor de um lugar.
  int hashNumber = player.getHash(Hash::MAX_ITEMS);
  if (cadastro[hashNumber] == NULL) {
    found = false;
  }  else {
    found = true;
    player = *cadastro[hashNumber];
  }
}


/*
  Agora use explicitamente o copy constructor para colocar o elemento
  que veio por parâmetro na posição correta. Em outras palavras, use: 

  new Account(account);
 */
void Hash::insertItem(Player *player)
{  
  // ToDo: implemente o método.
  int hashNumber = player->getHash(Hash::MAX_ITEMS);
  cadastro[hashNumber] = player;
  length++;
}

void Hash::deleteItem(Player player)
{
  // ToDo: implemente o método.
  int hashNumber = player.getHash(Hash::MAX_ITEMS);
  delete cadastro[hashNumber];
  cadastro[hashNumber] = NULL;
  length--;
}


/*
  O método print já foi implementado para você.
 */
void Hash::print() const {
  for (int i = 0; i < MAX_ITEMS; i++) {
    Player* acc = cadastro[i];    
    if (acc != NULL) { 
      std::cout << "-------------------------" << std::endl;
	    std::cout << i << ":" << std::endl;
      std::cout << "-------------------------" << endl;
      acc->print();
      std::cout << "-------------------------" << endl;
    }
  }
  std::cout << endl;
}