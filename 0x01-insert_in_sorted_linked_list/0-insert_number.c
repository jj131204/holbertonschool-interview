#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
listint_t *new;
listint_t *current;
listint_t *previous = NULL;

current = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = number;
new->next = NULL;

if (*head == NULL || (*head)->n >= number)
{
new->next = *head;
*head = new;
return (new);
}
while (current && number >= current->n)
{
previous = current;
current = current->next;
}
new->next = current;
previous->next = new;
return (new);
}
