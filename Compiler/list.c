#include "list.h"
#include "compiler.h"
#include <stdlib.h>

#define MAX_VAR 10

typedef enum opList {ADD, REMOVE, DELETE, PEEK} opList;
int size = 0;


l_node * newListNode(int value) {
    l_node * node = (l_node *)malloc(sizeof(l_node));
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

l_node * addListNode(char * value, l_node * first) {
    int newValue = atoi(value);
    l_node * newNode = newListNode(newValue);
    if(first == NULL) {
        first = newNode;
        return first;
    }

    l_node * aux = first;
    while(aux->next != NULL) {
        aux = aux->next;
    }

    aux->next = newNode;
    newNode->next = NULL;
    newNode->prev = aux;
    return first;
}

void printList(l_node * first) {
   if(first != NULL) {
        l_node * aux = first;
        while(aux != NULL) {
            printf("%d ", aux->value);
            aux = aux->next;
        }
    } else {
        printf("empty list");
    }
    printf("\n");
 };

l_node * removeFromList(char * value, l_node * first) {
    int valueToRemove = atoi(value);
    if(first == NULL || first->next == NULL) {
        first = NULL;
        printf("No hay mas elementos en la coleccion\n");
        return NULL;
    }

    if(first != NULL && (valueToRemove == first->value)) {
        first = first->next;
        free(first->prev);
        first->prev = NULL;
        return first;
    }

    l_node * prev = NULL;
    l_node * aux = first;

    while(aux != NULL && aux->value != valueToRemove) {
        prev = aux;
        aux = aux->next;
    }

    if(aux == NULL) {
        printf("Elemento no pertenece a la coleccion\n");
        return first;
    }

    prev->next = aux->next;
    if(aux->next != NULL) {
        aux->next->prev = prev;
    }

    free(aux);
    return first;
}

void printBackwards(l_node * first) {
    if(first == NULL) {
        return;
    }

    l_node * aux = first;
    while(aux->next != NULL) {
        aux = aux->next;
    }

    while(aux !=NULL) {
        printf("%d ", aux->value);
        aux = aux->prev;
    }
    printf("\n");
}
