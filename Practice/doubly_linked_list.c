#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
};

int main()
{

	struct node mynode;
	struct node *ptr = &mynode;
	
	
	
	ptr -> data = 12;
	
	printf("%d", ptr -> data);
	return (0);
}
