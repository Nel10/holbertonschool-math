#include "holberton.h"

/**
 * conjugate - conjugate complex numbers
 * @c: struct complex
 * Return: c
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
