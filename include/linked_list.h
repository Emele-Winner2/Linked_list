#ifndef LINKED_LIST_H
#define LINKED_LIST_H
typedef struct Node
{
    int value;
    struct Node *next;
} Node;
void Action();
void Print_list(Node *val);
#endif