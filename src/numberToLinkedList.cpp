/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node * head;
	head = NULL;
	struct node * temp;
	int digit;
	if (N<0)
		N *= -1;
	if (N == 0){
		temp = (struct node *) malloc(sizeof(struct node *));
		temp->num = N;
		temp->next = head;
		head = temp;
	}
	else{
		while (N!=0){
			digit = N % 10;
			N /= 10;
			temp = (struct node *) malloc(sizeof(struct node *));
			temp->num = digit;
			temp->next = head;
			head = temp;
		}
	}
	return head;
}