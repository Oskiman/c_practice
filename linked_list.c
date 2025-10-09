// linked list practice
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
} node_t;

typedef struct head_tail{
	struct node* next;
} head_tail;

void free_list(node_t* node);
void output_list(node_t* node);
node_t* create_node(int data);
node_t* create_head_tail();

int main(void)
{
	// could create a "special" node for head & tail containing only next pointer
	//create head of linked list
	node_t* head = create_node(0);
	//node_t* head = create_head_tail();
	// create first node in list for head to point to
	node_t* node1 = create_node(1);
	node1->next = NULL;

	// create third node in list
	node_t* node3 = create_node(3);
	node3->next = NULL;

	// join head to node1
	head->next = node1;

	// join node1 to node3
	node1->next = node3;

	// output node1 & node3 data values
	output_list(head);

	// insert a node inbetween node1 & node3
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
	node_t* current = node;
	while(current != NULL)
	{
		if(current->data == 0)
		{
			current = current->next;	// skip to the next node so we avoid outputting the 0 from the head node
		}
		else
		{
			printf("%d\n", current->data);
			current = current->next;
		}
	}	
}


node_t* create_node(int data)
{	
	node_t* node = NULL;
	node = (node_t*)malloc(sizeof(node_t));
	if(node == NULL)
	{
		printf("Unable to create node!\n");
		exit(1);
	}
	else
	{
		node->data = data;
		return node;
	}
}

node_t* create_head_tail()
{	
	node_t* node = NULL;
	node = (node_t*)malloc(sizeof(node_t));
	if(node == NULL)
	{
		printf("Unable to create node!\n");
		exit(1);
	}
	else
		return node;
}
