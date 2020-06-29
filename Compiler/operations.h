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
                                "\t} else {\n"
                                    "\t\tprintf(\"empty list\");\n"
                                "\t}\n"
                                "\tprintf(\"\\n\");\n"
                            "}\n";
static char * removeFromListL = "l_node * removeFromList(char * value, l_node * first) {\n"
                                    "\tint valueToRemove = atoi(value);\n"
                                    "\tif(first == NULL || first->next == NULL){\n"
                                        "\t\t\tfirst = NULL;\n"
                                        "\t\t\tprintf(\"No hay mas elementos en la coleccion\\n\");\n"
                                        "\t\t\treturn NULL;\n"
                                    "\t}\n"
                                    "\tif(first != NULL && (valueToRemove == first->value)) {\n"
                                        "\t\tfirst = first->next;\n"
                                        "\t\tfree(first->prev);\n"
                                        "\t\tfirst->prev = NULL;\n"
                                        "\t\treturn first;\n"
                                    "\t}\n"

                                    "\tl_node * prev = NULL;\n"
                                    "\tl_node * aux = first;\n"

                                    "\twhile(aux != NULL && aux->value != valueToRemove) {\n"
                                        "\t\tprev = aux;\n"
                                        "\t\taux = aux->next;\n"
                                    "\t}\n"

                                    "\tif(aux == NULL) {\n"
                                        "\t\tprintf(\"Elemento no pertenece a la coleccion\\n\");\n"
                                        "\t\treturn NULL;\n"
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
                                "\tif(value == q->last->value) {\n"
                                    "\t\tl_node * aux = q->last;\n"
                                    "\t\tq->last = aux->prev;\n"
                                "\t}\n"

                                "\tq->first = removeFromList(newValue, q->first);\n"
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
                                "\t}\n"
                            "}\n";
static char * peekQueue = "int peekQueue(q_node * q) {\n"
                            "\tif(q == NULL || q->first == NULL) {\n"
                                "\t\treturn -1;\n"
                            "\t}\n"

                            "\treturn q->first->value;\n"
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
