#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
	int data;
	struct node *next;
};
int main() {
	struct node *head = malloc(sizeof(struct node));
	struct node *node1 = malloc(sizeof(struct node));
	struct node *node2 = malloc(sizeof(struct node));
	struct node *node3 = malloc(sizeof(struct node));
	head -> next = node1;
	node1 -> data = 20;

	node1 -> next = node2;
	node2 -> data = 30;

	node2 -> next = node3;
	node3 -> data = 40;

	node3 -> next = NULL;

	struct node *ptr = head -> next;

	while (ptr) {
		printf("%d\n", ptr -> data);
		ptr = ptr->next;
	}

	free(head);
	free(node1);
	free(node2);
	free(node3);
}