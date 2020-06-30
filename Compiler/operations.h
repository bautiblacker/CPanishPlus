#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "node.h"

static char * strCatFunction = "char * _strconcat(char * str1, char * str2) {\n"
			            	"\tchar * newstr = malloc(strlen(str1) + strlen(str2) + 1);\n"
                        	    	"\tstrcpy(newstr, str1);\n"
                               		"\tstrcat(newstr, str2);\n"
                               		"\treturn newstr;\n"
				"}\n";

static char * strIntCatFunction = "char * _strintconcat(char * str, int num, int sort) {\n"
                                "\tchar * newstr = malloc(strlen(str) + 20);\n"
                                "\tif (sort > 0)\n"
                                "\t\tsprintf(newstr, \"%s%d\", str, num);\n"
                                "\telse\n"
                                "\t\tsprintf(newstr, \"%d%s\", num, str);\n"
                                "\treturn newstr;\n"
                            "}\n";

static char * strDoubleCatFunction = "char * _strdoubleconcat(char * str, double num, int sort) {\n"
                                "\tchar * newstr = malloc(strlen(str) + 20);\n"
                                "\tif (sort > 0)\n"
                                "\t\tsprintf(newstr, \"%s%f\", str, num);\n"
                                "\telse\n"
                                "\t\tsprintf(newstr, \"%f%s\", num, str);\n"
                                "\treturn newstr;\n"
                            "}\n";

static char * strIntMultFunction = "char * _strintmult(char * str, int num) {\n"
                                    "\tint len = strlen(str);\n"
                                    "\tchar * newstr = malloc(len * num + 1);\n"
                                    "\tnewstr[0] = 0;\n"
                                    "\tfor (int i = 0; i < num; i++)\n"
                                    "\t\tstrcpy(newstr + i * len, str);\n"
                                    "\treturn newstr;\n"
                                    "}\n";

static char * getCharToVar = "char * _getchar_to_var() {\n"
                                "\tchar * str = malloc(2);\n"
                                "\tstr[0] = getchar();\n"
                                "\tstr[1] = 0;\n"
                                "\treturn str;\n"
                                "}\n";
static char * listStructure = "typedef struct lNode {\n"
                                "int value;\n"
                                "struct lNode * next;\n"
                                "struct lNode * prev;\n"
                            "} l_node;\n";
static char * newListNodeL = "static l_node * newListNode(int value) {\n"
                                "l_node * node = (l_node *)malloc(sizeof(l_node));\n"
                                "node->value = value;\n"
                                "node->next = NULL;\n"
                                "node->prev = NULL;\n"
                                "return node;\n"
                            "}\n";

static char * addListNodeL = "l_node * addListNode(char * value, l_node * first) {\n"
                                "\t int newValue = atoi(value);\n"
                                "\tl_node * newNode = newListNode(newValue);\n"
                                "\tif(first == NULL) {\n"
                                "\t\tfirst = newNode;\n"
                                "\t\treturn first;\n"
                                "\t}\n"

                                "\tl_node * aux = first;\n"
                                "\twhile(aux->next != NULL) {\n"
                                "\t\taux = aux->next;\n"
                                "\t}\n"

                                "\taux->next = newNode;\n"
                                "\tnewNode->next = NULL;\n"
                                "\tnewNode->prev = aux;\n"
                                "\treturn first;\n"
                            "}\n";
static char * printListL = "void printList(l_node * first) {\n"
                                "\tif(first != NULL) {\n"
                                    "\t\tl_node * aux = first;\n"
                                    "\t\twhile(aux != NULL) {\n"
                                    "\t\t\tprintf(\"%d \", aux->value);\n"
                                    "\t\t\taux = aux->next;\n"
                                    "\t\t}\n"
                                "\t}\n"
                                "\tprintf(\"\\n\");\n"
                            "}\n";
