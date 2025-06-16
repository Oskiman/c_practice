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
node_t* create_node(int data, node_t* next);
node_t* add_to_list(node_t* node, int data);
void remove_node(node_t* node);
void free_list(node_t* node);

// TODO: function to remove a given node
// TODO: refactor code to free nodes - will be part of remove_node() later
// TODO: print list in reverse
// TODO: function to free all nodes

int main(void)
{
	// create a list
	node_t* list = create_node(1, create_node(2, create_node(3, NULL)));

	print_forward(list);
	printf("\n");
	print_reverse(list);

	// remember to free nodes
	free_list(list);

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

node_t* create_node(int data, node_t* next)
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
		//current = node->next;
	}
}
