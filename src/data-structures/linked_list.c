#include "linked_list.h"

struct linked_list_node *head, *z, *t;

void printlist()
{ 
    struct linked_list_node *iter;
    iter = head;
    while (iter != iter -> next) {
        printf("node - %d\n", iter -> key);
        iter = iter -> next;
    }
}

void initialize()
{
    head = (struct linked_list_node *) malloc(sizeof *head);
    z = (struct linked_list_node *) malloc(sizeof *z);
    head -> next = z;
    z -> next = z;
}

void unlinknext(struct linked_list_node *t)
{
    t -> next = t -> next -> next;
}

void append(int v)
{
    struct linked_list_node *x;
    x = (struct linked_list_node *) malloc(sizeof *x);
    z -> key = v;
    z -> next = x;
    x -> next = x;
    z = x;
}

struct linked_list_node * insertafter(int v, struct linked_list_node *t)
{
    struct linked_list_node *x;
    x = (struct linked_list_node *) malloc(sizeof *x);
    x -> key = v;
    x -> next = t -> next;
    t -> next = x;
    return x;
}