static char * removeFromListL = "l_node * removeFromList(char * value, l_node * first) {\n"
                                    "\tint valueToRemove = atoi(value);\n"
                                    "\tif(first == NULL){\n"
                                        "\t\t\tprintf(\"No hay mas elementos en la coleccion\\n\");\n"
                                        "\t\t\treturn NULL;\n"
                                    "\t}\n"
                                    "\tif(first->next == NULL && (valueToRemove == first->value)){\n"
                                        "\t\t\tfree(first);\n"
                                        "\t\t\tprintf(\"Ultimo elemento de la lista borrado\\n\");\n"
                                        "\t\t\ffirst = NULL;\n"
                                        "\t\t\treturn first;\n"
                                    "\t}\n"
                                    "\tif((valueToRemove == first->value)) {\n"
                                        "\t\tl_node * aux1 = first->next;\n"
                                        "\t\tfree(first);\n"
                                        "\t\taux1->prev = NULL;\n"
                                        "\t\treturn aux1;\n"
                                    "\t}\n"

                                    "\tl_node * prev = NULL;\n"
                                    "\tl_node * aux = first;\n"

                                    "\twhile(aux != NULL && aux->value != valueToRemove) {\n"
                                        "\t\tprev = aux;\n"
                                        "\t\taux = aux->next;\n"
                                    "\t}\n"

                                    "\tif(aux == NULL) {\n"
                                        "\t\tprintf(\"Elemento no pertenece a la coleccion\\n\");\n"
                                        "\t\treturn first;\n"
                                    "\t}\n"

                                    "\tprev->next = aux->next;\n"
                                    "\tif(aux->next != NULL) {\n"
                                        "\t\taux->next->prev = prev;\n"
                                    "\t}\n"

                                    "\tfree(aux);\n"
                                    "\treturn first;\n"
                                "}\n";
static char * printBackwards = "void printBackwards(l_node * first) {\n"
                                    "\tif(first == NULL) {\n"
                                        "\t\treturn;\n"
                                    "\t}\n"

                                    "\tl_node * aux = first;\n"
                                    "\twhile(aux->next != NULL) {\n"
                                        "\t\taux = aux->next;\n"
                                    "\t}\n"

                                    "\twhile(aux !=NULL) {\n"
                                        "\t\tprintf(\"%d \", aux->value);\n"
                                        "\t\taux = aux->prev;\n"
                                    "\t}\n"
                                    "\tprintf(\"\\n\");\n"
                                "}\n";
static char * queueStruct = "typedef struct qNode {\n"
                                "\tl_node * first;\n"
                                "\tl_node * last;\n"
                                "\tint size;\n"
                            "} q_node;\n";
static char * queueOffer = "int queueOffer(char * newValue, q_node * q) {\n"
                                "\tint value = atoi(newValue);"
                                "\tl_node * newNode = newListNode(value);\n"
                                "\tif(q == NULL) {\n"
                                    "\t\tq = (q_node *)malloc(sizeof(q_node));\n"
                                    "\t\tif(q == NULL) {\n"
                                        "\t\t\treturn -1;\n"
                                    "\t\t}\n"
                                    "\t\tq->first = NULL;\n"
                                    "\t\tq->last = NULL;\n"
                                    "\t\tq->size = 0;\n"
                                "\t}\n"

                                "\tif(q->size == 0) {\n"
                                    "\t\tq->first = newNode;\n"
                                    "\t\tq->last = newNode;\n"
                                "\t} else {\n"
                                    "\t\tl_node * aux = q->last;\n"
                                    "\t\tq->last = newNode;\n"
                                    "\t\tq->last->prev = aux;\n"
                                    "\t\tq->last->next = NULL;\n"
                                    "\t\taux->next = q->last;\n"
                                "\t}\n"

                                "\treturn q->size++;\n"
                            "\t}\n";
static char * removeFromQueue = "int removeFromQueue(char * newValue, q_node * q) {\n"
                                "\tint value = atoi(newValue);"
                                "\tl_node * aux;\n"

                                "\tq->first = removeFromList(newValue, q->first);\n"
                                "\taux = q->first;\n"
                                "\twhile(aux != NULL && aux->next != NULL) {\n"
                                "\t\taux = aux->next;\n"
                                "\t}\n"
                                "\tq->last = aux;\n"
                                "\treturn q->size--;\n"
                            "}\n";
