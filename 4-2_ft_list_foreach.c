#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *current = begin_list;
	while (current)
	{
		f(current->data);
		current = current->next;
	}
}

void print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int main(void)
{
	char *str1 = "Hello";
	char *str2 = "World";
	char *str3 = "!";

	t_list *list = (t_list *)malloc(sizeof(t_list));
	list->data = str1;
	list->next = (t_list *)malloc(sizeof(t_list));
	list->next->data = str2;
	list->next->next = (t_list *)malloc(sizeof(t_list));
	list->next->next->data = str3;
	list->next->next->next = NULL;

	ft_list_foreach(list, &print_data);

	return (0);
}

// Assignment name  : ft_list_foreach
// Expected files   : ft_list_foreach.c, ft_list.h
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a list and a function pointer, and applies this
// function to each element of the list.

// It must be declared as follows:

// void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

// The function pointed to by f will be used as follows:

// (*f)(list_ptr->data);

// You must use the following structure, and turn it in as a file called
// ft_list.h:

// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;

// DESCRIPTION
// This program defines a function ft_list_foreach that takes a linked list of type t_list and a function pointer f as arguments.It then iterates through each element of the linked list and applies the function f to the data stored in each element.

// 	The t_list structure is defined in a header file ft_list.h which is not shown in the code snippet.However,
// 	based on the usage in the program, we can assume that it has two members : a void *pointer data and a pointer to the next element of the list next.

// The ft_list_foreach function first sets a pointer list_ptr to the beginning of the list,
//  	then enters a loop.The loop iterates through the list until list_ptr is NULL, which signifies the end of the list.During each iteration, it applies the function f to the data member of the current element pointed to by list_ptr.The function pointer f should be a function that takes a void *argument, so that it can be applied to any type of data stored in the linked list.

// The print_data function is defined to print the string pointed to by the data member of a t_list element.In the main function,
//  	a test linked list is created with three elements, each containing a string.The ft_list_foreach function is then called with this list and the print_data function as arguments, which prints out each string in the list on a new line.