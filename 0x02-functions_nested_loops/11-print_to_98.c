#include "main.h"

/**
 * print_to_98 - function to print from n t0 98
 *@n: enrt number
 * Return: always 0.
 */


void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
		  _putchar(n);
			
			if (n != 98)
			{
			  _putchar(',');
			}	
		}
		n++;
	}
	else
	{
		while (n >= 98)
		{
		  _putchar(n);
		  if (n != 98)
		    {
		      _putchar(',');
		    }
		  n--;
		}
	}
}
