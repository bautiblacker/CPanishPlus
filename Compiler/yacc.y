%{
	#include <stdio.h>
    #include <stdbool.h>
    #include "node.h"
    #include "operations.h"
    #include "compiler.h"

    extern int lineCount;

    int yylex();
	void yyerror(char * s);
    void printHeaders();
%}

%union {
	struct Node * node;
	char * value;
}

/* Tokens */
%token principal recibe coma es t_cadena t_entero t_lista_enteros t_stack t_queue t_doble t_booleano asignar reasignar punto par_abrir par_cerrar suma resta mult divis mod mostrar
mostrar_r si fin y o protot igual mayor mayor_igual menor menor_igual distinto repetir_mientras incrementar decrementar es_funcion devuelve
devolver evaluada_en dos_puntos prototipo_funciones variables_globales leer_en agregar borrar a de peek obtener t_mapa
%token<value> cadena entero lista cola stack doble booleano var_id presente sino
%type<node> PROGRAMA PRINCIPAL LISTA_PARAMETROS PARAMETROS PARAMETRO LINEA LINEAS INSTRUCCION DECLARACION ASIGNACION REASIGNACION
TIPO TIPO_F EXPRESION OPERACION FUNCION_BUILTIN MOSTRAR BLOQUE CONDICIONAL COMPARADOR EVALUACION REPETIR INCREMENTACION DECREMENTACION
FUNCION FUNCIONES FIN DEVOLVER NUEVO_ALCANCE ARGUMENTOS EVALUAR_FUNC PROTOTIPO PROTOTIPOS LISTA_VAR LISTA_PROTO VARIABLE VARIABLES LEER_CHAR AGREGAR TIPO_STRUCT
BORRAR MOSTRAR_R OJEADA OBTENER SINO
%start PROGRAMA

/* Precedencia */
%left suma resta
%left mult divis
%left expo
%nonassoc igual distinto mayor_igual mayor menor menor_igual
%left y
%left o

/* Producciones */
%%

PROGRAMA        : LISTA_VAR LISTA_PROTO NUEVO_ALCANCE PRINCIPAL FUNCIONES       {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                                    append($$, $1);
                                                                                    append($$, $2);
                                                                                    append($$, $4);
                                                                                    append($$, $5);
                                                                                    printHeaders();
                                                                                    printInorder($$); }
                ;

LISTA_VAR       : variables_globales VARIABLES                              {   $$ = $2; }
                |                                                           {   $$ = NULL; }
                ;

VARIABLES       : VARIABLE punto VARIABLES                                          {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                                        append($$, $1);
                                                                                        append($$, newNode(TYPE_LITERAL, ";\n"));
                                                                                        append($$, $3); }
                |                                                                   {   $$ = NULL; }
                ;

LISTA_PROTO     : prototipo_funciones PROTOTIPOS                {   $$ = $2; }
                |                                               {   $$ = NULL; }
                ;

PROTOTIPOS      : NUEVO_ALCANCE PROTOTIPO punto PROTOTIPOS      {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                    append($$, $2);
                                                                    append($$, newNode(TYPE_LITERAL, ");\n"));
                                                                    append($$, $4); }
                |                                               {   $$ = NULL; }
                ;

PROTOTIPO       : var_id es_funcion devuelve TIPO_F LISTA_PARAMETROS FIN_PARAMS         {   if (addVar($1, $4->type) == -1)
                                                                                            yyerror("Se superó el límite de variables\n");
                                                                                        $$ = newNode(TYPE_EMPTY, NULL);
                                                                                        append($$, $4);
                                                                                        append($$, newNode(TYPE_LITERAL, $1));
                                                                                        append($$, newNode(TYPE_LITERAL, "("));
                                                                                        append($$, $5); }

FIN_PARAMS      :                                                                       {   closeScope(); }
                ;

VARIABLE        : REASIGNACION                      {   $$ = $1; }
                | DECLARACION                       {   $$ = $1; }
                ;

