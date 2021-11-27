#ifndef HEADER_MATH
#define HEADER_MATH

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct cell - list of results
 * @elt: number
 * @next: point to the next node
 */
typedef struct cell
{
	int elt;
	struct cell *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);


#endif
