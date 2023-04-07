#include <stdlib.h>
#include "sort_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int swap;
	t_list *tmp;

	if (!lst || !lst->next)
		return lst;

	tmp = lst;

	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}

	lst = tmp;
	return (lst);
}

#include <stdio.h>
#include <stdlib.h>

t_list *add_int(t_list *list, int nb)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = nb;
	new->next = list;
	return (new);
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main(void)
{
	t_list *list;

	list = NULL;
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = add_int(list, 4);
	list = add_int(list, 1);
	list = sort_list(list, &ascending);

	while (list != NULL)
	{
		printf("%d\n", list->data);
		list = list->next;
	}

	return (0);
}

// Assignment name  : sort_list
// Expected files   : sort_list.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following functions:

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// This function must sort the list given as a parameter, using the function
// pointer cmp to select the order to apply, and returns a pointer to the
// first element of the sorted list.

// Duplications must remain.

// Inputs will always be consistent.

// You must use the type t_list described in the file list.h
// that is provided to you. You must include that file
// (#include "list.h"), but you must not turn it in. We will use our own
// to compile your assignment.

// Functions passed as cmp will always return a value different from
// 0 if a and b are in the right order, 0 otherwise.

// For example, the following function used as cmp will sort the list
// in ascending order:

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// DESCRIPTION
// The sort_list function takes a pointer to a linked list lst and a pointer to a function cmp that takes two integers and returns an integer. It sorts the linked list in ascending order based on the comparison function cmp and returns a pointer to the sorted list.

// The function starts by checking if the list is empty or if it contains only one element. If either of these conditions is true, the function simply returns the list as it is already sorted.

// If the list has two or more elements, the function initializes a temporary pointer tmp to the start of the list. It then enters a loop that continues until the end of the list is reached.

// In each iteration of the loop, the function compares the data of the current node lst with the data of the next node lst->next. It does this by calling the comparison function cmp with the two data values. If the comparison function returns 0, indicating that the two values are equal, the function swaps the data values of the two nodes and sets the current node lst back to the start of the list using the temporary pointer tmp. This is done to ensure that the entire list is checked again for any more adjacent equal elements that need to be swapped.

// If the comparison function returns a non-zero value, indicating that the two data values are not equal and are already in the correct order, the function simply moves to the next node in the list.

// Once the end of the list is reached and all adjacent equal elements have been swapped, the function sets the current node lst back to the start of the list using the temporary pointer tmp. It then returns a pointer to the sorted list.

// Overall, this function uses a simple algorithm that iterates over the list, swapping adjacent equal elements until the list is sorted. This algorithm has a time complexity of O(n^2) in the worst case, which can be quite slow for large lists. However, it is simple to implement and can be useful for small lists or for educational purposes.