#include "../include/Student.h"

Student::Student() {
    rollNo = seatNo = 0;
}

Student::Student(int r, string n, string d) {
    rollNo = r;
    name = n;
    department = d;
    seatNo = -1;
}
