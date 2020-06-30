#include "structure.h"

MapNode * newEmptyMapNode() {
    MapNode * mapNode = malloc(sizeof(MapNode*));
    mapNode->key = NULL;
    mapNode->value = NULL;
    mapNode->next = NULL;
    mapNode->prev = NULL;
    return mapNode;
};

MapNode * addKeyValue(MapNode * map, char * key, char * value) {
    if (map == NULL) {
        map = newEmptyMapNode();
    }
    if (emptyMap(map)) {
        map->key = key;
        map->value = value;
        return map;
    } else {
        MapNode * current = malloc(sizeof(MapNode*));
        current = search(map, key);
        if (current != NULL) {
            current->value = value;
            return map;
        }
        current = map;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newMapNode(key, value);
        current->next->prev = current;
    }
    return map;
};

MapNode * search(MapNode * map, char * key) {
    MapNode * current = malloc(sizeof(MapNode*));
    current = map;
    while(current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
};

int emptyMap(MapNode * map) {
    return map->key == NULL;
};

MapNode * newMapNode(char * key, char * value) {
    MapNode * current = newEmptyMapNode();
    current->key = key;
    current->value = value;
    return current;
};

char * getValue(MapNode * map, char * key) {
    MapNode * present = search(map, key);
    if (present == NULL) return NULL;
    return present->value;
};

MapNode * removeKey(MapNode * map, char * key) {
    MapNode * current = search(map, key);
    if (current == NULL) return map;
    if (current->next == NULL) {
        if (current->prev != NULL) {
            current->prev->next = NULL;
        }
    } else {
        if (current->prev == NULL) {
            current->next->prev = NULL;
            current->key = NULL;
            current->value = NULL;
            return current->next;
        } else {
            current->prev->next = current->next;
            current->next->prev = current->prev;
        }
    }
    current->key = NULL;
    current->value = NULL;
    return map;
};