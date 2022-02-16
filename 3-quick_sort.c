#include "sort.h"

/**
 * quick_sort - Function what sort with the algorithm
 * @array: Array to print and sort (pointer)
 * @size: Number of elements in array
 * Return: No Line
 **/

void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}

/**
 * quick - Recursion Function
 * @n: Array to print
 * @low: index for first element
 * @high: Index for last element
 * @size: size of array
 * qs: Variable
 * Return: No Line
 **/

void quick(int *n, int low, int high, int size)
{
	int a, b, c; /* Iterators */
	int qs;

	if (low < high)
	{
		a = high;
		b = low;
		for (c = low; c < high; c++)
		{
			if (n[c] < n[a])
			{
				if (c != b)
				{
					qs = n[c];
					n[c] = n[b];
					n[b] = qs;
					print_array(n, size);
				}
				b++;
			}
		}
		if (b != a && n[b] != n[a])
		{
			qs = n[b];
			n[b] = n[a];
			n[a] = qs;
			print_array(n, size);
		}
		quick(n, b, b - 1, size);
		quick(n, b + 1, high, size);
	}
}
