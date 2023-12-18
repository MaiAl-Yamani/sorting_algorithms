#include "sort.h"
/**
 * swap - swaps two pointers values
 * @x: first value
 * @y: second value
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * selection_sort - sort array of integers using Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}
