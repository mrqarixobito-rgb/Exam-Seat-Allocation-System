#include "../include/BST.h"

BST::BST() {
    root = NULL;
}

BSTNode* BST::insert(BSTNode* node, Student* s) {
    if (!node) {
        node = new BSTNode{s, NULL, NULL};
        return node;
    }
    if (s->rollNo < node->student->rollNo)
        node->left = insert(node->left, s);
    else
        node->right = insert(node->right, s);
    return node;
}

void BST::insert(Student* s) {
    root = insert(root, s);
}

Student* BST::search(BSTNode* node, int roll) {
    if (!node) return NULL;
    if (node->student->rollNo == roll) return node->student;
    if (roll < node->student->rollNo)
        return search(node->left, roll);
    return search(node->right, roll);
}

Student* BST::search(int roll) {
    return search(root, roll);
}
