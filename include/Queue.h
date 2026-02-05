#ifndef QUEUE_H
#define QUEUE_H

#include "Student.h"

class Queue {
private:
    Student* queue[100];
    int front, rear;

public:
    Queue();
    bool isEmpty();
    void enqueue(Student* s);
    Student* dequeue();
};

#endif
