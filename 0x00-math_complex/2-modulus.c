#include "holberton.h"

/**
 * modulus - lenght from origin to complex number
 * @c: struct complex
 * Return: m
 */
double modulus(complex c)
{
	double m;

	m = sqrt(pow(c.re, 2) + pow(c.im, 2));
	return (m);
}
