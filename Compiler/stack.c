#include "stack.h"

int peekStack(s_node * stack) {
    if(stack != NULL && stack->first != NULL) {
        return stack->first->value;
    }

    return NULL;
}

int pushStack(char * value, s_node * first) {
    l_node * newNode = newListNode(value);
    if(first == NULL) {
        first = newNode;
        return;
    }

    newNode->next = first;
    first->prev = newNode;
    first = newNode;
}

int popStack(l_node * first) {
    if(first == NULL) {
        return NULL;
    }

    char * ret = first->value;
    first = first->next;

    return ret;
}