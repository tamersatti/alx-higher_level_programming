#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*add_nodeint - add  new node at the begin of  listint_t list
*@head: head  listint_t
*@n: int t add in listint_t list
*Return: address of new elements, or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
/**
*is_palindrome - identify if link list is palindrome
*@head: head listint_t
*Return:1 if it is palindrome else 0 if not
*/
int is_palindrome(listint_t **head)
{
	listint_t *head2 = *head;
	listint_t *a = NULL, *a2 = NULL;

	if (*head == NULL || head2->next == NULL)
		return (1);
	while (head2 != NULL)
	{
		add_nodeint(&a, head2->n);
		head2 = head2->next;
	}
	a2 = a;
	while (*head != NULL)
	{
		if ((*head)->n != a2->n)
		{
			free_listint(a);
			return (0);
		}
		*head = (*head)->next;
		a2 = a2->next;
	}
	free_listint(a);
	return (1);
}
