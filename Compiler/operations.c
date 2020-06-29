#include "operations.h"
#include <string.h>
#include <stdbool.h>

#define MAX_VAR 100

typedef enum operations {SUMA, RESTA, MULT, DIV} operation;

typedef struct var {
    char * name;
    int type;
    int scope;
} var;

var varTable[MAX_VAR];
int varTableIndex = 0;
int currScope = 0;
int vars = 0;

Node * numberOperation(Node * n1, Node * n2, operation op);
extern void yyerror(char * s);

bool areNumeric(Node * n1, Node * n2);
bool isNumeric(Node * n);

Node * addExpressions(Node * n1, Node * n2) {
    Node * ret;

    if (areNumeric(n1,n2)) { 
        ret = numberOperation(n1, n2, SUMA);
    } else if (n1->type == TYPE_STRING && n2->type == TYPE_STRING) {
        if (n1->value != NULL && n2->value != NULL) {
            int len1 = strlen(n1->value);
            char * value = malloc(len1 + strlen(n2->value) - 1);
            strncpy(value, n1->value, len1 - 1);
            strcpy(value + len1 - 1, n2->value + 1);
            ret = newNode(TYPE_STRING, value);
        } else {
            ret = newNode(TYPE_STRING, NULL);
            append(ret, newNode(TYPE_LITERAL, "_strconcat("));
            append(ret, n1);
            append(ret, newNode(TYPE_LITERAL, ", "));
            append(ret, n2);
            append(ret, newNode(TYPE_LITERAL, ")"));
        }
    } else if ((n1->type == TYPE_STRING && (isNumeric(n2) || n2->type == TYPE_BOOL)) || ((n1->type == TYPE_BOOL || isNumeric(n1)) && n2->type == TYPE_STRING)) {
        if (n1->value != NULL && n2->value != NULL) {
            int len1 = strlen(n1->value);
            int len2 = strlen(n2->value);
            char * value = malloc(len1 + len2 + 1);
            if (n1->type == TYPE_STRING) {
                strncpy(value, n1->value, len1 - 1);
                strcpy(value + len1 - 1, n2->value);
                strcpy(value + len1 + len2 - 1, "\"");
            } else {
                strcpy(value, "\"");
                strcpy(value + 1, n1->value);
                strcpy(value + len1 + 1, n2->value + 1);   
            }
            ret = newNode(TYPE_STRING, value);
        } else {
            char * sort = ", 1)";
            if (isNumeric(n1) || n1->type == TYPE_BOOL) {
                Node * aux = n1;
                n1 = n2;
                n2 = aux;
                sort = ", -1)";
            }
            ret = newNode(TYPE_STRING, NULL);
            append(ret, newNode(TYPE_LITERAL, ((n2->type == TYPE_INT ||n2->type == TYPE_BOOL) ? "_strintconcat(" : "_strdoubleconcat(")));
            append(ret, n1);
            append(ret, newNode(TYPE_LITERAL, ", "));
            append(ret, n2);
            append(ret, newNode(TYPE_LITERAL, sort));
        }
    } else {
        yyerror("Suma entre tipos incompatibles.\n");
    }

    return ret;
}

Node * subtractExpressions(Node * n1, Node * n2) {
    Node * ret;

    if (areNumeric(n1,n2)) {
        ret = numberOperation(n1, n2, RESTA);
    } else {
        yyerror("Resta entre tipos incompatibles.\n");
    }

    return ret;
}

