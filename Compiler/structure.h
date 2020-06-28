#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct MapNode {
	char * key;
	char * value;
	struct MapNode * next;
	struct MapNode * prev;
} MapNode;

MapNode * newMapNode(char * key, char * value);

MapNode * addKeyValue(MapNode * map, char * key, char * value);

char * getValue(MapNode * map, char * key);

MapNode * search(MapNode * map, char * key);


#endif