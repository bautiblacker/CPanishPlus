#include "list.h"
#include "compiler.h"
#include <stdlib.h>

#define MAX_VAR 10

typedef enum opList {ADD, REMOVE, DELETE, PEEK} opList;
int size = 0;

typedef struct varList {
    char * name;
    int type;
    int scope;
} varList;

static l_node * newListNode(char * value) {
	l_node * node = malloc(sizeof(l_node));
	node->value = value;
    node->next = NULL;
    node->prev = NULL;
	return node;
}

l_node * addListNode(char * value, l_node * first) {
    if(first == NULL) {
        first = newListNode(value);
        return first;
    }
    l_node * aux = first;
    while( aux->next != NULL) {
        aux = aux->next;
    }

    l_node * newNode = newListNode(value);
    aux->next = newNode;
    newNode->next = NULL;
    newNode->prev = aux;
    size++;
    return first;
}

l_node * removeFromList(char * value, l_node * first) {
    if(strcmp(first->value, value) == 0) {
        if(size > 1) {
            first->next->prev = NULL;
        }
        first = first->next;
        return first;
    }

    l_node * prev = NULL;
    l_node * aux = first;
    while(aux != NULL && strcmp(aux->value, value) != 0) {
        prev = aux;
        aux = aux->next;
    }

    if(aux == NULL) {
        return "Elemento no pertenece a la lista\n";
    }

    prev->next = aux->next;
    if(aux->next != NULL) {
        aux->next->prev = prev;
    }

    free(aux);
}

void printfList(l_node * first) {
    if(first != NULL) {
        l_node * aux = first;
        while(aux != NULL) {
            printf("%s ", aux->value);
            aux = aux->next;
        }
    } else {
        printf("empty list");
    }
    printf("\n");
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
        printf("%s ", aux->value);
    }
    printf("\n");
}