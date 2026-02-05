#ifndef BST_H
#define BST_H

#include "Student.h"

struct BSTNode {
    Student* student;
    BSTNode* left;
    BSTNode* right;
};

class BST {
private:
    BSTNode* root;
    BSTNode* insert(BSTNode* node, Student* s);
    Student* search(BSTNode* node, int roll);

public:
    BST();
    void insert(Student* s);
    Student* search(int roll);
};

#endif
