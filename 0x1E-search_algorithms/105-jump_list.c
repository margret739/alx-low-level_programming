#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted linked list
 * of integers using jump search.
 * @list: a pointer to the head of the linked list to search
 * @size: the number of nodes in the list
 * @value: the value to search for.
 *
 * Return: if th value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;


	/*check if the list is NULL or empty*/
	if (list == NULL || size == 0)
		return (NULL);

	step = 0;

	/*calculate the jump step size*/
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/*store the prvious jump node*/
		node = jump;

		for (step += step_size; jump->index < step; jump = jump->next)
		{
			/*if reached the end of the list*/
			if (jump->index + 1 == size)
				break;
		}

		printf("value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("value found between indexes [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
