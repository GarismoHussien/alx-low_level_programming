#include "lists.h"

/**
 * pop_listint - deletes the head node f  linked list
 * @head: pointer to the first element in  linked list
 *
 * Return: the data inside the elements  deleted,
 * or 0 if the list 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (num);
}
