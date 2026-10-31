#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
    q->array = new unsigned int[size];
    q->size = size;
    q->head = 0;
    q->tail = 0;
    q->count = 0;
}

void cleanQueue(Queue* q)
{
    if (q->array != nullptr)
    {
        delete[] q->array;
        q->array = nullptr;
    }
    q->size = 0;
    q->head = 0;
    q->tail = 0;
    q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return;
    }
    q->array[q->tail] = newValue;
    q->tail = (q->tail + 1) % q->size;
    q->count++;
}

int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1;
    }
    int value = q->array[q->head];
    q->head = (q->head + 1) % q->size;
    q->count--;
    return value;
}

bool isEmpty(Queue* q)
{
    return (q->count == 0);
}

bool isFull(Queue* q)
{
    return (q->count == q->size);
}