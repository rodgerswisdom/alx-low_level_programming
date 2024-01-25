#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

int main()
{

	
	struct node mynode;
	struct node *ptr = &mynode;
	
	if(mynode.prev == NULL && mynode.next == NULL)
	{
		struct node *prev = &mynode;
		struct node *next = NULL;
		
		printf("New node with data = %d created\n", ptr->data);
	}
	
	
	
	
	//ptr -> data = 12;
	
	printf("%d", ptr -> data);
	return (0);
}
