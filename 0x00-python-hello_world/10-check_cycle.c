#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * check_cycle to check the code if go faster
 * Discprtion to check the code if go faster
 * @list:pointer of check_cycle
 * Return: 0 or 1
 */

int check_cycle(listint_t *list)
{
	listint_t *s ,*f;
	if (list == NULL || list->next == NULL)
		return(0);
	s =list->next;
	f =list->next->next;
	while (s && f && f->next)
	{
		if(s == f)
			return(1);
		s = s->next;
		f = f->next->next;
	}
	return (0);
}