static char * printQueue = "void printQueue(q_node * q) {\n"
                                "\tif(q != NULL && q->first != NULL) {\n"
                                    "\t\tif(q->size == 1){\n"
                                    "\t\t\tprintf(\"[\\t%d\\t] <-- primero y ultimo\\n\", q->last->value);\n"
                                    "\t\t\treturn;\n"
                                    "\t\t}\n"
                                    "\t\tprintf(\"[\\t%d\\t] <-- ultimo\\n\", q->last->value);\n"
                                    "\t\tl_node * aux = q->last->prev;\n"
                                    "\t\twhile(aux->prev != NULL) {\n"
                                        "\t\t\tprintf(\"[\\t%d\\t]\\n\", aux->value);\n"
                                        "\t\t\taux = aux->prev;\t"
                                    "\t\t}\n"
                                    "\t\tprintf(\"[\\t%d\\t] <-- primero \\n\", q->first->value);\n"
                                "\t} else {\n"
                                "\t\tprintf(\"[\\tCola vacia\\t]\\n\");\n"
                                "\t}\n"
                            "}\n";
static char * peekQueue = "int peekQueue(q_node * q) {\n"
                            "\tif(q == NULL || q->first == NULL) {\n"
                                "\t\treturn -1;\n"
                            "\t}\n"

                            "\treturn q->first->value;\n"
                        "}\n";

static char * mapStructure = "typedef struct MapNode {\n"
                                "char * key;\n"
                                "char * value;\n"
                                "struct MapNode * next;\n"
                                "struct MapNode * prev;\n"
                                "} MapNode;\n";

static char * emptyMapNode = "MapNode * newEmptyMapNode() {\n"
                                "\tMapNode * mapNode = malloc(sizeof(MapNode));\n"
                                "\tmapNode->key = NULL;\n"
                                "\tmapNode->value = NULL;\n"
                                "\tmapNode->next = NULL;\n"
                                "\tmapNode->prev = NULL;\n"
                                "\treturn mapNode;\n"
                            "}\n";


static char * addMapNode = "MapNode * addKeyValue(MapNode * map, char * key, char * value) {\n"
                                "\tif (map == NULL) {\n"
                                    "\t\tmap = newEmptyMapNode();\n"
                                "\t}\n"
                                "\tif (emptyMap(map)) {\n"
                                    "\t\tmap->key = key;\n"
                                   "\t\tmap->value = value;\n"
                                    "\t\treturn map;\n"
                                "\t} else {\n"
                                    "\t\tMapNode * current = malloc(sizeof(MapNode));\n"
					"\t\tcurrent = search(map, key);\n"
	                                    "\t\tif (current != NULL) {\n"
                                        "\t\t\tcurrent->value = value;\n"
                                        "\t\t\treturn map;\n"
                                    "\t\t}\n"
                                    "\t\tcurrent = map;\n"
                                    "\t\twhile (current->next != NULL) {\n"
					"\t\t\tcurrent = current->next;\n"
                                    "\t\t}\n"
                                    "\t\tcurrent->next = newMapNode(key, value);\n"
				"\t\tcurrent->next->prev = current;\n"
                                "\t}\n"
                                "\treturn map;\n"
                            "}\n";

static char * searchMapNode = "MapNode * search(MapNode * map, char * key) {\n"
						"\tMapNode * current = map;\n"
						"\twhile(current != NULL) {\n"
							"\t\tif (strcmp(current->key, key) == 0) {\n"
								"\t\t\treturn current;\n"
							"\t\t}\n"
							"\t\tcurrent = current->next;\n"
						"\t}\n"
						"\treturn NULL;\n"
		            		"}\n";

static char * emptyMap = "int emptyMap(MapNode * map) {\n"
                            "\treturn map->key == NULL;\n"
                        "}\n";

static char * newMapNode = "MapNode * newMapNode(char * key, char * value) {\n"
                                "\tMapNode * current = newEmptyMapNode();\n"
                                "\tcurrent->key = key;\n"
                                "\tcurrent->value = value;\n"
                                "\treturn current;\n"
                            "}\n";

