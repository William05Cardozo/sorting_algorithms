#include "sort.h"

void selection_sort(int *array, size_t size)
{
	int selec;
	size_t a, b, c;

	for (a = 0; a <size; a++)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[c] > array[b])
				c = b;
		}
		if (a != c)
		{
			selec = array[a];
			array[a] = array[c];
			array[c] = selec;
			print_array(array, size);
		}
	}
}
