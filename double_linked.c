// double linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* prev;
	struct node* next;
} node_t;

void print_forward(node_t* node);
void print_reverse(node_t* node);
node_t* create_node(int data, node_t* prev, node_t* next);
node_t* add_to_list(int data, node_t* node, node_t* prev, node_t* next);
void remove_node(node_t* node);
void free_list(node_t* node);

//TODO: remove_node();

int main(void)
{
	// create individual nodes
	node_t* head = create_node(1, NULL, NULL);
	node_t* middle = create_node(2, NULL, NULL);
	node_t* tail = create_node(3, NULL, NULL);

	// add nodes to list
	add_to_list(1, head, NULL, middle);	
	add_to_list(2, middle, head, tail);
	add_to_list(3, tail, middle, NULL);

	print_forward(head);
	printf("\n");
	print_reverse(tail);

	// remember to free nodes
	free_list(head);

	return 0;
}

void print_forward(node_t* node)
{
	printf("complete list\n");
	node_t* current;
	current = node;
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;	// move to next node
		
	}

	printf("\n");
}

void print_reverse(node_t* node)	// need to pass last node
{
	printf("complete list in reverse\n");
	node_t* current;
	current = node;
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->prev;	// move to previous node
	}

	printf("\n");
}

node_t* create_node(int data, node_t* prev, node_t* next)
{
	node_t* node = NULL;
	node = (node_t*)malloc(sizeof(node_t));
	if(node == NULL)
	{
		printf("Error, cannot create node\n");
		exit(0);
	}

	node->data = data;
	node->next = next;

	return node;
}

void remove_node(node_t* node)
{

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

node_t* add_to_list(int data, node_t* node, node_t* prev, node_t* next)
{
	node->data = data;
	node->prev = prev;
	node->next = next;
}

