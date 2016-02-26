#include <stdio.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *ptr;
NODE *cur;
NODE *head = NULL;

NODE* insert(NODE*, int);

int main(){
	
	head1 = insert(head1, 1);
	head1 = insert(head1, 2);
	head1 = insert(head1, 3);
	head2 = insert(head2, 4);
	head2 = insert(head2, 5);
	head2 = insert(head2, 6);
	head2 = insert(head2, 7);
	ptr = head;
	
	while (ptr){
		printf("%d->", ptr->data);
		ptr = ptr->next;
	}
	return 0;
}
NODE* insert(NODE*head, int K){
	cur = malloc(sizeof(NODE));
	int count = 0;
	cur->data = K;
	if (head == NULL){
		cur->next = head;
		head = cur;
		return head;
	}
	ptr = head;
	while (count != K){
		count++;
		ptr = ptr->next;
	}
	ptr->next = cur;
	cur->next = NULL;
	return head;
}