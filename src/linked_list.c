#include "./include/linked_list.h"
#include "stdio.h"
#include "stdlib.h"
typedef struct
{
    int value;
    linked_list *next;
} linked_list;
extern linked_list *Head;
extern linked_list *checker;
void Initialize_list()
{
    Head = malloc(sizeof(linked_list));
    Head->next = NULL;
    Head->value = NULL;
}
void Insert_node(char *name)
{
    linked_list name;
}