PRINCIPAL       : principal es_funcion devuelve TIPO_F dos_puntos LINEAS FIN        {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                                        append($$, $4);
                                                                                        append($$, newNode(TYPE_LITERAL, "main() {\n"));
                                                                                        append($$, $6);
                                                                                        append($$, newNode(TYPE_LITERAL, "}\n")); }
                ;

FUNCION         : var_id es_funcion devuelve TIPO_F LISTA_PARAMETROS dos_puntos LINEAS FIN      {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                                                    append($$, $4);
                                                                                                    append($$, newNode(TYPE_LITERAL, $1));
                                                                                                    append($$, newNode(TYPE_LITERAL, "("));
                                                                                                    append($$, $5);
                                                                                                    append($$, newNode(TYPE_LITERAL, ") {\n"));
                                                                                                    append($$, $7);
                                                                                                    append($$, newNode(TYPE_LITERAL, "}\n")); }
                ;

FUNCIONES       : NUEVO_ALCANCE FUNCION FUNCIONES               {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                    append($$, $2);
                                                                    append($$, $3); }
                |                                               {   $$ = NULL; }
                ;

LISTA_PARAMETROS : punto recibe dos_puntos PARAMETROS           {   $$ = $4; }
                 |                                              {   $$ = NULL; }
                 ;

PARAMETROS      : PARAMETRO coma PARAMETROS                     {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                    append($$, $1);
                                                                    append($$, newNode(TYPE_LITERAL, ", "));
                                                                    append($$, $3); }
                | PARAMETRO                                     {   $$ = $1; }
                ;

PARAMETRO       : TIPO_F var_id                                 {   if (addVar($2, $1->type) == -1)
                                                                        yyerror("Se superó el límite de variables\n");
                                                                    $$ = newNode(TYPE_EMPTY, NULL);
                                                                    append($$, $1);
                                                                    append($$, newNode(TYPE_LITERAL, $2)); }
                ;

FIN             : fin punto                                     {   closeScope(); }
                ;

LINEAS          : LINEA LINEAS                      {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $1);
                                                        append($$, $2); }
                | NUEVO_ALCANCE BLOQUE LINEAS       {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $2);
                                                        append($$, $3); }
                |                                   {   $$ = NULL; }
                ;

NUEVO_ALCANCE       :                               {   openScope(); }
                ;

LINEA           : INSTRUCCION punto                 {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $1);
                                                        append($$, newNode(TYPE_LITERAL, ";\n")); }
                ;

BLOQUE          : CONDICIONAL                       {   $$ = $1; }
                | REPETIR                           {   $$ = $1; }
                | SINO                              {   $$ = $1; }
                ;

INSTRUCCION     : REASIGNACION                      {   $$ = $1; }
                | DECLARACION                       {   $$ = $1; }
                | FUNCION_BUILTIN                   {   $$ = $1; }
                | INCREMENTACION                    {   $$ = $1; }
                | DECREMENTACION                    {   $$ = $1; }
                | DEVOLVER                          {   $$ = $1; }
                | EXPRESION                         {   $$ = $1; }
                | AGREGAR                           {   $$ = $1; }
                | BORRAR                            {   $$ = $1; }
                | OJEADA                            {   $$ = $1; }
                | OBTENER                           {   $$ = $1; }
                ;


DEVOLVER        : devolver EXPRESION                {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, newNode(TYPE_LITERAL, "return "));
                                                        append($$, $2); }
                ;

INCREMENTACION  : incrementar var_id                {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, newNode(TYPE_LITERAL, $2));
                                                        append($$, newNode(TYPE_LITERAL, "++")); }
                ;

DECREMENTACION  : decrementar var_id                {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, newNode(TYPE_LITERAL, $2));
                                                        append($$, newNode(TYPE_LITERAL, "--")); }
                ;

