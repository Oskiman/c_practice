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
node_t* create_node(int data);

// TODO: function to create a new node
// NOTE: once a node is created it will need to be added to the list
// TODO: function to remove a given node
// TODO: refactor code to free nodes - will be part of remove_node() later

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

	print_forward(head);
	print_reverse(tail);

	node_t* fourth = create_node(4);
	node_t* fifth = create_node(5);

	// test we have created nodes
	printf("%d\n", fourth->data);
	printf("%d\n", fifth->data);

	// remember to free nodes
	// will refactor this later
	free(head);
	free(middle);
	free(tail);
	free(fourth);
	free(fifth);

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

node_t* create_node(int data)
{
	node_t* node = NULL;
	node = (node_t*)malloc(sizeof(node_t));
	if(node == NULL)
	{
		printf("Error, cannot create node\n");
		exit(0);
	}

	node->data = data;
	node->next = NULL;	// should this point to next?

	return node;
}
