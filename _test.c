#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

int should_remove(void *data)
{
	int *value = (int *)data;
	return (*value % 2 == 0);
}

void ft_list_remove_if(t_list **head, int (*should_remove)(void *))
{
	t_list *current = *head;
	t_list *previous = NULL;
	while (current != NULL)
	{
		if (should_remove(current->data))
		{
			if (previous == NULL)
			{
				*head = current->next;
			}
			else
			{
				previous->next = current->next;
			}
			t_list *temp = current;
			current = current->next;
			free(temp);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}

int main()
{
	t_list *head = malloc(sizeof(t_list));
	head->data = 1;
	head->next = malloc(sizeof(t_list));
	head->next->data = 2;
	head->next->next = malloc(sizeof(t_list));
	head->next->next->data = 3;
	head->next->next->next = NULL;

	ft_list_remove_if(&head, should_remove);

	t_list *current = head;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}

	return 0;
}
