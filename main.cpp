#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

#include "include/Student.h"
#include "include/Authentication.h"
#include "include/Queue.h"
#include "include/BST.h"
#include "include/HashTable.h"
#include "include/HallTree.h"
#include "include/Graph.h"

using namespace std;

Student students[100];
int countStudents = 0;

// ================= RANDOM SEAT ALLOCATION (C++) =================
void allocateRandomSeats()
{
    if (countStudents == 0) {
        cout << "Abhi koi student add nahi hua.\n";
        return;
    }

    // indices 0..countStudents-1
    vector<int> idx(countStudents);
    for (int i = 0; i < countStudents; ++i)
        idx[i] = i;

    // random shuffle of indices
    random_device rd;
    mt19937 gen(rd());
    shuffle(idx.begin(), idx.end(), gen);

    // seat numbers 1..countStudents random students ko
    for (int seat = 1; seat <= countStudents; ++seat) {
        int si = idx[seat - 1];      // student index
        students[si].seatNo = seat;  // 1‑based seat number
    }

    cout << "\nC++: Random seats allocate ho gaye:\n";
    for (int i = 0; i < countStudents; ++i) {
        cout << students[i].rollNo << " - "
             << students[i].name << " -> Seat "
             << students[i].seatNo << '\n';
    }
    cout << endl;
}

int main() {
    Authentication auth;
    if (!auth.login()) {
        cout << "\nAccess Denied!\n";
        return 0;
    }

    Queue q;
    BST bst;
    HashTable ht;
    HallTree hall;
    Graph graph;
    hall.createSample();

    int choice;
    do {
        cout << "\n==== SMART EXAM SEAT SYSTEM ====\n";
        cout << "1. Add Student\n2. Display Students\n3. Allocate Seats (Random)\n";
        cout << "4. Search Student\n5. Display Hall Tree\n";
        cout << "6. Display Hall Graph\n0. Logout\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int r; string n, d;
            cout << "Roll No: ";  cin >> r;
            cout << "Name: ";     cin >> n;
            cout << "Dept: ";     cin >> d;

            students[countStudents] = Student(r, n, d);

            // Data structures me add
            q.enqueue(&students[countStudents]);
            bst.insert(&students[countStudents]);
            ht.insert(&students[countStudents]);

            countStudents++;
        }

        else if (choice == 2) {
            // Agar abhi tak seats assign nahi hui, to yahin random allocate kar do
            if (countStudents > 0 && students[0].seatNo == 0) {
                allocateRandomSeats();
            }

            cout << "\nROLL  NAME  DEPT  SEAT\n";
            for (int i = 0; i < countStudents; i++)
                cout << students[i].rollNo << " "
                     << students[i].name << " "
                     << students[i].department << " "
                     << students[i].seatNo << endl;
        }

        else if (choice == 3) {
            // user ne khud allocate option choose kiya
            allocateRandomSeats();
        }

        else if (choice == 4) {
            int r;
            cout << "Enter Roll No: ";
            cin >> r;
            Student* s = bst.search(r);
            if (s)
                cout << "Seat No: " << s->seatNo << endl;
            else
                cout << "Not Found\n";
        }

        else if (choice == 5)
            hall.display();

        else if (choice == 6)
            graph.display();

    } while (choice != 0);

    return 0;
}