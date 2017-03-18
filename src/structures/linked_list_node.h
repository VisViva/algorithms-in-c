#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

/*
* Linked list node
*/

struct linked_list_node {
	int key;
	struct linked_list_node *next;
};

#endif