DECLARACION     : var_id TIPO ASIGNACION            {   if (isInCurrentScope($1) == 1)
                                                            yyerror("Variable ya declarada previamente\n");
                                                        if (addVar($1, $2->type) == -1)
                                                            yyerror("Se superó el límite de variables\n");
                                                        if ($3 != NULL && $2->type != $3->type) {
                                                            if($2->type != $3->type) yyerror("dif types tambien\n");
                                                            yyerror("Asignación entre tipos incompatibles\n");
                                                        }
                                                        $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $2);
                                                        append($$, newNode(TYPE_LITERAL, $1));
                                                        append($$, $3); }
                | var_id TIPO_STRUCT                {   if (isInCurrentScope($1) == 1)
                                                            yyerror("Variable ya declarada previamente\n");
                                                        if (addVar($1, $2->type) == -1)
                                                            yyerror("Se superó el límite de variables\n");
                                                        $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $2);
                                                        append($$, newNode(TYPE_LITERAL, $1));
                                                        append($$, newNode(TYPE_LITERAL, " = "));
                                                        append($$, newNode(TYPE_LITERAL, "malloc(sizeof("));
                                                        if($2->type == TYPE_LIST) {
                                                            append($$, newNode(TYPE_LITERAL, "l_node))"));
                                                        } else if($2->type == TYPE_QUEUE) {
                                                            append($$, newNode(TYPE_LITERAL, "q_node))"));
                                                        } else if($2->type == TYPE_MAP) {
                                                            append($$, newNode(TYPE_LITERAL, "MapNode))"));
                                                        }
                                                    };
                ;

ASIGNACION      :                                   {   $$ = NULL; }
                | asignar EXPRESION                 {   $$ = newNode($2->type, NULL);
                                                        append($$, newNode(TYPE_LITERAL, " = "));
                                                        append($$, $2); }
                ;
AGREGAR         : agregar EXPRESION a var_id       {   int type = getType($4);
                                                            if (type == -1)
                                                                yyerror("Variable no declarada previamente\n");
                                                            if (type != TYPE_LIST && type != TYPE_QUEUE)
                                                                yyerror("Asignación entre tipos incompatibles\n");

                                                            $$ = newNode(TYPE_EMPTY, NULL);
                                                            if(type == TYPE_LIST)
                                                                append($$, newNode(TYPE_LITERAL, "addListNode("));
                                                            else if(type == TYPE_QUEUE)
                                                                append($$, newNode(TYPE_LITERAL, "queueOffer("));
                                                            append($$, $2);
                                                            append($$, newNode(TYPE_LITERAL, ","));
                                                            append($$, newNode(TYPE_LITERAL, $4));
                                                            append($$, newNode(TYPE_LITERAL, ")")); }
                | agregar EXPRESION EXPRESION a var_id  {   int type = getType($5);
                                                            if (type == -1)
                                                                yyerror("Variable no declarada previamente\n");
                                                            if (type != TYPE_MAP)
                                                                yyerror("Asignación entre tipos incompatibles\n");

                                                            $$ = newNode(TYPE_EMPTY, NULL); 
                                                            append($$, newNode(TYPE_LITERAL, "addKeyValue(")); 
                                                            append($$, newNode(TYPE_LITERAL, $5)); 
                                                            append($$, newNode(TYPE_LITERAL, ","));
                                                            append($$, $2);
                                                            append($$, newNode(TYPE_LITERAL, ","));
                                                            append($$, $3);
                                                            append($$, newNode(TYPE_LITERAL, ")")); }
                ;
