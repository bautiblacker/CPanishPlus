#include "list.h"
#include "compiler.h"

#define MAX_VAR 10

typedef enum opList {ADD, REMOVE, DELETE, PEEK} opList;
l_node * first = NULL;
int size = 0;

typedef struct varList {
    char * name;
    int type;
    int scope;
} varList;

varList varTable[MAX_VAR];
int varTableIndex = 0;
int currScope = 0;
int vars = 0;

static l_node * newListNode(l_type type, char * value) {
	l_node * node = malloc(sizeof(l_node));
	node->type = type;
	node->value = value;
    node->next = NULL;
    node->prev = NULL;
	return node;
}

l_node * addListNode(l_type type, char * value) {
    if(first == NULL) {
        first = newListNode(type, value);
        return first;
    }

    l_node * aux = first;
    while( aux->next != NULL) {
        aux = aux->next;
    }

    l_node * newNode = newListNode(type, value);
    aux->next = newNode;
    newNode->next = NULL;
    newNode->prev = aux;
    size++;
    return first;
}

l_node * removeFromList(char * value) {
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