#include "../include/Graph.h"
#include <iostream>
using namespace std;

Graph::Graph() {
    int temp[5][5] = {
        {0,1,1,0,0},
        {1,0,1,1,0},
        {1,1,0,1,1},
        {0,1,1,0,1},
        {0,0,1,1,0}
    };
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            adj[i][j]=temp[i][j];
}

void Graph::display() {
    cout << "\nHall Connectivity Matrix:\n";
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
}
