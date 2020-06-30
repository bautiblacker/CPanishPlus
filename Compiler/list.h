#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef enum types {TYPE_STRING, TYPE_INT} l_type;


typedef struct lNode {
    int value;
    struct lNode * next;
    struct lNode * prev;
} l_node;

l_node * newListNode(int value);

l_node * addListNode(char * value, l_node * first);

void printList(l_node * first);

l_node * removeFromList(char * value, l_node * first);

void printBackwards(l_node * first);

#endif