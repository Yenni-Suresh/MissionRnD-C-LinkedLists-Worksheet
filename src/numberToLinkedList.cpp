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
	if (N == 0)
	{
		struct node *n = (struct node*)malloc(sizeof(struct node));
		n->num = 0;
		n->next = NULL;
		return n;
	}
	struct node *first = NULL;
	if (N==NULL)
	   return NULL;
	int d;
	if (N < 0)
		N = N - 2*N;
	do{
		struct node *n = (struct node*)malloc(sizeof(struct node));
		d = N / 10;
		if (d!=0)
		  n->num = N % 10;
		else n->num = N;
		N = d;
		if (first == NULL)
		{
			n->next = NULL;
		}
		else n->next = first;
		first = n;
	} while (N != 0);
	return first;
	
}