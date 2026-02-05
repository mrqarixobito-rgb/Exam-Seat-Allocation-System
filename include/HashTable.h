#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Student.h"

class HashTable {
private:
    Student* table[100];

public:
    HashTable();
    int hash(int roll);
    void insert(Student* s);
    Student* search(int roll);
};

#endif
