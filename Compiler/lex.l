%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "y.tab.h"

    extern void yyerror(char * s);
    int lineCount = 1;
%}


%option
%x comment

digit			[0-9]
alpha			[a-zA-Z]
space			[ \t]
newline         [\n]

%%

"/*"                    BEGIN(comment);
<comment>[^*\n]*        {}
<comment>"*"+[^*/\n]*   {}
<comment>\n             lineCount++;
<comment>"*"+"/"        BEGIN(INITIAL);

{space}+            ;/* spaces */
{newline}           {lineCount++;}

\"[^"]*\"                          {   char * str = malloc(strlen(yytext)+1);
                                    strcpy(str, yytext);
                                    yylval.value = str;
                                    return cadena;
                                }

","                 {return coma;}
"un entero"      {return t_entero;}
"una cadena"     {return t_cadena;}
"una lista de enteros"      {return t_lista_enteros;}
"es un stack de enteros"    {return t_stack;}
"una cola de enteros"    {return t_queue;}
"Ojeada"            {return peek;}
"es "               {return es;}
"que vale"          {return asignar;}
"ahora vale"        {return reasignar;}
"Mostrar"           {return mostrar; }
"Mostrar al revez"  {return mostrar_r;}
"."                 {return punto;}
"("                 {return par_abrir;}
")"                 {return par_cerrar;}
"+"                 {return suma;}
"-"                 {return resta;}
"*"                 {return mult;}
"/"                 {return divis;}
"%"                 {return mod;}
"^"                 {return expo;}
"Si"                {return si;}
":"                 {return dos_puntos;}
"Fin"               {return fin;}
" y "               {return y;}
" o "               {return o;}
" de "              {return de;}
"es igual a"        {return igual;}
"es mayor a"        {return mayor;}
"es mayor o igual a"   {return mayor_igual;}
"es menor a"           {return menor;}
"es menor o igual a"   {return menor_igual;}
"es distinto a"        {return distinto;}
"sea igual a"        {return igual;}
"sea mayor a"        {return mayor;}
"sea mayor o igual a"   {return mayor_igual;}
"sea menor a"           {return menor;}
"sea menor o igual a"   {return menor_igual;}
"sea distinto a"        {return distinto;}
"evaluada en"           {return evaluada_en;}
"Se definen las siguientes funciones:"   {return prototipo_funciones;}
"Se definen las siguientes variables globales:"   {return variables_globales;}
"Repetir mientras"     {return repetir_mientras;}
"Incrementar "         {return incrementar;}
"Decrementar "         {return decrementar;}
"es una funcion "      {return es_funcion;}
"que devuelve "       {return devuelve;}
"Principal "           {return principal;}
"Devolver "           {return devolver;}
"Recibe"           {return recibe;}
"Leer un caracter del teclado y guardarlo en "           {return leer_en;}
"Agregar"                   {return agregar;}
"Borrar"                    {return borrar;}
"a"                         {return a;}

-?{digit}+                      {   char * str = malloc(strlen(yytext)+1);
			                        strcpy(str, yytext);
			                        yylval.value = str;
			                        return entero; }

{alpha}({alpha}|{digit}|'_')*       {   char * str = malloc(strlen(yytext)+1);
			                        strcpy(str,yytext);
			                        yylval.value = str;
			                        return var_id; }

.                               {   yyerror("Caracter invalido\n"); }

%%

int yywrap(void){
	return 1;
}
