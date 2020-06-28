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
     asignar = 264,
     reasignar = 265,
     punto = 266,
     par_abrir = 267,
     par_cerrar = 268,
     suma = 269,
     resta = 270,
     mult = 271,
     divis = 272,
     mostrar = 273,
     si = 274,
     fin = 275,
     y = 276,
     o = 277,
     protot = 278,
     igual = 279,
     mayor = 280,
     mayor_igual = 281,
     menor = 282,
     menor_igual = 283,
     distinto = 284,
     repetir_mientras = 285,
     incrementar = 286,
     decrementar = 287,
     es_funcion = 288,
     devuelve = 289,
     devolver = 290,
     evaluada_en = 291,
     dos_puntos = 292,
     prototipo_funciones = 293,
     variables_globales = 294,
     leer_en = 295,
     cadena = 296,
     entero = 297,
     var_id = 298
   };
#endif
/* Tokens.  */
#define principal 258
#define recibe 259
#define coma 260
#define es 261
#define t_cadena 262
#define t_entero 263
#define asignar 264
#define reasignar 265
#define punto 266
#define par_abrir 267
#define par_cerrar 268
#define suma 269
#define resta 270
#define mult 271
#define divis 272
#define mostrar 273
#define si 274
#define fin 275
#define y 276
#define o 277
#define protot 278
#define igual 279
#define mayor 280
#define mayor_igual 281
#define menor 282
#define menor_igual 283
#define distinto 284
#define repetir_mientras 285
#define incrementar 286
#define decrementar 287
#define es_funcion 288
#define devuelve 289
#define devolver 290
#define evaluada_en 291
#define dos_puntos 292
#define prototipo_funciones 293
#define variables_globales 294
#define leer_en 295
#define cadena 296
#define entero 297
#define var_id 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "yacc.y"
{
	struct Node * node;
	char * value;
}
/* Line 1529 of yacc.c.  */
#line 140 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

