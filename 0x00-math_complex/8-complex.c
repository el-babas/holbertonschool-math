#include "holberton.h"
/**
* complex_from_mod_arg - update the real and the imaginary parts.
* @m: modulus
* @arg: argument
* @c3: result functionc complex_from_mod_arg
*/
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = (cos(arg) * m);
	c3->im = (sin(arg) * m);
}
