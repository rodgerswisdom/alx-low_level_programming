#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *prev;
	struct node *next;
};

int main()
{

	
	struct node mynode;
	
	if(mynode.prev == NULL && mynode.next == NULL)
	{
		struct node *prev = &mynode;
		struct node *next = NULL;
		
		printf("New node with created\n");
	}
	else
		printf("Node exists\n");
	
	
	
	
	
	return (0);
}
