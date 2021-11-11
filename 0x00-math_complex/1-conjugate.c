#include "holberton.h"
#include <stdio.h>
/**
 * conjugate - function that returns the conjugate of a given complex number.
 * @c: structur
 *
 * Return: structura conjugate
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
