#include "../include/HallTree.h"
#include <iostream>
using namespace std;

HallTree::HallTree() {
    root = NULL;
}

void HallTree::createSample() {
    root = new HallNode{"Main Hall", NULL, NULL};
    root->left = new HallNode{"Hall A", NULL, NULL};
    root->right = new HallNode{"Hall B", NULL, NULL};
}

void HallTree::display(HallNode* node, int space) {
    if (!node) return;
    space += 5;
    display(node->right, space);
    cout << endl;
    for (int i = 5; i < space; i++) cout << " ";
    cout << node->hallName << "\n";
    display(node->left, space);
}

void HallTree::display() {
    display(root, 0);
}
