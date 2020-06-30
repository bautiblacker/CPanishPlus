#include "stack.h"

char * peek(l_node * first) {
    if(first != NULL) {
        return first->value;
    }

    return NULL;
}

void push(char * value, l_node * first) {
    l_node * newNode = newListNode(value);
    if(first == NULL) {
        first = newNode;
        return;
    }

    newNode->next = first;
    first->prev = newNode;
    first = newNode;
}

char * pop(l_node * first) {
    if(first == NULL) {
        return NULL;
    }

    char * ret = first->value;
    first = first->next;

    return ret;
}