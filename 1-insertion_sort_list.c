#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */

listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list = NULL;
	listint_t *node;

	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		node->n = array[size];
		node->next = list;
		node->prev = NULL;

		if (list)
			list->prev = node;
		list = node;
	}
	return (list);
}
