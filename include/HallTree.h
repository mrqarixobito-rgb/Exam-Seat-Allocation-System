#ifndef HALLTREE_H
#define HALLTREE_H

#include <string>
using namespace std;

struct HallNode {
    string hallName;
    HallNode* left;
    HallNode* right;
};

class HallTree {
private:
    HallNode* root;
    void display(HallNode* node, int space);

public:
    HallTree();
    void createSample();
    void display();
};

#endif
