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

static char * emptyMapNode = "MapNode * newEmptyMapNode() {\n"
                                "\tMapNode * mapNode = malloc(sizeof(MapNode*));\n"
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
                                    "\t\tMapNode * current = malloc(sizeof(MapNode*));\n"
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
                                    "\tMapNode * current = malloc(sizeof(MapNode*));\n"
                                    "\tcurrent = map;\n"
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