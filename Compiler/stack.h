#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct sNode {
    l_node * first;
    int size;
} s_node;


int peekStack(l_node * q);
int pushStack(l_node * q);
int popStack(l_node * q);


#endif