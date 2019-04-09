#include <iostream>
#include <cstddef> // Para usar o NULL
#include "hash.h" 

Hash::Hash(int size) {
    MAX_ITEMS = size;
    cadastro = new Player*[size];

    for (int i = 0; i < size; i++) {
        cadastro[i] = NULL;
    }
    length = 0;
}

int Hash::getLength() const {
    return Hash::length;

}

void Hash::retrieveItem(Player& player, bool& found) {
    int location =  player.getHash(MAX_ITEMS);
    if(cadastro[location]==NULL){
        found = false;
    }else{
        found = true;
        player = *cadastro[location];
    }
}

void Hash::insertItem(Player player) {
    int location = player.getHash(MAX_ITEMS);
    cadastro[location] = new Player(player);
    Hash::length++;
}

void Hash::deleteItem(Player player) {
    int location = player.getHash(MAX_ITEMS);
    delete cadastro[location];
    cadastro[location] = NULL;
    Hash::length--;
}

void Hash::print() const {
    std::cout << "INI" << std::endl;
    for (int i = 0; i < MAX_ITEMS; i++) {
        Player* player = cadastro[i];
        if (player != NULL) {
            std::cout << i << ":" << std::endl;
            player->print();
        }
    }
    std::cout << "FIM" << std::endl;
}
