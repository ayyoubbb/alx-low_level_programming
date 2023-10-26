#include "main.h"

/**
 * is_palindrome_helper - a function helper to is_palindrome.
 * @start: a pointer to a character 1.
 * @end: a pointer to a character 2.
 * Return: return one ro zero.
 */
int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * is_palindrome -a function that returns 0 or 1.
 * @s: an integer to a parameter.
 * Return: return either one or zero.
 */

int is_palindrome(char *s)
{
	char *end = s;

	while (*end)
	{
		end++;
	}
	end--;
	return (is_palindrome_helper(s, end));
}
