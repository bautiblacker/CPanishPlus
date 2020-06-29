#ifndef STACK_H
#define STACK_H

#include "list.h"

typedef struct sNode {
    l_node * first;
    int size;
} s_node;

char * peek(l_node * q);
char * push(l_node * q);
char * pop(l_node * q);


#endif