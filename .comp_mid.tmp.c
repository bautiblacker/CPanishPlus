#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char * _strconcat(char * str1, char * str2) {
	char * newstr = malloc(strlen(str1) + strlen(str2) + 1);
	strcpy(newstr, str1);
	strcat(newstr, str2);
	return newstr;
}

char * _strintconcat(char * str, int num, int sort) {
	char * newstr = malloc(strlen(str) + 20);
	if (sort > 0)
		sprintf(newstr, "%s%d", str, num);
	else
		sprintf(newstr, "%d%s", num, str);
	return newstr;
}

char * _strintmult(char * str, int num) {
	int len = strlen(str);
	char * newstr = malloc(len * num + 1);
	newstr[0] = 0;
	for (int i = 0; i < num; i++)
		strcpy(newstr + i * len, str);
	return newstr;
}

char * _getchar_to_var() {
	char * str = malloc(2);
	str[0] = getchar();
	str[1] = 0;
	return str;
}

typedef struct lNode {
int value;
struct lNode * next;
struct lNode * prev;
} l_node;

static l_node * newListNode(int value) {
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
}

l_node * removeFromList(char * value, l_node * first) {
	int valueToRemove = atoi(value);
	if(first == NULL || first->next == NULL){
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

typedef struct qNode {
	l_node * first;
	l_node * last;
	int size;
} q_node;

int queueOffer(char * newValue, q_node * q) {
	int value = atoi(newValue);	l_node * newNode = newListNode(value);
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

int removeFromQueue(char * newValue, q_node * q) {
	int value = atoi(newValue);	l_node * aux;
	if(value == q->last->value) {
		l_node * aux = q->last;
		q->last = aux->prev;
	}
	q->first = removeFromList(newValue, q->first);
	return q->size--;
}

void printQueue(q_node * q) {
	if(q != NULL && q->first != NULL) {
		if(q->size == 1){
			printf("[\t%d\t] <-- primero y ultimo\n", q->last->value);
			return;
		}
		printf("[\t%d\t] <-- ultimo\n", q->last->value);
		l_node * aux = q->last->prev;
		while(aux->prev != NULL) {
			printf("[\t%d\t]\n", aux->value);
			aux = aux->prev;			}
		printf("[\t%d\t] <-- primero \n", q->first->value);
	}
}

int peekQueue(q_node * q) {
	if(q == NULL || q->first == NULL) {
		return -1;
	}
	return q->first->value;
}

typedef struct MapNode {
char * key;
char * value;
struct MapNode * next;
struct MapNode * prev;
} MapNode;
MapNode * newEmptyMapNode() {
	MapNode * mapNode = malloc(sizeof(MapNode*));
	mapNode->key = NULL;
	mapNode->value = NULL;
	mapNode->next = NULL;
	mapNode->prev = NULL;
	return mapNode;
}
int emptyMap(MapNode * map) {
	return map->key == NULL;
}
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
}
MapNode * newMapNode(char * key, char * value) {
	MapNode * current = newEmptyMapNode();
	current->key = key;
	current->value = value;
	return current;
}
char * getValue(MapNode * map, char * key) {
	MapNode * present = search(map, key);
	if (present == NULL) return NULL;
	return present->value;
}
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
}
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
}
int main() {
printf("%s", "¡Bienvenido! Vamos a crear un mapa.\n");
printf("%s", "Inserte las claves, acompañadas de su valor de la siguiente manera: \nLLAVE:VALOR\n");
printf("%s", "Una vez que finalice, escriba: Listo!\n");
char * FRASE = "";
char * LLAVE = "";
char * VALOR = "";
char * CARACTER = "";
MapNode * MAPA = malloc(sizeof(MapNode));
while(strcmp(FRASE, "Listo!") != 0){
FRASE = "";
CARACTER = "";
LLAVE = "";
VALOR = "";
while(strcmp(CARACTER, "\n") != 0){
if(strcmp(CARACTER, ":") != 0 && strcmp(CARACTER, "\n") != 0){
FRASE = _strconcat(FRASE, CARACTER);
}
if(strcmp(CARACTER, ":") == 0){
LLAVE = FRASE;
FRASE = "";
}
CARACTER = _getchar_to_var();
if(strcmp(CARACTER, "\n") == 0){
VALOR = FRASE;
if(strcmp(LLAVE, "") != 0){
addKeyValue(MAPA,LLAVE,VALOR);
}
}
}
}
printf("%s", "\nAhora seleccione una llave ingresada para obtener el valor, una vez que quiera finalizar escriba: Listo!\n");
FRASE = "";
LLAVE = "";
CARACTER = "";
while(strcmp(CARACTER, "\n") != 0){
FRASE = _strconcat(FRASE, CARACTER);
CARACTER = _getchar_to_var();
}
while(strcmp(FRASE, "Listo!") != 0){
char * RESULTADO = (getValue(MAPA,FRASE));
if(RESULTADO != NULL){
printf("%s", _strconcat(_strconcat(_strconcat(_strconcat("El valor para la llave '", FRASE), "' es: "), RESULTADO), "\n"));
}
else {
printf("%s", _strconcat(_strconcat("El mapa no contiene un nodo con la llave: '", FRASE), "'\n"));
}
FRASE = "";
CARACTER = "";
while(strcmp(CARACTER, "\n") != 0){
FRASE = _strconcat(FRASE, CARACTER);
CARACTER = _getchar_to_var();
}
}
LLAVE = "";
CARACTER = "";
printf("%s", "\nAhora vamos a remover algún nodo o nodos, simplemente escriba la llave. Una vez que finalice, escriba: Listo!\n");
while(strcmp(LLAVE, "Listo!") != 0){
if(strcmp(LLAVE, "") != 0){
MAPA = removeKey(MAPA,LLAVE);
printf("%s", _strconcat(_strconcat("Si existe el nodo con llave: '", LLAVE), "', lo hemos borrado del mapa!\n"));
}
LLAVE = "";
CARACTER = "";
while(strcmp(CARACTER, "\n") != 0){
LLAVE = _strconcat(LLAVE, CARACTER);
CARACTER = _getchar_to_var();
}
}
printf("%s", "\nComprobemos que se ha borrado el nodo correctamente!\n");
printf("%s", "Seleccione una llave ingresada para obtener el valor, una vez que quiera finalizar escriba: Listo!\n");
FRASE = "";
LLAVE = "";
CARACTER = "";
while(strcmp(CARACTER, "\n") != 0){
FRASE = _strconcat(FRASE, CARACTER);
CARACTER = _getchar_to_var();
}
while(strcmp(FRASE, "Listo!") != 0){
char * RESULTADO = (getValue(MAPA,FRASE));
if(RESULTADO != NULL){
printf("%s", _strconcat(_strconcat(_strconcat(_strconcat("El valor para la llave '", FRASE), "' es: "), RESULTADO), "\n"));
}
else {
printf("%s", _strconcat(_strconcat("El mapa no contiene un nodo con la llave: '", FRASE), "'\n"));
}
FRASE = "";
CARACTER = "";
while(strcmp(CARACTER, "\n") != 0){
FRASE = _strconcat(FRASE, CARACTER);
CARACTER = _getchar_to_var();
}
}
}
