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
		printf("%.0f\n", c.re);
	}
	else if (c.re == 0)
	{
		if (c.im > 0)
			printf("%.0fi\n", s_im);
		else
			printf("%c %.0fi\n", s, s_im);
	}
	else if (c.re != 0 && c.im != 0)
	{
		printf("%.0f %c %.0fi\n", c.re, s, s_im);
	}
}
