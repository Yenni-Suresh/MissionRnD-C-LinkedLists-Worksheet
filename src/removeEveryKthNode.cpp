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
	if (head == NULL || K <= 1)
	   return NULL;
	int count = K - 2;
	struct node *p=head,*q;
	while (p)
	{
		while (count != 0 && p->next)
		{
			p = p->next;
			count--;
		}
		q = p->next;
		if (!q||!q->next)
		{
			p->next = NULL;
			break;
		}
		p->next = q->next;
		p = p->next;
		count = K - 2;
	}
	return head;
}