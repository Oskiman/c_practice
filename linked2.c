#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node* next;
} node_t;

void output_list(node_t* node);

int main(void)
{
	node_t n1, n2, n3;
	node_t* head;

	n1.data = 1;
	n2.data = 2;
	n3.data = 3;

	head = &n3;
	n3.next = &n2;
	n2.next = &n1;
	n1.next = NULL;

	output_list(head);

	return 0;
}

void output_list(node_t* node)
{
	node_t* current = node;
	while(current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
