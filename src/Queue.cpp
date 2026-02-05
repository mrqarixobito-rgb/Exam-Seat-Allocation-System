#include "../include/Queue.h"

Queue::Queue() {
    front = rear = -1;
}

bool Queue::isEmpty() {
    return front == -1;
}

void Queue::enqueue(Student* s) {
    if (front == -1) front = 0;
    queue[++rear] = s;
}

Student* Queue::dequeue() {
    if (isEmpty()) return NULL;
    Student* s = queue[front++];
    if (front > rear) front = rear = -1;
    return s;
}
