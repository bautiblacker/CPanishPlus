#include "structure.h"

MapNode * newMapNode(char * key, char * value) {
    MapNode * mapNode = malloc(sizeof(MapNode));
    mapNode->key = key;
    mapNode->value = value;
    mapNode->next = NULL;
    mapNode->prev = NULL;
    return mapNode;
}

MapNode * search(MapNode * map, char * key) {
    MapNode * current = map;
    while(current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}


MapNode * addKeyValue(MapNode * map, char * key, char * value) {
    MapNode * present = search(map, key);
    if (present != NULL) {
        present->value = value;
        return map;
    }

    if (map == NULL) {
        return newMapNode(key, value);
    } else {

        MapNode * current = map;
        while(current->next != NULL) {
            current = current->next;
        }

        current->next = newMapNode(key, value);
        current->next->prev = current;
        return map;
    }
}

char * getValue(MapNode * map, char * key) {
    MapNode * present = search(map, key);

    if (present == NULL) return NULL;   

    return present->value;
}