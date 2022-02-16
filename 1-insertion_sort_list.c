#include "sort.h"

/**
 * swap - Function swap the nodes
 * @l: Left node
 * @r: Right node
 * @h: Pointer to head list
 * Return: No line
 **/

void swap(listint_t *l, listint_t *r, listint_t **h)
{
	listint_t *inst;

	inst = l->prev;
	if (inst)
		inst->next = r;
	r->prev = inst;
	l->prev = r;
	l->next = r->next;
	r->next = l;
	if (l->next != NULL)
		l->next->prev = l;
	if (r->prev == NULL)
		*h = r;
	print_list(*h);
}

/**
 * insertion_sort_list - Function sort a linkend list
 * @list: List
 * Return: No Line
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *nextt, *next, *prev, *previ;

	if (list == NULL)
	{
		return;
	}
	nextt = next = *list;
	while (nextt != NULL)
	{
		while (nextt->prev != NULL)
		{
			prev = nextt->prev;
			previ = prev;
			if (prev->n > nextt->n)
				swap(prev, nextt, list);
			nextt = previ;
		}
		nextt = next->next;
		next = nextt;
	}
}