BORRAR          :  borrar EXPRESION de var_id           {   int type = getType($4);
                                                            if(type == -1)
                                                                yyerror("Variable no declarada previamente\n");
                                                            if (type != TYPE_LIST && type != TYPE_QUEUE && type != TYPE_MAP)
                                                                yyerror("Asignación entre tipos incompatibles\n");

                                                            $$ = newNode(TYPE_EMPTY, NULL);

                                                            if(type == TYPE_MAP) {
                                                                append($$, newNode(TYPE_LITERAL, $4)); 
                                                                append($$, newNode(TYPE_LITERAL, " = "));
                                                                append($$, newNode(TYPE_LITERAL, "removeKey(")); 
                                                                append($$, newNode(TYPE_LITERAL, $4)); 
                                                                append($$, newNode(TYPE_LITERAL, ","));
                                                                append($$, $2);
                                                                append($$, newNode(TYPE_LITERAL, ")"));
                                                            } else {
                                                                if(type == TYPE_QUEUE) {
                                                                    append($$, newNode(TYPE_LITERAL, "removeFromQueue("));
                                                                }
                                                                if(type == TYPE_LIST) {
                                                                    append($$, newNode(TYPE_LITERAL, "removeFromList("));
                                                                }

                                                                append($$, $2);
                                                                append($$, newNode(TYPE_LITERAL, ","));
                                                                append($$, newNode(TYPE_LITERAL, $4));
                                                                append($$, newNode(TYPE_LITERAL, ")")); }
                                                        };
OJEADA              : peek a var_id               {int type = getType($3);
                                                        if(type == -1) {
                                                            yyerror("Variable no declarada previamente\n");
                                                        }
                                                        if (type != TYPE_QUEUE) {
                                                            yyerror("Operacion sobre tipo incompatible\n");
                                                        }

                                                        $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, newNode(TYPE_LITERAL, "peekQueue("));
                                                        append($$, newNode(TYPE_LITERAL, $3));
                                                        append($$, newNode(TYPE_LITERAL, ")"));
                                                    }
                ;
REASIGNACION    : var_id reasignar EXPRESION        {   int type = getType($1);
                                                        if (type == -1)
                                                            yyerror("Variable o funcion no declarada previamente\n");
                                                        if (type != $3->type)
                                                            yyerror("Asignación entre tipos incompatibles\n");
                                                        $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, newNode(TYPE_LITERAL, $1));
                                                        append($$, newNode(TYPE_LITERAL, " = "));
                                                        append($$, $3); }
                ;

TIPO            : es t_cadena                       {   $$ = newNode(TYPE_STRING, "char * "); }
                | es t_entero                       {   $$ = newNode(TYPE_INT, "int "); }
                | es t_doble                        {   $$ = newNode(TYPE_DOUBLE, "double "); }
                | es t_booleano                     {   $$ = newNode(TYPE_BOOL, "bool "); }
                ;
TIPO_STRUCT     : es t_lista_enteros                {   $$ = newNode(TYPE_LIST, "l_node * "); };
                | es t_queue                        {   $$ = newNode(TYPE_QUEUE, "q_node * ");};

TIPO_STRUCT     : es t_mapa                         {   $$ = newNode(TYPE_MAP, "MapNode * "); }

TIPO_F          : t_cadena                          {   $$ = newNode(TYPE_STRING, "char * "); }
                | t_entero                          {   $$ = newNode(TYPE_INT, "int "); }
                | t_doble                           {   $$ = newNode(TYPE_DOUBLE, "double "); }
                | t_booleano                        {   $$ = newNode(TYPE_BOOL, "bool "); }
                | t_mapa                            {   $$ = newNode(TYPE_MAP, "MapNode * "); }
                ;

