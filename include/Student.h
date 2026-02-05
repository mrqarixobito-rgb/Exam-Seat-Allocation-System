#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    string department;
    int seatNo;

    Student();
    Student(int r, string n, string d);
};

#endif
