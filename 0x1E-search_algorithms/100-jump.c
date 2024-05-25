#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using jump search.
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array.
 * @value: the value to search for
 * Return: if the value is not present or the array is NULL, -1.
 * Otherwise, foirst index where the value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/*check if the array is NULL or empty*/
	if (array == NULL || size == 0)
		return (-1);

	/*calculate the jump step size*/
	step = sqrt(size);

	/*perform the jump search*/
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("value checked array[%ld] = [%d]\n", jump, array[jump]);

		/*store the previous jump position*/
		i = jump;

		/*update the jump position*/
		jump += step;
	}

	printf("value found between indexes [%ld] and [%ld]\n", i, jump);

	/*adjust the jump position*/
	jump = jump < size - 1 ? jump : size - 1;

	/*perform a linear search within the identified range*/
	for (; i < jump && array[i] < value; i++)
		printf("value checked array[%ld] = [%d]\n", i, array[i]);

	printf("value checked array[%ld] = [%d]\n", i, array[i]);

	/*check if the value is found and return the corresponding index*/
	return (array[i] == value ? (int)i : -1);
}
