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
			printf("No hay mas elementos en la lista\n");
	}
	if(first != NULL && (valueToRemove == first->value)) {
		first->next->prev = NULL;
		first = first->next;
		return first;
	}
	l_node * prev = NULL;
	l_node * aux = first;
	while(aux != NULL && aux->value != valueToRemove) {
		prev = aux;
		aux = aux->next;
	}
	if(aux == NULL) {
		printf("Elemento no pertenece a la lista\n");
		return NULL;
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

int ValidarCaracter(char * c);
int main() {
printf("%s", "¡Bienvenido al ejemplo de Listas!\n");
printf("%s", "La idea de este ejemplo es mostrar el funcionamiento de las listas\n");
printf("%s", "Creamos una lista que se llama LISTA1 que contendrá enteros\n");
printf("%s", "Ahora vamos a agregarle valores a la lista y para eso escriba cada valor seguido por un salto de linea\nUna vez que no quiera agregar mas valores, escriba: Listo!\n");
l_node * LISTA1 = malloc(sizeof(l_node));
char * CARACTER = "\n";
char * INPUT = "";
char * NUMERO = "";
int IsValid = 0;
while(strcmp(INPUT, "Listo!\n") != 0){
if(strcmp(CARACTER, "\n") == 0){
printf("%s", "Agregar valor: ");
}
CARACTER = _getchar_to_var();
INPUT = _strconcat(INPUT, CARACTER);
IsValid = (ValidarCaracter(CARACTER));
if(IsValid == 1){
NUMERO = _strconcat(NUMERO, CARACTER);
}
if(strcmp(CARACTER, "\n") == 0 && strcmp(NUMERO, "") != 0){
addListNode(NUMERO,LISTA1);
NUMERO = "";
INPUT = "";
}
}
printf("%s", "Lista: ");
printList(LISTA1);
printf("%s", "\n");
INPUT = "";
CARACTER = "";
NUMERO = "";
char * B = "";
char * R = "";
printf("%s", "Ahora vamos a interactuar con la lista\n");
printf("%s", "*  Para borrar un elemento presiona b y el numero que quisiera borrar, por ejemplo b4 eliminaria el numero 4 de la lista\n");
printf("%s", "*  Para imprimir la lista al revez presiona r\n");
printf("%s", "Escriba Listo! para finalizar\n");
while(strcmp(INPUT, "Listo!\n") != 0){
INPUT = "";
CARACTER = _getchar_to_var();
IsValid = (ValidarCaracter(CARACTER));
if(IsValid == 1){
NUMERO = _strconcat(NUMERO, CARACTER);
}
if(strcmp(CARACTER, "b") == 0){
B = "b";
}
if(strcmp(CARACTER, "r") == 0){
R = "r";
}
if(strcmp(CARACTER, "\n") == 0 && strcmp(B, "b") == 0){
removeFromList(NUMERO,LISTA1);
NUMERO = "";
printList(LISTA1);
B = "";
INPUT = "";
}
if(strcmp(R, "r") == 0 && strcmp(CARACTER, "\n") == 0){
printBackwards(LISTA1);
R = "";
INPUT = "";
}
INPUT = _strconcat(INPUT, CARACTER);
}
}
int ValidarCaracter(char * c) {
if(strcmp(c, "1") == 0 || strcmp(c, "2") == 0 || strcmp(c, "3") == 0 || strcmp(c, "4") == 0 || strcmp(c, "5") == 0 || strcmp(c, "6") == 0 || strcmp(c, "7") == 0 || strcmp(c, "8") == 0 || strcmp(c, "9") == 0 || strcmp(c, "0") == 0){
return 1;
}
return 0;
}
