#include "holberton.h"
#include <stdio.h>
/**
 * display_complex_number - print number complex
 * @c: structura
 */
void display_complex_number(complex c)
{
	char s = (c.im < 0) ? '-' : '+';
	double s_im = (c.im < 0) ? -(c.im) : c.im;

	if (c.im == 0)
	{
		printf("%.9g\n", c.re);
	}
	else if (c.re == 0)
	{
		if (c.im > 0)
		{
			if (c.im == 1)
				printf("i\n");
			else
				printf("%.9gi\n", s_im);
		}
		else
		{
			if (c.im == -1)
				printf("-i\n");
			else
				printf("%c %.9gi\n", s, s_im);
		}
	}
	else if (c.re != 0 && c.im != 0)
	{
		if (s_im == 1)
			printf("%.9g %c i\n", c.re, s);
		else
			printf("%.9g %c %.9gi\n", c.re, s, s_im);
	}
}
