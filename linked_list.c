// linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
} node_t;

void free_list(node_t* node);
void output_list(node_t* node);
node_t* create_node(int data);

int main(void)
{
	//create head of linked list
	node_t* head = create_node(0);

	// create first node in list for head to point to
	node_t* node1 = create_node(1);
	node1->next = NULL;

	// create third node in list
	node_t* node3 = create_node(3);
	node3->next = NULL;

	// join head to node1
	head->next = node1;

	// output head & tail data values
	output_list(head);

	// insert a node inbetween head & tail
	node_t* node2 = create_node(2);
	node1->next = node2;
	node2->next = node3;

	// output list with new node added
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


node_t* create_node(int data)
{	
	node_t* node = NULL;
	node = (node_t*)malloc(sizeof(node_t));
	if(node == NULL)
	{
		exit(1);
	}
	else
	{
		node->data = data;
		return node;
	}
}
