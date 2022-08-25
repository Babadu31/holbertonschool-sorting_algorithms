#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: List of integers
 * @size: Lenght
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
size_t x;
size_t y;
size_t min;
	int temp;

	if (!array)
		return;
	if (size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[min])
			{
				min = y;
			}
		}
		if (min != x)
		{
			temp = array[x];
			array[x] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
