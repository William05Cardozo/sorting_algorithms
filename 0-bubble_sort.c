#include "sort.h"

/**
 * bubble_sort - Bubble Algorithm
 * @array: Array to print and sort (pointer)
 * @size: Number of elements in array
 * a: Iterator
 * b: Iterator
 * Return: No Line
 **/

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int bubb;

	if (array == NULL)
	{
		return;
	}
	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				bubb = array[b];
				array[b] = array[b + 1];
				array[b + 1] = bubb;
				print_array(array, size);
			}

		}
	}

}
