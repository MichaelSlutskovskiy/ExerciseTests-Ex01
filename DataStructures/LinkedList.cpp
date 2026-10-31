#include "LinkedList.h"
#include <iostream>

void initList(LinkedList* list)
{
    list->head = nullptr;
}

void insertFirst(LinkedList* list, unsigned int newValue)
{
    Node* newNode = new Node;
    newNode->value = newValue;
    newNode->next = list->head;
    list->head = newNode;
}

int removeFirst(LinkedList* list)
{
    if (list->head == nullptr)
    {
        return -1; 
    }

    Node* temp = list->head;
    int val = temp->value;

    list->head = list->head->next;
    delete temp;

    return val;
}

void cleanList(LinkedList* list)
{
    while (list->head != nullptr)
    {
        removeFirst(list);
    }
}

bool isEmptyList(LinkedList* list)
{
    return (list->head == nullptr);
}