EXPRESION       : cadena                            {   $$ = newNode(TYPE_STRING, $1); }
                | entero                            {   $$ = newNode(TYPE_INT, $1); }
                | doble                             {   $$ = newNode(TYPE_DOUBLE, $1); }
                | booleano                          {   $$ = newNode(TYPE_BOOL, $1); }
                | var_id                            {   int type = getType($1);
                                                        if (type == -1)
                                                            yyerror("Variable o funcion no declarada previamente\n");
                                                        $$ = newNode(type, NULL);
                                                        append($$, newNode(TYPE_LITERAL, $1)); }
                | par_abrir EXPRESION par_cerrar    {   if ($2->value != NULL) {
                                                            $$ = $2;
                                                        } else  {
                                                            $$ = newNode($2->type, NULL);
                                                            append($$, newNode(TYPE_LITERAL, "("));
                                                            append($$, $2);
                                                            append($$, newNode(TYPE_LITERAL, ")"));
                                                        } }
                | par_abrir OJEADA par_cerrar      {   if ($2->value != NULL) {
                                                            $$ = $2;
                                                        } else  {
                                                            $$ = newNode(TYPE_INT, NULL);
                                                            append($$, newNode(TYPE_LITERAL, "("));
                                                            append($$, $2);
                                                            append($$, newNode(TYPE_LITERAL, ")"));
                                                        } }
                | OPERACION                         {   $$ = $1; }
                | EVALUAR_FUNC                      {   $$ = $1; }
                | AGREGAR                           {   $$ = $1; }
                | par_abrir OBTENER par_cerrar      {   if ($2->value != NULL) {
                                                            $$ = $2;
                                                        } else  {
                                                            $$ = newNode(TYPE_STRING, NULL); 
                                                            append($$, newNode(TYPE_LITERAL, "("));
                                                            append($$, $2);
                                                            append($$, newNode(TYPE_LITERAL, ")")); 
                                                        } }
                | EXPRESION presente                {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $1);
                                                        append($$, newNode(TYPE_LITERAL, " != NULL"));  }
                ;

OPERACION       : EXPRESION suma EXPRESION          {   $$ = addExpressions($1, $3); }
                | EXPRESION resta EXPRESION         {   $$ = subtractExpressions($1, $3); }
                | EXPRESION mult EXPRESION          {   $$ = multiplyExpressions($1, $3); }
                | EXPRESION divis EXPRESION         {   $$ = divideExpressions($1, $3); }
                | EXPRESION mod EXPRESION           {   $$ = moduleExpressions($1, $3); }
				| EXPRESION expo EXPRESION         {   $$ = exponentExpressions($1, $3); }
                ;

EVALUAR_FUNC    : var_id evaluada_en ARGUMENTOS     {   int type = getType($1);
                                                        if (type == -1)
                                                            yyerror("Funcion no declarada previamente\n");
                                                        $$ = newNode(type, NULL);
                                                        append($$, newNode(TYPE_LITERAL, $1));
                                                        append($$, newNode(TYPE_LITERAL, "("));
                                                        append($$, $3);
                                                        append($$, newNode(TYPE_LITERAL, ")"));
                                                    }

ARGUMENTOS      : EXPRESION coma ARGUMENTOS         {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, $1);
                                                        append($$, newNode(TYPE_LITERAL, ", "));
                                                        append($$, $3); }
                | EXPRESION                         {   $$ = $1; }
                ;

FUNCION_BUILTIN : MOSTRAR                           {   $$ = $1; }
                | LEER_CHAR                         {   $$ = $1; }
                | MOSTRAR_R                         {   $$ = $1; }
                ;

MOSTRAR         : mostrar EXPRESION                 {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        if ($2->type == TYPE_STRING)
                                                            append($$, newNode(TYPE_LITERAL, "printf(\"%s\", "));
                                                        else if ($2->type == TYPE_INT || $2->type == TYPE_BOOL)
                                                            append($$, newNode(TYPE_LITERAL, "printf(\"%d\", "));
                                                        else if($2->type == TYPE_DOUBLE)
                                                            append($$, newNode(TYPE_LITERAL, "printf(\"%lf\", "));
                                                        else if ($2->type == TYPE_LIST)
                                                            append($$, newNode(TYPE_LITERAL, "printList("));
                                                        else if ($2->type == TYPE_QUEUE)
                                                            append($$, newNode(TYPE_LITERAL, "printQueue("));
                                                        append($$, $2);
                                                        append($$, newNode(TYPE_LITERAL, ")")); }
                ;
