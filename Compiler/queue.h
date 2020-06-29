#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

typedef struct qNode {
    l_node * first;
    l_node * last;
    int size;
} q_node;

int queueOffer(int value, q_node * q);
int removeFromQueue(int value, q_node * q);
int poll(int value, q_node * q);
int peek(q_node * q);

#endif