Node * multiplyExpressions(Node * n1, Node * n2) {
    Node * ret;

    if (areNumeric(n1,n2)) {
        ret = numberOperation(n1, n2, MULT);
    } else if ((n1->type == TYPE_INT && n2->type == TYPE_STRING) || (n1->type == TYPE_STRING && n2->type == TYPE_INT)) {
        if (n1->type == TYPE_INT) {
            Node * aux = n1;
            n1 = n2;
            n2 = aux;
        }
        if (n1->value != NULL && n2->value != NULL) {
            /* strlen - 2 para excluir las comillas iniciales y finales */
            int len = strlen(n1->value) - 2;
            int loop = atoi(n2->value);
            char * value = malloc(len * loop + 2);
            strcpy(value, "\"");
            for (int i = 0; i < loop; i++) {
                strncpy(value + i * len + 1, n1->value + 1, len);
            }
            strcpy(value + loop * len + 1, "\"");
            ret = newNode(TYPE_STRING, value);
        } else {
            ret = newNode(TYPE_STRING, NULL);
            append(ret, newNode(TYPE_LITERAL, "_strintmult("));
            append(ret, n1);
            append(ret, newNode(TYPE_LITERAL, ", "));
            append(ret, n2);
            append(ret, newNode(TYPE_LITERAL, ")"));
        }
    } else {
        yyerror("Multiplicacion entre tipos incompatibles.\n");
    }

    return ret;
}

Node * divideExpressions(Node * n1, Node * n2) {
    Node * ret;

    if (areNumeric(n1,n2)) {
        ret = numberOperation(n1, n2, DIV);
    } else {
        yyerror("Division entre tipos incompatibles.\n");
    }

    return ret;
}

Node * numberOperation(Node * n1, Node * n2, operation op) {
    Node * ret;

    if (n1->value != NULL && n2->value != NULL) {
        double i1 = n1->type == TYPE_INT ? atoi(n1->value) : atof(n1->value);
        double i2 = n2->type == TYPE_INT ? atoi(n2->value) : atof(n2->value);
        char * value = malloc(20);
        double res;
        switch(op) {
            case SUMA:
                res = i1 + i2;
                break;
            case RESTA:
                res = i1 - i2;
                break;
            case MULT:
                res = i1 * i2;
                break;
            case DIV:
                res = i1 / i2;
                break;
        }

        if(n1->type == TYPE_INT && n2->type == TYPE_INT){
            sprintf(value, "%d", (int)res);
            ret = newNode(TYPE_INT, value);    
        } else{
            sprintf(value,"%lf",res);
            ret = newNode(TYPE_DOUBLE, value);
        }
    } else {
        if(n1->type == TYPE_INT && n2->type == TYPE_INT){
            ret = newNode(TYPE_INT, NULL);
        }
        else{
            ret = newNode(TYPE_DOUBLE, NULL);
        }
        append(ret, n1);
        char * opStr;
        switch(op) {
            case SUMA:
                opStr = " + ";
                break;
            case RESTA:
                opStr = " - ";
                break;
            case MULT:
                opStr = " * ";
                break;
            case DIV:
                opStr = " / ";
                break;
        }
        append(ret, newNode(TYPE_LITERAL, opStr));
        append(ret, n2);
    }
    return ret;
}

int addVar(char * name, int type) {
    if (varTableIndex == MAX_VAR){
        printf("devuelvo -1\n");
        return -1;
    }
    varTable[varTableIndex].name = name;
    varTable[varTableIndex].type = type;
    varTable[varTableIndex].scope = currScope;
    varTableIndex++;
    return 1;
}

int isInCurrentScope(char * varName) {
    for (int i = varTableIndex - 1; i >= 0 && varTable[i].scope == currScope; i--) {
        if (strcmp(varName, varTable[i].name) == 0) {
            return 1;
        }
    }
    return 0;
}

int getType(char * varName) {
    for (int i = varTableIndex - 1; i >= 0; i--) {
        if (strcmp(varName, varTable[i].name) == 0) {
            return varTable[i].type;
        }
    }
    return -1;
}

bool isNumeric(Node * n){
    return (n->type == TYPE_INT || n->type == TYPE_DOUBLE);
}

bool areNumeric(Node * n1, Node * n2){
    return (isNumeric(n1) && isNumeric(n2));
}

void openScope() {
    currScope++;
}

void closeScope() {
    currScope--;
    while(varTableIndex > 0 && varTable[varTableIndex - 1].scope > currScope)
        varTableIndex--;
}