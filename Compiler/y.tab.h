/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    principal = 258,
    recibe = 259,
    coma = 260,
    es = 261,
    t_cadena = 262,
    t_entero = 263,
    t_lista_enteros = 264,
    t_stack = 265,
    t_queue = 266,
    t_doble = 267,
    t_booleano = 268,
    asignar = 269,
    reasignar = 270,
    punto = 271,
    par_abrir = 272,
    par_cerrar = 273,
    suma = 274,
    resta = 275,
    mult = 276,
    divis = 277,
    mod = 278,
    mostrar = 279,
    mostrar_r = 280,
    si = 281,
    fin = 282,
    y = 283,
    o = 284,
    protot = 285,
    igual = 286,
    mayor = 287,
    mayor_igual = 288,
    menor = 289,
    menor_igual = 290,
    distinto = 291,
    repetir_mientras = 292,
    incrementar = 293,
    decrementar = 294,
    es_funcion = 295,
    devuelve = 296,
    devolver = 297,
    evaluada_en = 298,
    dos_puntos = 299,
    prototipo_funciones = 300,
    variables_globales = 301,
    leer_en = 302,
    agregar = 303,
    borrar = 304,
    a = 305,
    de = 306,
    peek = 307,
    obtener = 308,
    t_mapa = 309,
    sacar = 310,
    cadena = 311,
    entero = 312,
    lista = 313,
    cola = 314,
    stack = 315,
    doble = 316,
    booleano = 317,
    var_id = 318,
    presente = 319,
    sino = 320,
    expo = 321
  };
#endif
/* Tokens.  */
#define principal 258
#define recibe 259
#define coma 260
#define es 261
#define t_cadena 262
#define t_entero 263
#define t_lista_enteros 264
#define t_stack 265
#define t_queue 266
#define t_doble 267
#define t_booleano 268
#define asignar 269
#define reasignar 270
#define punto 271
#define par_abrir 272
#define par_cerrar 273
#define suma 274
#define resta 275
#define mult 276
#define divis 277
#define mod 278
#define mostrar 279
#define mostrar_r 280
#define si 281
#define fin 282
#define y 283
#define o 284
#define protot 285
#define igual 286
#define mayor 287
#define mayor_igual 288
#define menor 289
#define menor_igual 290
#define distinto 291
#define repetir_mientras 292
#define incrementar 293
#define decrementar 294
#define es_funcion 295
#define devuelve 296
#define devolver 297
#define evaluada_en 298
#define dos_puntos 299
#define prototipo_funciones 300
#define variables_globales 301
#define leer_en 302
#define agregar 303
#define borrar 304
#define a 305
#define de 306
#define peek 307
#define obtener 308
#define t_mapa 309
#define sacar 310
#define cadena 311
#define entero 312
#define lista 313
#define cola 314
#define stack 315
#define doble 316
#define booleano 317
#define var_id 318
#define presente 319
#define sino 320
#define expo 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "yacc.y"

	struct Node * node;
	char * value;

#line 194 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
