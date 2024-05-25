#include "search_algos.h"

/**
 * advanced_binary_recursive - searches recursively for a value in a sorted
 * array of integers using binary search.
 * @array: a pointer to the first element of the [sub]array to search.
 * @left: the starting index of the [sub]array to search.
 * @right: the ending index of the [sub]array to search.
 * @value: the value to search for.
 * return: if the value is not present, -1.
 * Otherwise, the index where the value is located.
 *
 * Description: prints the [sub]array being searched after each change
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/*if the right boundary is less than the left boundary*/
	if (right < left)
		/*value not found, return -1*/
		return (-1);

	printf("searching in array: ");

	/*print the [sub]array being searched*/
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
	/*calculate the middle index*/
	i = left + (right - left) / 2;

	/*if the middle element is the value and its the first occurrence*/
	if (array[i] == value && (i == left || array[i - 1] != value))
		/*return the index*/
		return (i);

	/*if the middle element is greater thn or equal to the value*/
	if (array[i] >= value)
		/*recursively search the left subarray*/
		return (advanced_binary_recursive(array, left, i, value));
	/*recursively search the right subarray*/
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using advanced binary search.
 * @array: a pointer to the first element of the array to search.
 * @size: the number of elements in the array
 * @value: the value to search for.
 *
 * return: if the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	/*check if the array is NULL or empty*/
	if (array == NULL || size == 0)
		return (-1);
	/*call the recursive function*/
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

