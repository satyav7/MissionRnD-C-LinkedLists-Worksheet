/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL)
		return head;
	if (K == 1 || K <= 0){
		head = NULL;
		return head;
	}
	int count = 0;
	struct node *prev = NULL, *current = NULL, *temp = NULL;
	current = head;
	prev = head;
	while (current != NULL){
		count++;
		if (count % K == 0)
		{
			prev->next = current->next;
			temp = current;
			current = current->next;
			continue;
		}
		prev = current;
		current = current->next;


	}

	return head;
}

