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

	// join head & tail
	head->next = tail;
	//tail->previous = head->next;

	// output head & tail data values
	node_t* current = head;		// create node to walk the list
	while(current->next != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}

	// insert a node inbetween head & tail
	node_t* middle = NULL;
	middle = (node_t*)malloc(sizeof(node_t));
	if(middle == NULL)
	{
		return 1;
	}

	middle->data = 2;
	//middle->previous = head->next;
	//middle->next = tail;
	head->next = middle;
	middle->next = tail;

	// output complete list
	current = head;		//reuse previously created node
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;	// move to next node
		
	}

	return 0;
}
