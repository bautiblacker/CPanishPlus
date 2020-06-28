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
                                "char * value;\n"
                                "struct lNode * next;\n"
                                "struct lNode * prev;\n"
                            "} l_node;\n";
static char * newListNodeL = "static l_node * newListNode(char * value) {\n"
                                "l_node * node = malloc(sizeof(l_node));\n"
                                "node->value = value;\n"
                                "node->next = NULL;\n"
                                "node->prev = NULL;\n"
                                "return node;\n"
                            "}\n";

static char * addListNodeL = "l_node * addListNode(char * value, l_node * first) {\n"
                                "if(first == NULL) {\n"
                                "\tfirst = newListNode(value);\n"
                                "\treturn first;\n"
                                "}\n"

                                "l_node * aux = first;\n"
                                "while(aux->next != NULL) {\n"
                                "\taux = aux->next;\n"
                                "}\n"

                                "l_node * newNode = newListNode(value);\n"
                                "aux->next = newNode;\n"
                                "newNode->next = NULL;\n"
                                "newNode->prev = aux;\n"
                                "return first;\n"
                            "}\n";

Node * addExpressions(Node * n1, Node * n2);
Node * subtractExpressions(Node * n1, Node * n2);
Node * multiplyExpressions(Node * n1, Node * n2);
Node * divideExpressions(Node * n1, Node * n2);
Node * moduleExpressions(Node * n1, Node * n2);

int addVar(char * name, int type);
int getType(char * varName);
void openScope();
void closeScope();
int isInCurrentScope(char * varName);

#endif