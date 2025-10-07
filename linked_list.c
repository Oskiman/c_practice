// linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
} node_t;

void free_list(node_t* node);
void output_list(node_t* node);

int main(void)
{
	//create head of linked list
	node_t* head = NULL;
	head = (node_t*)malloc(sizeof(node_t));
	if(head == NULL)
	{
		return 1;
	}

	// create first node in list for head to point to
	node_t* node1 = NULL;
	node1 = (node_t*)malloc(sizeof(node_t));
	if(node1 == NULL)
	{
		return 1;
	}
	node1->data = 1;
	node1->next = NULL;

	// create third node in list
	node_t* node3 = NULL;
	node3 = (node_t*)malloc(sizeof(node_t));
	if(node3 == NULL)
	{
		return 1;
	}

	node3->data = 3;
	node3->next = NULL;

	// join head to node1
	head->next = node1;

	// output head & tail data values
	node_t* current = head;		// create node to walk the list
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}

	// insert a node inbetween head & tail
	node_t* node2 = NULL;
	node2 = (node_t*)malloc(sizeof(node_t));
	if(node2 == NULL)
	{
		return 1;
	}

	node2->data = 2;
	node1->next = node2;
	node2->next = node3;

	output_list(head);

	free_list(head);

	return 0;
}


void free_list(node_t* node)
{
	node_t* current = node;
	while(node != NULL)
	{
		current = node;	
		node = node->next;
		free(current);
	}
}

void output_list(node_t* node)
{
	// output complete list
	node_t* current = node;
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;	// move to next node
	}	
}
