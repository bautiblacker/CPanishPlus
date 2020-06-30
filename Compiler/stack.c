#include "stack.h"


static s_node * newStackNode(char * value) {
    s_node * node = (s_node *)malloc(sizeof(s_node));
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    return node;
};

void push(char * value, sm_node * stack) {
    s_node * newNode = newStackNode(value);
    if(stack->first == NULL) {
        stack->first = newNode;
        return;
    }
    newNode->next = stack->first;
    stack->first->prev = newNode;
    stack->first = newNode;
};

void printStack(sm_node * stack) {
    if (stack->first == NULL) printf("Stack vacio\n");
    s_node * current = stack->first;
    while (current != NULL) {
        printf("[\t\t%s\t\t]\n", current->value);
        current = current->next;
    }
};

char * peekStack(sm_node * stack) {
    if(stack != NULL && stack->first != NULL) {
        return stack->first->value;
    }

    return NULL;
};

char * popStack(sm_node * stack) {
    if(stack == NULL || stack->first == NULL) {
        return NULL;
    }

    char * ret = stack->first->value;
    stack->first = stack->first->next;

    return ret;
};