#include "fibonacci.h"

/**
 * gold_number - calculate gold number
 * @head: node
 * Return: Golden number
 */
double gold_number(t_cell *head)
{
	if (!head)
		exit(98);
	return ((double)head->elt / (double)head->next->elt);
}
/**
 * Fibonnaci - calculate fibonacii
 * Return: node
 */
t_cell *Fibonnaci()
{
	int a = 1, b = 1, c = 1;
	t_cell *new, *head = NULL;

	while (a != 6765)
	{
		new = malloc(sizeof(t_cell));
		if (new == NULL)
			return (NULL);
		a = b;
		b = c;
		c = a + b;
		new->elt = a;
		new->next = head;
		head = new;
	}
	return (head);
}

