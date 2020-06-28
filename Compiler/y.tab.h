/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     principal = 258,
     recibe = 259,
     coma = 260,
     es = 261,
     t_cadena = 262,
     t_entero = 263,
     t_mapa = 264,
     asignar = 265,
     reasignar = 266,
     punto = 267,
     par_abrir = 268,
     par_cerrar = 269,
     suma = 270,
     resta = 271,
     mult = 272,
     divis = 273,
     mostrar = 274,
     si = 275,
     fin = 276,
     y = 277,
     o = 278,
     protot = 279,
     igual = 280,
     mayor = 281,
     mayor_igual = 282,
     menor = 283,
     menor_igual = 284,
     distinto = 285,
     repetir_mientras = 286,
     incrementar = 287,
     decrementar = 288,
     es_funcion = 289,
     devuelve = 290,
     devolver = 291,
     evaluada_en = 292,
     dos_puntos = 293,
     prototipo_funciones = 294,
     variables_globales = 295,
     leer_en = 296,
     agregar = 297,
     a = 298,
     borrar = 299,
     de = 300,
     obtener = 301,
     cadena = 302,
     entero = 303,
     var_id = 304
   };
#endif
/* Tokens.  */
#define principal 258
#define recibe 259
#define coma 260
#define es 261
#define t_cadena 262
#define t_entero 263
#define t_mapa 264
#define asignar 265
#define reasignar 266
#define punto 267
#define par_abrir 268
#define par_cerrar 269
#define suma 270
#define resta 271
#define mult 272
#define divis 273
#define mostrar 274
#define si 275
#define fin 276
#define y 277
#define o 278
#define protot 279
#define igual 280
#define mayor 281
#define mayor_igual 282
#define menor 283
#define menor_igual 284
#define distinto 285
#define repetir_mientras 286
#define incrementar 287
#define decrementar 288
#define es_funcion 289
#define devuelve 290
#define devolver 291
#define evaluada_en 292
#define dos_puntos 293
#define prototipo_funciones 294
#define variables_globales 295
#define leer_en 296
#define agregar 297
#define a 298
#define borrar 299
#define de 300
#define obtener 301
#define cadena 302
#define entero 303
#define var_id 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "yacc.y"
{
	struct Node * node;
	char * value;
}
/* Line 1529 of yacc.c.  */
#line 152 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

