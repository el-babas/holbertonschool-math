#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1, c2;
    double mod, arg;
    c1.im = 2;
    c1.re = 2;
    mod = modulus(c1);
    arg = argument(c1);
    display_complex_number(c1);
    complex_from_mod_arg(mod, arg, &c2);
    display_complex_number(c2);
    return (0);
}
