#include "Stack.h"

void initStack(Stack* s)
{
    initList(&(s->list));
}

void cleanStack(Stack* s)
{
    cleanList(&(s->list));
}

void push(Stack* s, unsigned int element)
{
    insertFirst(&(s->list), element);
}

int pop(Stack* s)
{
    return removeFirst(&(s->list));
}

bool isEmpty(Stack* s)
{
    return isEmptyList(&(s->list));
}

bool isFull(Stack* s)
{
    return false;
}