#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "../structures/linked_list_node.h"

/**
* Initialize a linked list
*/

void initialize();

/**
* Print out the whole linked list starting from the head node
*/

void printlist();

/**
* Unlink next element to a specified node in a linked list
*/

void unlinknext(struct linked_list_node *t);

/**
* Insert an element after a specified linked list node
*/

struct linked_list_node * insertafter(int v, struct linked_list_node *t);

/**
* Append an element to the last node
*/

void append(int v);

#endif