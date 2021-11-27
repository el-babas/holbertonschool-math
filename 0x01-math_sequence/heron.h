#ifndef HEADER_MATH
#define HEADER_MATH

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct t_cell - list of results
 * @elt: number
 * @next: point to the next node
 */
typedef struct t_cell
{
	int elt;
	struct t_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
