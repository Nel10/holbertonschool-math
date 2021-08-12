#include "holberton.h"

/**
 * display_complex_number - displays the complex numbers
 * @c: struct
 * Return: number complex
 */
void display_complex_number(complex c)
{
	if (c.re != 0 && c.im != 0)
	{
		if (c.im == 1 || c.im == -1)
		{
			if (c.im < 0)
				printf("%.9g - i\n", c.re);
			else
				printf("%.9g + i\n", c.re);
		}
		else
		{
			if (c.im < 0)
				printf("%.9g - %.9gi\n", c.re, -c.im);
			else
				printf("%.9g + %.9gi\n", c.re, c.im);
		}
	}
	else if (c.re != 0 && c.im == 0)
		printf("%.9g\n", c.re);
	else if (c.re == 0 && c.im != 0)
		if (c.im == 1 || c.im == -1)
			if (c.im < 0)
				printf("%.9g - i\n", c.re);
			else
				printf("%.9g + i\n", c.re);
		else
			if (c.im < 0)
				printf("%.9g - %.9gi\n", c.re, -c.im);
			else
				printf("%.9g + %.9gi\n", c.re, c.im);
	else if (c.re == 0 && c.im == 0)
		printf("0");
}
