// double linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* prev;
	struct node* next;
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

	// join head & tail
	head->next = tail;
	tail->prev = head;

	// output head & tail data values
	printf("head & tail\n");
	node_t* current = head;		// create node to walk the list
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}

	printf("\n");

	// insert a node inbetween head & tail
	node_t* middle = NULL;
	middle = (node_t*)malloc(sizeof(node_t));
	if(middle == NULL)
	{
		return 1;
	}

	middle->data = 2;
	head->next = middle;
	middle->prev = head;
	middle->next = tail;
	tail->prev = middle;

	// output complete list
	printf("complete list\n");
	current = head;		//reuse previously created node
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;	// move to next node
		
	}

	printf("\n");

	// output list in reverse
	printf("complete list in reverse\n");
	current = tail;		// I'm getting my moneys worth out of this pointer
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->prev;	// move to previous node
	}

	return 0;
}