static char * getMapNode = "char * getValue(MapNode * map, char * key) {\n"
                                "\tMapNode * present = search(map, key);\n"
                                "\tif (present == NULL) return NULL;\n"
                                "\treturn present->value;\n"
                            "}\n";

static char * removeMapNode = "MapNode * removeKey(MapNode * map, char * key) {\n"
                                    "\tMapNode * current = search(map, key);\n"
                                    "\tif (current == NULL) return map;\n"
                                    "\tif (current->next == NULL) {\n"
                                        "\t\tif (current->prev != NULL) {\n"
                                            "\t\t\tcurrent->prev->next = NULL;\n"
                                        "\t\t}\n"
                                    "\t} else {\n"
                                        "\t\tif (current->prev == NULL) {\n"
                                            "\t\t\tcurrent->next->prev = NULL;\n"
                                            "\t\t\tcurrent->key = NULL;\n"
                                            "\t\t\tcurrent->value = NULL;\n"
                                            "\t\t\treturn current->next;\n"
                                        "\t\t} else {\n"
                                            "\t\t\tcurrent->prev->next = current->next;\n"
                                            "\t\t\tcurrent->next->prev = current->prev;\n"
                                        "\t\t}\n"
                                    "\t}\n"
                                    "\tcurrent->key = NULL;\n"
                                    "\tcurrent->value = NULL;\n"
                                    "\treturn map;\n"
                                "}\n";

static char * stackNode = "typedef struct sNode {\n"
                                "char * value;\n"
                                "struct sNode * next;\n"
                                "struct sNode * prev;\n"
                            "} s_node;\n";

static char * stackMotherNode = "typedef struct sMNode {\n"
                                    "\ts_node * first;\n"
                                    "\tint size;\n"
                                "} sm_node;\n";

static char * newStackNode = "static s_node * newStackNode(char * value) {\n"
                                "s_node * node = (s_node *)malloc(sizeof(s_node));\n"
                                "node->value = value;\n"
                                "node->next = NULL;\n"
                                "node->prev = NULL;\n"
                                "return node;\n"
                            "}\n";

static char * pushStack = "void push(char * value, sm_node * stack) {\n"
                                "\ts_node * newNode = newStackNode(value);\n"
                                "\tif(stack->first == NULL) {\n"
                                    "\t\tstack->first = newNode;\n"
                                    "\t\treturn;\n"
                                "\t}\n"
                                "\tnewNode->next = stack->first;\n"
                                "\tstack->first->prev = newNode;\n"
                                "\tstack->first = newNode;\n"
                            "}\n";

static char * printStack = "void printStack(sm_node * stack) {\n"
                                "\tif (stack->first == NULL) printf(\"Stack vacio\\n\");\n"
                                "\ts_node * current = stack->first;\n"
                                "\twhile (current != NULL) {\n"
                                    "\t\tprintf(\"[\t\t%s\t\t]\\n\", current->value);\n"
                                    "\t\tcurrent = current->next;\n"
                                "\t}\n"
                            "}\n";

static char * peekStack = "char * peekStack(sm_node * stack) {\n"
                            "\tif(stack != NULL && stack->first != NULL) {\n"
                                "\t\treturn stack->first->value;\n"
                            "\t}\n"

                            "\treturn NULL;\n"
                        "}";
static char * popStack = "char * popStack(sm_node * stack) {\n"
                            "\tif(stack == NULL || stack->first == NULL) {\n"
                                "\treturn NULL;\n"
                            "\t}\n"

                            "\tchar * ret = stack->first->value;\n"
                            "\tstack->first = stack->first->next;\n"

                            "return ret;\n"
                        "}\n";


Node * addExpressions(Node * n1, Node * n2);
Node * subtractExpressions(Node * n1, Node * n2);
Node * multiplyExpressions(Node * n1, Node * n2);
Node * divideExpressions(Node * n1, Node * n2);
Node * moduleExpressions(Node * n1, Node * n2);
Node * exponentExpressions(Node * n1, Node * n2);

int addVar(char * name, int type);
int getType(char * varName);
void openScope();
void closeScope();
int isInCurrentScope(char * varName);

#endif