MOSTRAR_R       : mostrar_r EXPRESION               {   $$ = newNode(TYPE_EMPTY, NULL);
                                                        if ($2->type == TYPE_STRING || $2->type == TYPE_INT)
                                                            yyerror("Operacion no valida para este tipo de variable\n");
                                                        else if ($2->type == TYPE_LIST)
                                                            append($$, newNode(TYPE_LITERAL, "printBackwards("));

                                                        append($$, $2);
                                                        append($$, newNode(TYPE_LITERAL, ")")); };
LEER_CHAR       : leer_en var_id                    {   int type = getType($2);
                                                        if (type == -1)
                                                            yyerror("Variable no declarada previamente\n");
                                                        if (type != TYPE_STRING)
                                                            yyerror("Asignación entre tipos incompatibles\n");

                                                        $$ = newNode(TYPE_EMPTY, NULL);
                                                        append($$, newNode(TYPE_LITERAL, $2));
                                                        append($$, newNode(TYPE_LITERAL, " = _getchar_to_var()")); }
                ;

CONDICIONAL     : si EVALUACION dos_puntos LINEAS FIN               {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                        append($$, newNode(TYPE_LITERAL, "if("));
                                                                        append($$, $2);
                                                                        append($$, newNode(TYPE_LITERAL, ")"));
                                                                        append($$, newNode(TYPE_LITERAL, "{\n"));
                                                                        append($$, $4);
                                                                        append($$, newNode(TYPE_LITERAL, "}\n")); }
                ;

SINO            : sino dos_puntos LINEAS FIN                        {   $$ = newNode(TYPE_EMPTY, NULL); 
                                                                        append($$, newNode(TYPE_LITERAL, "else {\n")); 
                                                                        append($$, $3); 
                                                                        append($$, newNode(TYPE_LITERAL, "}\n")); }

REPETIR         : repetir_mientras EVALUACION dos_puntos LINEAS FIN {   $$ = newNode(TYPE_EMPTY, NULL); 
                                                                        append($$, newNode(TYPE_LITERAL, "while(")); 
                                                                        append($$, $2); 
                                                                        append($$, newNode(TYPE_LITERAL, ")"));
                                                                        append($$, newNode(TYPE_LITERAL, "{\n"));
                                                                        append($$, $4);
                                                                        append($$, newNode(TYPE_LITERAL, "}\n")); }
                ;

EVALUACION      : EXPRESION COMPARADOR EXPRESION                    {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                        if ($1->type == TYPE_STRING && $3->type == TYPE_STRING) {
                                                                            append($$, newNode(TYPE_LITERAL, "strcmp("));
                                                                            append($$, $1);
                                                                            append($$, newNode(TYPE_LITERAL, ", "));
                                                                            append($$, $3);
                                                                            append($$, newNode(TYPE_LITERAL, ")"));
                                                                            append($$, $2);
                                                                            append($$, newNode(TYPE_LITERAL, "0"));
                                                                        } else if (($1->type == TYPE_INT || $1->type == TYPE_DOUBLE)  && ($3->type == TYPE_INT || $3->type == TYPE_DOUBLE)) {
                                                                            append($$, $1); 
                                                                            append($$, $2); 
                                                                            append($$, $3);
                                                                        } else if($1->type == TYPE_BOOL && $3->type == TYPE_BOOL){
                                                                            append($$, $1); 
                                                                            append($$, $2); 
                                                                            append($$, $3);
                                                                        } else {
                                                                            yyerror("Comparación entre tipos incompatibles");
                                                                        } 
                                                                    }
                | EVALUACION y EVALUACION                           {   $$ = newNode(TYPE_EMPTY, NULL); 
                                                                        append($$, $1); 
                                                                        append($$, newNode(TYPE_LITERAL, " && "));
                                                                        append($$, $3);                           }
                | EVALUACION o EVALUACION                           {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                        append($$, $1);
                                                                        append($$, newNode(TYPE_LITERAL, " || "));
                                                                        append($$, $3);                           }
                | par_abrir EVALUACION par_cerrar                   {   $$ = newNode(TYPE_EMPTY, NULL);
                                                                        append($$, newNode(TYPE_LITERAL, "("));
                                                                        append($$, $2);
                                                                        append($$, newNode(TYPE_LITERAL, ")"));   }
                | EXPRESION                                         {   $$ = $1;                                  }
                ;

