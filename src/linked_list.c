#include "../include/linked_list.h"
#include <stdio.h>
#include <stdlib.h>
// built the singly linked list
void Print_list(Node *val)
{
    while (1)
    {
        if (val == NULL)
        {
            break;
        }
        printf("%d\n", val->value);
        val = val->next;
    }
}
void Action()
{
    Node *Head;
    Head = (Node *)malloc(sizeof(Node));
    Head->next = NULL;
    Head->value = 10;
    Node *node = (Node *)malloc(sizeof(Node));
    Head->next = node;
    for (int i = 0; i < 5; i++)
    {
        printf("input the value for the %dst element: ", i);
        int val;
        scanf("%d", &val);
        node->value = val;
        Node *new_node = (Node *)malloc(sizeof(Node));
        if (i == 4)
        {
            new_node = NULL;
            node->next = NULL;
        }
        else
        {
            node->next = new_node;
            new_node->next = NULL;
            node = new_node;
        }
    }
    Print_list(Head);
}
