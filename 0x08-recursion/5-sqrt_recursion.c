#include "main.h"

/**qrt_helper - Finds the square root recursively using binary search.
 * @low: The lower bound of the search range.
  * @high: The upper bound of the search range.
   * @n: The number to find the square root of.
    * Return: The square root if found, or -1 if not found.
     */
int _sqrt_helper(int low, int high, int n)
{
	int mid = low + (high - low) / 2;
	int midSquared = mid * m
	
	if (low > high) 
	{
		return -1; 
	}
	if (midSquared == n)
	{
		return mid; 
	}
	else if (midSquared < n)
	{
		return _sqrt_helper(mid + 1, high, n); 
	}
	else
	{
		return _sqrt_helper(low, mid - 1, n);
	}
}

/**
   * _sqrt_recursion - Returns the natural square root of a number.
    * @n: The number to find the square root of.
     * Return: The square root if found, or -1 if not found.
      */
int _sqrt_recursion(int n) {
	if (n < 0) {
		return -1; 
	}

	return _sqrt_helper(0, n, n);
}
