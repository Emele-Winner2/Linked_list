#include "./include/linked_list.h"
#include "stdio.h"
typedef struct
{
    int value;
    linked_list *next;
} linked_list;
extern linked_list *Head;
void Initialize_list()
{
    Head->next = NULL;
    Head->value = NULL;
}