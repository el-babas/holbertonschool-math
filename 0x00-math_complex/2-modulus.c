#include "holberton.h"
/**
 * modulus - function that returns the modulus of a given complex number.
 * @c: complex
 *
 * Return: the modulus
 */
double modulus(complex c)
{
	double c_re = pow(c.re, 2.0);
	double c_im = pow(c.im, 2.0);

	return (sqrt(c_re + c_im));
}
