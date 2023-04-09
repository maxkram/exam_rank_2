#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr, *prev;
	curr = *begin_list;
	prev = NULL;
	// use cmp func, if beginning, assign to next
	// if not, assign prev, than clean curr
	// then assign curr
	while (curr != NULL)
	{
		// if func works
		if (cmp(curr->data, data_ref) == 0)
		{
			if (prev == NULL)
				*begin_list = curr->next;
			else
				prev->next = curr->next;
			free(curr);
			curr = prev == NULL ? *begin_list : prev->next;
		}
		// skip func move over
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}

#include <stdio.h>
#include <string.h>

void print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

int main(void)
{
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
	return (0);
}

// Assignment name  : ft_list_remove_if
// Expected files   : ft_list_remove_if.c
// Allowed functions: free
// --------------------------------------------------------------------------------

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.

// It will be declared as follows :

// void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

// cmp takes two void* and returns 0 when both parameters are equal.

// You have to use the ft_list.h file, which will contain:

// $>cat ft_list.h
// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }                   t_list;
// $>

// DESCRIPTION
// This program demonstrates the implementation of ft_list_remove_if function which removes nodes from a linked list whose data matches a given reference data by calling a comparison function cmp which returns 0 if the two data are equal.

// 	The program starts with defining the t_list struct and the ft_list_remove_if function which takes a double pointer to the first node of the linked list,
// 	a reference data pointer, and a comparison function pointer as arguments.The function iterates through each node of the linked list and checks if the data matches the reference data by calling the comparison function cmp which returns 0 if they match.If a match is found, the node is removed from the linked list by updating its previous node's next pointer to its next node and freeing the memory of the removed node.

// 	In the main function,
// 	four nodes are created with some data and linked together to form a linked list.Then the linked list is printed and the ft_list_remove_if function is called with the reference data and the comparison function pointer.After removing the nodes from the linked list whose data matched the reference data, the updated linked list is printed again.

// 																																																																												  The output of the program shows the original linked list followed by the updated linked list with the node whose data matched the reference data removed.