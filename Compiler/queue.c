#include "queue.h"

int queueOffer(int newValue, q_node * q) {
    int value = atoi(newValue);
    l_node * newNode = newListNode(value);
    if(q == NULL) {
        q = (q_node *)malloc(sizeof(q_node));
        if(q == NULL) {
            return -1;
        }
        q->first = NULL;
        q->last = NULL;
        q->size = 0;
    }

    if(q->size == 0) {
        q->first = newNode;
        q->last = newNode;
    } else {
        l_node * aux = q->last;
        q->last = newNode;
        q->last->prev = aux;
        q->last->next = NULL;
        aux->next = q->last;
    }

    return q->size++;
}

int removeFromQueue(int newValue, q_node * q) {
    int value = atoi(newValue);
    l_node * aux;
    if(value == q->last->value) {
    l_node * aux = q->last;
        q->last = aux->prev;
    }

    q->first = removeFromList(newValue, q->first);
    return q->size--;
}

int poll(int value, q_node * q) {
    int ret = q->first->value;
    q->first = removeFromList(ret, q->first);
    q->size--;

    return ret;
}

int peek(q_node * q) {
    if(q == NULL || q->first == NULL) {
        return -1;
    }

    return q->first->value;
}



void printQueue(q_node * q) {
    if(q != NULL && q->first != NULL) {
        printf("[\t%d\t] <-- ultimo\n", q->last->value);
        l_node * aux = q->last->prev;
        while(aux->prev != NULL) {
            printf("[\t%d\t]\n", aux->value);
            aux = aux->prev;
        }
        printf("[\t%d\t] <-- primero \n", q->first->value);
    } else {
        printf("Lista vacia\n");
    }
}