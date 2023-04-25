#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: integer stored in node
 * @prev: pointer to the previous element of list
 * @next: pointer to next element of list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;


/** 0 */
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void swapem(listint_t *l, listint_t *r, listint_t **h);
void selection_sort(int *array, size_t size);

#endif
