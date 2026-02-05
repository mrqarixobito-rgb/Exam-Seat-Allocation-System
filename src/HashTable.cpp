#include "../include/HashTable.h"

HashTable::HashTable() {
    for (int i = 0; i < 100; i++) table[i] = NULL;
}

int HashTable::hash(int roll) {
    return roll % 100;
}

void HashTable::insert(Student* s) {
    table[hash(s->rollNo)] = s;
}

Student* HashTable::search(int roll) {
    return table[hash(roll)];
}
