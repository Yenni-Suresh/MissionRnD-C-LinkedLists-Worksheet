/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int count=0;
	struct node *p=head, *q=head;
	while (p)
	{
		if (p->data == 0)
		{
			q->data = 0;
			q = q->next;
		}
		else if (p->data == 1)
			count++;
		p = p->next;
	}
	while (count != 0)
	{
		q->data = 1;
		q = q->next;
		count--;
	}
	while (q)
	{
		q->data = 2;
		q = q->next;
	}
}