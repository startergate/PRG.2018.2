#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
	int data;
	struct node *next;
};
void addNode(struct node *head, int n);
int main() {
	struct node *head = malloc(sizeof(struct node));
	head->next = NULL;
	addNode(head, 10);
	addNode(head, 20);
	addNode(head, 30);
	struct node *ptr = head->next;
	while (ptr) {
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
	ptr = head->next;
	while (ptr) {
		struct node *temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
	free(head);
}

void addNode(struct node *head, int n) {
	struct node *new = malloc(sizeof(struct node));
	new->next = head->next;
	new->data = n;
	head->next = new;
}