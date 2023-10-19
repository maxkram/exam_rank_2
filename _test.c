#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"
// #include "flood_fill.h"
// #include "sort_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr = *begin_list;
	t_list *prev = NULL;
	while(curr)
	{
		if(cmp(curr->data, data_ref)==0)
		{
			if(prev==NULL)
				*begin_list=curr->next;
			else
				prev->next=curr->next;
			free(curr);
			curr=prev==NULL?*begin_list:prev->next;
		}
		else
		{
			prev=curr;
			curr=curr->next;
		}
	}
}

void print_list(t_list **begin_list)
{
	t_list *cur=*begin_list;
	while(cur)
	{
		printf("%s\n", cur->data);
		cur=cur->next;
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