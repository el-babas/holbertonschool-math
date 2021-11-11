#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;
    double mod;

    c1.re = 1;
    c1.im = 2;
    mod = modulus(c1);
    printf("%f\n", mod);
    return (0);
}
