#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array
 * of integers using binary search.
 * @array: a pointer to the first element of the array to search.
 * @left: the starting index of the [sub]array to search.
 * @right: the ending index of the [sub]array to search.
 * @value: the value to search for.
 * Return: if the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */

int _binary_search(int *array, size_t left, size_t right,
		int value)
{
	size_t i;

	/*check if the array is NULL*/
	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/*calculate the middle index*/
		i = left + (right - left) / 2;

		/*if the middle elemnt is the value*/
		if (array[i] == value)
			/*return the index*/
			return (i);
		/*if the middle element is greeater than the value*/
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

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using exponential search.
 * @array: a pointer to the first element of the array to search,
 * @size: the number of elements in array
 * @value: the value to search for.
 * Return: if the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	/*check if the array is NULL*/
	if (array == NULL)
		return (-1);
	/*perform exponential search if the element is not the target value*/
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("value checked array[%ld] = [%d]\n", i, array[i]);
	}

	/*determine the range where the value is expected to be found*/
	right = i < size ? i : size - 1;
	printf("value found between indexes [%ld] and [%ld]\n", i / 2, right);

	/*perform binary search within identified range*/
	return (_binary_search(array, i / 2, right, value));
}
