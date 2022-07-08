#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Creates the head of a linkedlist and returns it
node * create_node()
{
   node * node = (struct node *)malloc(sizeof(struct node));
   return node;
}

// Creates a linkedlist with 3 nodes using 2 pointer variables
struct node * create_linked_list()
{

    // Creates the head with date
    node * new_head = create_node();
    new_head->data = 45;
    new_head->link = NULL;

    // Creates the next node and links this with the initial node
    node * next_node = create_node();
    next_node->data = 5;
    next_node->link = NULL;
    new_head->link = next_node;

    // Reuse the node to create a third node
    next_node = create_node();
    next_node->data = 6;
    next_node->link = NULL;
    new_head->link->link = next_node;

    return new_head;
}

// Counts the number of linked_list nodes
void count_nodes(struct node * head)
{
int count;
struct node * current = create_node();
current = head;

while (current !=NULL)
{
    count++;
    current = current->link;
}
printf("There are %d nodes in the linkedlist\n",count);}
