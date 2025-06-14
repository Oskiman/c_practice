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

// TODO: function to remove a given node
// TODO: refactor code to free nodes - will be part of remove_node() later

int main(void)
{
	node_t* list = create_node(6, create_node(7, create_node(8, 0)));

	node_t* current = list;
	while(current->next != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;

	}


	// remember to free nodes
	// will refactor this later
	free(list);

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

void print_reverse(node_t* node)
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
