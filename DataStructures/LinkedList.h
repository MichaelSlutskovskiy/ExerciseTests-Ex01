#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct Node
{
    unsigned int value;
    Node* next;
} Node;

typedef struct LinkedList
{
    Node* head;
} LinkedList;

void initList(LinkedList* list);
void insertFirst(LinkedList* list, unsigned int newValue);
int removeFirst(LinkedList* list); 
void cleanList(LinkedList* list);
bool isEmptyList(LinkedList* list);

#endif /* LINKEDLIST_H */#pragma once