COMPARADOR      : igual                             {   $$ = newNode(TYPE_LITERAL, " == "); }
                | mayor                             {   $$ = newNode(TYPE_LITERAL, " > "); }
                | mayor_igual                       {   $$ = newNode(TYPE_LITERAL, " >= "); }
                | menor                             {   $$ = newNode(TYPE_LITERAL, " < "); }
                | menor_igual                       {   $$ = newNode(TYPE_LITERAL, " <= "); }
                | distinto                          {   $$ = newNode(TYPE_LITERAL, " != "); }
                ;

OBTENER         : var_id de var_id                              {   int type = getType($3);
                                                                    if (type == -1)
                                                                        yyerror("Variable no declarada previamente\n");
                                                                    if (type != TYPE_MAP) {
                                                                        yyerror("Asignación entre tipos incompatibles\n");
                                                                    }

                                                                    $$ = newNode(TYPE_EMPTY, NULL); 
                                                                    append($$, newNode(TYPE_LITERAL, "getValue(")); 
                                                                    append($$, newNode(TYPE_LITERAL, $3)); 
                                                                    append($$, newNode(TYPE_LITERAL, ","));
                                                                    append($$, newNode(TYPE_LITERAL, $1));
                                                                    append($$, newNode(TYPE_LITERAL, ")")); }

%%

void yyerror(char * s){
    fprintf(stderr, "Error en la linea %d: %s\n", lineCount, s);

    freeResources();

    if(remove(TMP_FILE_NAME)) {
        printf ("Error al eliminar el archivo de código intermedio.\n");
        exit(1);
    }
	exit(1);
}

void printHeaders() {
    fprintf(tmpFile, "#include <stdio.h>\n");
    fprintf(tmpFile, "#include <stdlib.h>\n");
    fprintf(tmpFile, "#include <string.h>\n");
    fprintf(tmpFile, "#include <stdbool.h>\n");

    fprintf(tmpFile, "%s\n" , strCatFunction);
    fprintf(tmpFile, "%s\n" , strIntCatFunction);
    fprintf(tmpFile, "%s" , strDoubleCatFunction);
    fprintf(tmpFile, "%s\n" , strIntMultFunction);
    fprintf(tmpFile, "%s\n" , getCharToVar);
    fprintf(tmpFile, "%s\n", listStructure);
    fprintf(tmpFile, "%s\n", newListNodeL);
    fprintf(tmpFile, "%s\n", addListNodeL);
    fprintf(tmpFile, "%s\n", printListL);
    fprintf(tmpFile, "%s\n", removeFromListL);
    fprintf(tmpFile, "%s\n", printBackwards);
    fprintf(tmpFile, "%s\n", queueStruct);
    fprintf(tmpFile, "%s\n", queueOffer);
    fprintf(tmpFile, "%s\n", removeFromQueue);
    fprintf(tmpFile, "%s\n", printQueue);
    fprintf(tmpFile, "%s\n", peekQueue);
    fprintf(tmpFile, "%s" , mapStructure);
    fprintf(tmpFile, "%s" , emptyMapNode);
    fprintf(tmpFile, "%s" , emptyMap);
    fprintf(tmpFile, "%s" , searchMapNode);
    fprintf(tmpFile, "%s" , newMapNode);
    fprintf(tmpFile, "%s" , getMapNode);
    fprintf(tmpFile, "%s" , addMapNode);
    fprintf(tmpFile, "%s" , removeMapNode);
}
