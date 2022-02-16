#include "sort.h"

/**
 * part_quick - Lomutu Function
 * @n: Array to print
 * @low: index for first element
 * @high: Index for last element
 * size: interger
 * Return: indext of pivot
 **/

int part_quick(int *n, int low, int high)
{
	int a, b, c, d; /* Iterators */
	static int size, k;

	if (k == 0)
	{
		size = high + 1, k++;
	}
	a = n[high];
	b = low;
	for (c = low; c < high; c++)
	{
		if (n[c] <= a)
		{
			if (b != c)
			{
				d = n[b];
				n[b] = n[c];
				n[c] = d;
				print_array(n, size);
			}
				b++;
		}
	}
		if (b != high)
		{
			d = n[b];
			n[b] = n[high];
			n[high] = d;
			print_array(n, size);
		}
		return (b);
}

/**
 * quick - Recursion Function
 * @n: array to sort
 * @low: index for first element
 * @high: index for last element
 * a: Variable
 * Return: No Line
 **/

void quick(int *n, int low, int high)
{
	int a;

	if (low < high)
	{
		a = part_quick(n, low, high);
		quick(n, low, a - 1);
		quick(n, a + 1, high);
	}
}

/**
 * quick_sort - Function what sort with the algorithm
 * @array: Array to print and sort (pointer)
 * @size: Number of elements in array
 * Return: No Line
 **/

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
	{
		return;
	}
	quick(array, 0, size - 1);
}
