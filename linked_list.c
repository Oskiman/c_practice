// linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
	struct node* previous;
} node_t;

int main(void)
{
	//create head of linked list
	node_t* head = NULL;
	head = (node_t*)malloc(sizeof(node_t));
	if(head == NULL)
	{
		return 1;
	}

	head->data = 1;
	head->next = NULL;

	// create tail of linked list
	node_t* tail = NULL;
	tail = (node_t*)malloc(sizeof(node_t));
	if(tail == NULL)
	{
		return 1;
	}

	tail->data = 3;
	tail->next = NULL;
	return 0;
}
