#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t *head, *tmp;

    head = *list;

    if (list == NULL || *list == NULL)
		return;
    while (head != NULL)
    {
        if (head->n > head->next->n)
		{
			tmp = head->next;
			head->next = tmp->next;
			head->prev = tmp;
			tmp->prev = NULL;
			print_list(head);
		}
		head = head->next;
    }

}