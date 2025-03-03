#ifndef LINKED_LIST_H 
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char data;
  struct node *node_ptr;
} node_t;

typedef node_t *ListNodePtr;

void insert(ListNodePtr *head, char value);
void insertAtEnd(ListNodePtr *head, char value);
void insertAtBeggining(ListNodePtr *head, char value);
char deleteNode(ListNodePtr *head, char value);
void deleteAtBeggining(ListNodePtr *head);
int isEmpty(ListNodePtr head);
void printList(ListNodePtr head);

#endif
