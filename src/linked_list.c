#include "../include/linked_list.h"
#include "stdio.h"
#include "stdlib.h"
struct linked_list
{
    int value;
    struct linked_list *next;
};
long x = 0;
struct linked_list *Head;
struct linked_list *checker;
void Action()
{
    int p;
    printf("what would you like to do right now\n");
    scanf("%d", &p);
    if (p == 1)
    {
        Initialize_list();
        Insert_node();
    }
}
void Initialize_list()
{
    printf("Initializing the linked list\n");
    Head = malloc(sizeof(struct linked_list));
    Head->next = NULL;
}
void Insert_node()
{
    if (x == 0)
    {
        printf("Input the first node in the linked list\n");
        scanf("%d", &(Head->value));
    }
    else
    {
        //  printf
        //    linked_list
        //      Head->next =
    }
    x++;
    printf("%d", Head->value);
    free(Head);
}