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


static char * mapStructure = "typedef struct MapNode {\n"
                                "char * key;\n"
                                "char * value;\n"
                                "struct MapNode * next;\n"
                                "struct MapNode * prev;\n"
                                "} MapNode;\n";


static char * addMapNode = "MapNode * addKeyValue(MapNode * map, char * key, char * value) {\n"
                                "MapNode * present = search(map, key);\n"
                                "if (present != NULL) {\n"
                                    "present->value = value;\n"
                                    "return map;\n"
                                "}\n"
                                "if (map == NULL) {\n"
                                    "return newMapNode(key, value);\n"
                                "} else {\n"
                                    "MapNode * current = map;\n"
                                    "while(current->next != NULL) {\n"
                                        "current = current->next;\n"
                                    "}\n"
                                    "current->next = newMapNode(key, value);\n"
                                    "current->next->prev = current;\n"
                                    "return map;\n"
                                "}\n"
                            "}\n";

static char * searchMapNode = "MapNode * search(MapNode * map, char * key) {\n"
                                    "MapNode * current = map;\n"
                                    "while(current != NULL) {\n"
                                        "if (strcmp(current->key, key) == 0) {\n"
                                            "return current;\n"
                                        "}\n"
                                        "current = current->next;\n"
                                    "}\n"
                                    "return NULL;\n"
                                "}\n";

static char * newMapNode = "MapNode * newMapNode(char * key, char * value) {\n"
                                "MapNode * mapNode = malloc(sizeof(MapNode));\n"
                                "mapNode->key = key;\n"
                                "mapNode->value = value;\n"
                                "mapNode->next = NULL;\n"
                                "mapNode->prev = NULL;\n"
                                "return mapNode;\n"
                            "}\n";

static char * getMapNode = "char * getValue(MapNode * map, char * key) {\n"
                                "MapNode * present = search(map, key);\n"
                                "if (present == NULL) return NULL;\n"
                                "return present->value;\n"
                            "}\n";
                                
                            
                                                

Node * addExpressions(Node * n1, Node * n2);
Node * subtractExpressions(Node * n1, Node * n2);
Node * multiplyExpressions(Node * n1, Node * n2);
Node * divideExpressions(Node * n1, Node * n2);

int addVar(char * name, int type);
int getType(char * varName);
void openScope();
void closeScope();
int isInCurrentScope(char * varName);

#endif