#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list)
{
	int size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

int main(void)
{
	int n = 0;

	t_list *c = malloc(sizeof(t_list));
	c->next = 0;
	c->data = &n;

	t_list *b = malloc(sizeof(t_list));
	b->next = c;
	b->data = &n;

	t_list *a = malloc(sizeof(t_list));
	a->next = b;
	a->data = &n;

	printf("%d\n", ft_list_size(a));
	return (0);
}

// Assignment name  : ft_list_size
// Expected files   : ft_list_size.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the number of elements in the linked list that's
// passed to it.

// It must be declared as follows:

// int	ft_list_size(t_list *begin_list);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;

// DESCRIPTION
// This program is a simple implementation of a function that counts the number of elements in a linked list.

// 	The ft_list_size function takes a pointer to the beginning of a linked list as an argument and returns the number of elements in that list.

// 	The function works by initializing a variable size to zero,
// 	and then iterating through the linked list using a while loop.Inside the loop, the function moves to the next element in the list by setting begin_list to begin_list->next and increments the size variable by one.This process continues until begin_list is equal to NULL, indicating that the end of the list has been reached.Finally, the function returns the value of size, which represents the number of elements in the list.

// 																																																																																														The main function creates a simple linked list with three nodes and passes a pointer to the first node to ft_list_size.It then prints the value returned by ft_list_size,
// 	which is 3 in this case.