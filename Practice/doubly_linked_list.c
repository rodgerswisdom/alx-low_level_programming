#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "headers.h"

/**
  * Create a node
  * traverse a list
  * Add a node between , at the end, begining
  * number of nodes
*/
struct node{
	int data;
	
	struct node *prev;
	struct node *next;
};

int create_doubly_linked_list(struct node head)
{
	if(head.next != NULL)
	{
		head.next == struct node next_node;
		printf("List created\n");
	}
	else
		printf("List not created\n");
	
	return (0);
}

int main()
{
	struct node head;
	head->prev == NULL;
	
	create_doubly_linked_list(struct node head);
	
	return (0);
}
