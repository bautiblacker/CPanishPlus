#ifndef STACK_H
#define STACK_H

#include "list.h"

typedef struct sNode {
    char * value;
    struct sNode * next;
    struct sNode * prev;
} s_node;

typedef struct sMNode {
    s_node * first;
    int size;
} sm_node;

static s_node * newStackNode(char * value);

void push(char * value, sm_node * stack);

void printStack(sm_node * stack);

char * peekStack(sm_node * stack);

char * popStack(sm_node * stack);

#endif