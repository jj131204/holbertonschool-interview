#include "palindrome.h"

/**
 * is_palindrome - Look if a number is palindrome
 * @n: (unsigned long) Complete Number
 *
 * Return: 1 if It's Palindrome or 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long length_all = length_number(n);
	unsigned long left = 1, right = 1, l = 0, r = 1, i = 1;
	unsigned long length_half = (length_all / 2), step = 0;

	if (!length_all)
		return (1);

	/* Right Side: Count Zeros */
	for (; i < length_all; ++i)
	{
		left *= 10;
	}

	/* Traversing in the numbers */
	for (; step < length_half; ++step)
	{
		l = n / left;
		l %= 10;

		r = n / right;
		r %= 10;

		if (l != r)
			return (0);

		right *= 10;
		left /= 10;
	}

	return (1);
}



/**
 * length_number - Look amount of numbers
 * @n: (unsigned long) Number to count
 *
 * Return: Length of number complete
 */
int length_number(unsigned long n)
{
	int count = 0;
	unsigned long i = 10, j = 1;

	for (; j != 0; (i *= 10), ++count)
	{
		j = n / i;
		j %= 10;
	}

	return (count);
}
