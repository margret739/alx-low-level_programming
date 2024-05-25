#include "search_algos.h"

/**
 * binary_search - searches for a value in asorted array of
 * integers using binary search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: if the vlueis not present or the array is NULL, -1.
 * Otherwise, the index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/*check if the array is NULL*/
	if (array == NULL)
		return (-1);

	/*perform binary search*/
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/*calculate the middle index*/
		i = left + (right - left) / 2;

		/*if the middle element is the value*/
		if (array[i] == value)
			/*return the index*/
			return (i);

		/*if the middle element is greater than the value*/
		if (array[i] > value)
			/*update the right boundary*/
			right = i - 1;
		else
			/*otherwise, update the left boundary*/
			left = i + 1;
	}
	/*value not found, return -1*/
	return (-1);
}
