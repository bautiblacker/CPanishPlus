/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

	#include <stdio.h>
    #include <stdbool.h>
    #include "node.h"
    #include "operations.h"
    #include "compiler.h"

    extern int lineCount;
    
    int yyparse();
    int yylex();
	void yyerror(char * s);
    void printHeaders();

#line 85 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 274 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

#define YYUNDEFTOK  2
#define YYMAXUTOK   321


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    52,    53,    56,    60,    63,    64,    67,
      71,    74,    82,    85,    86,    89,    96,   106,   109,   112,
     113,   116,   120,   123,   130,   133,   136,   139,   142,   145,
     150,   151,   152,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   170,   175,   180,   185,   197,
     217,   230,   231,   235,   252,   267,   296,   316,   327,   328,
     329,   330,   332,   333,   334,   335,   337,   338,   339,   340,
     341,   344,   345,   346,   347,   348,   353,   361,   369,   370,
     371,   372,   380,   385,   386,   387,   388,   389,   390,   393,
     403,   407,   410,   411,   412,   415,   431,   439,   450,   459,
     464,   473,   494,   498,   502,   506,   509,   510,   511,   512,
     513,   514,   517
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "principal", "recibe", "coma", "es",
  "t_cadena", "t_entero", "t_lista_enteros", "t_stack", "t_queue",
  "t_doble", "t_booleano", "asignar", "reasignar", "punto", "par_abrir",
  "par_cerrar", "suma", "resta", "mult", "divis", "mod", "mostrar",
  "mostrar_r", "si", "fin", "y", "o", "protot", "igual", "mayor",
  "mayor_igual", "menor", "menor_igual", "distinto", "repetir_mientras",
  "incrementar", "decrementar", "es_funcion", "devuelve", "devolver",
  "evaluada_en", "dos_puntos", "prototipo_funciones", "variables_globales",
  "leer_en", "agregar", "borrar", "a", "de", "peek", "obtener", "t_mapa",
  "sacar", "cadena", "entero", "lista", "cola", "stack", "doble",
  "booleano", "var_id", "presente", "sino", "expo", "$accept", "PROGRAMA",
  "LISTA_VAR", "VARIABLES", "LISTA_PROTO", "PROTOTIPOS", "PROTOTIPO",
  "FIN_PARAMS", "VARIABLE", "PRINCIPAL", "FUNCION", "FUNCIONES",
  "LISTA_PARAMETROS", "PARAMETROS", "PARAMETRO", "FIN", "LINEAS",
  "NUEVO_ALCANCE", "LINEA", "BLOQUE", "INSTRUCCION", "DEVOLVER",
  "INCREMENTACION", "DECREMENTACION", "DECLARACION", "SACAR", "ASIGNACION",
  "AGREGAR", "BORRAR", "OJEADA", "REASIGNACION", "TIPO", "TIPO_STRUCT",
  "TIPO_F", "EXPRESION", "OPERACION", "EVALUAR_FUNC", "ARGUMENTOS",
  "FUNCION_BUILTIN", "MOSTRAR", "MOSTRAR_R", "LEER_CHAR", "CONDICIONAL",
  "SINO", "REPETIR", "EVALUACION", "COMPARADOR", "OBTENER", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-41)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -45,   -40,    24,    21,   102,  -115,    76,  -115,  -115,  -115,
      34,  -115,    49,   212,    84,  -115,   -40,  -115,    47,   109,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   188,   212,
    -115,  -115,  -115,  -115,    70,  -115,   156,  -115,  -115,   212,
    -115,  -115,    78,   140,   131,    34,    74,    51,   155,   -12,
     165,    59,   212,   212,   212,   212,   212,   212,  -115,   212,
     156,   143,    34,   146,  -115,   125,   128,   134,  -115,  -115,
    -115,   136,   132,     9,  -115,    -1,    -1,    22,    22,   156,
       4,   173,  -115,   173,   149,    34,  -115,  -115,  -115,   139,
     212,  -115,  -115,  -115,  -115,  -115,   178,   160,   166,  -115,
    -115,  -115,   202,  -115,   176,   173,   167,  -115,   212,   212,
     150,   153,   212,   158,   212,   163,    68,   182,    67,   176,
     196,  -115,  -115,  -115,  -115,  -115,   203,  -115,  -115,  -115,
     156,  -115,  -115,  -115,  -115,  -115,   178,   173,   156,   156,
    -115,  -115,   156,  -115,   144,  -115,   214,  -115,   224,   224,
     190,   176,  -115,  -115,  -115,  -115,  -115,   191,  -115,   237,
     180,   192,  -115,   200,   126,   -11,    61,   176,  -115,   176,
     173,  -115,  -115,   108,     7,  -115,  -115,  -115,  -115,  -115,
    -115,   212,   224,   224,   176,   176,   182,   182,  -115,  -115,
     156,   229,  -115,   182,   182,  -115,  -115,  -115,  -115
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     6,     0,     8,     0,     3,     0,    14,    13,     1,
      10,    28,     0,     0,    51,    49,     6,     7,     0,     0,
      58,    59,    62,    64,    63,    60,    61,    65,     0,     0,
      71,    72,    73,    74,    75,    80,    57,    78,    79,     0,
      48,     5,     0,     0,     0,    18,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
      52,     0,    10,     0,     2,     0,     0,     0,    77,    76,
      81,     0,     0,    91,    89,    83,    84,    85,    86,    87,
      88,     0,     9,     0,     0,    18,    56,   112,    53,     0,
       0,    66,    67,    68,    69,    70,     0,     0,     0,    17,
      54,    90,     0,    12,    28,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,    28,
       0,    38,    36,    37,    34,    44,    80,    41,    42,    33,
      39,    35,    92,    94,    93,    43,    20,     0,    95,    96,
      46,    47,    45,    97,     0,    50,     0,    15,     0,     0,
       0,    28,    30,    32,    31,    25,    29,     0,    19,    22,
       0,     0,    24,     0,   105,     0,     0,    28,    26,    28,
       0,    23,    55,   105,     0,   106,   107,   108,   109,   110,
     111,     0,     0,     0,    28,    28,     0,     0,    21,   104,
     101,   102,   103,     0,     0,    99,    16,    98,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,   243,  -115,   204,  -115,  -115,  -115,  -115,
    -115,   179,   129,    97,  -115,    60,  -114,     2,  -115,  -115,
    -115,  -115,  -115,  -115,    33,  -115,  -115,  -100,  -115,   -26,
      90,  -115,  -115,   -33,   -13,  -115,  -115,   181,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,   -49,  -115,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,    11,    17,    43,   107,     6,    45,
      85,    64,   103,   158,   159,   147,   117,   118,   119,   151,
     120,   121,   122,   123,   124,   125,    40,    35,   127,   128,
     129,    14,    15,   160,   130,    37,    38,    74,   131,   132,
     133,   134,   152,   153,   154,   165,   181,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,     1,    48,    50,   126,   155,    69,    53,    54,    55,
      56,    57,    18,    19,    90,    49,    51,   182,   183,   126,
      55,    56,    57,     4,     9,   189,    60,    57,    53,    54,
      55,    56,    57,   184,     7,   182,   183,   168,    72,    73,
      75,    76,    77,    78,    79,    57,    80,    65,    96,     7,
      97,   126,    58,   186,    59,   187,    20,    21,    22,    23,
      24,    25,    26,    58,    18,    59,    10,   126,    58,   126,
     193,   194,   136,    58,    12,    59,    28,    73,    53,    54,
      55,    56,    57,    13,   126,   126,    58,    65,    59,   182,
     183,     8,    16,   148,    52,   138,   139,   -28,    39,   142,
     166,   144,    67,    27,   149,   185,     8,    29,    12,    71,
      42,    52,    44,    52,   174,    30,    31,    13,    61,    67,
      32,    33,    34,    58,    66,    59,    69,    53,    54,    55,
      56,    57,   150,   191,   192,   164,   164,    48,    50,   175,
     176,   177,   178,   179,   180,    53,    54,    55,    56,    57,
     173,    53,    54,    55,    56,    57,    62,   175,   176,   177,
     178,   179,   180,    53,    54,    55,    56,    57,   190,   164,
     164,    63,    58,    68,    59,    53,    54,    55,    56,    57,
      91,    92,    89,    70,    81,    93,    94,    83,    84,    98,
      58,    86,    59,    28,   102,   161,    58,    87,    59,    88,
     108,   109,   100,   -27,   104,    28,   106,   105,    58,   146,
      59,   137,   156,   140,   110,   111,   141,   163,   112,   -40,
      58,   143,    59,   113,    29,   114,   145,    95,    46,    28,
     162,   115,    30,    31,   167,   169,    29,    32,    33,   116,
      46,   163,   170,   171,    30,    31,   195,   196,    29,    32,
      33,    47,    46,   197,   198,   172,    30,    31,   183,    41,
      29,    32,    33,    47,    99,   157,    82,   188,    30,    31,
       0,   101,    29,    32,    33,    34,     0,     0,     0,     0,
      30,    31,     0,     0,     0,    32,    33,    34
};

static const yytype_int16 yycheck[] =
{
      13,    46,    28,    28,   104,   119,    18,    19,    20,    21,
      22,    23,    10,    11,     5,    28,    29,    28,    29,   119,
      21,    22,    23,    63,     0,    18,    39,    23,    19,    20,
      21,    22,    23,    44,     1,    28,    29,   151,    51,    52,
      53,    54,    55,    56,    57,    23,    59,    45,    81,    16,
      83,   151,    64,   167,    66,   169,     7,     8,     9,    10,
      11,    12,    13,    64,    62,    66,    45,   167,    64,   169,
     184,   185,   105,    64,     6,    66,    17,    90,    19,    20,
      21,    22,    23,    15,   184,   185,    64,    85,    66,    28,
      29,     1,    16,    26,    43,   108,   109,    63,    14,   112,
     149,   114,    51,    54,    37,    44,    16,    48,     6,    50,
      63,    43,     3,    43,   163,    56,    57,    15,    40,    51,
      61,    62,    63,    64,    50,    66,    18,    19,    20,    21,
      22,    23,    65,   182,   183,   148,   149,   163,   163,    31,
      32,    33,    34,    35,    36,    19,    20,    21,    22,    23,
     163,    19,    20,    21,    22,    23,    16,    31,    32,    33,
      34,    35,    36,    19,    20,    21,    22,    23,   181,   182,
     183,    40,    64,    18,    66,    19,    20,    21,    22,    23,
       7,     8,    50,    18,    41,    12,    13,    41,    63,    40,
      64,    63,    66,    17,    16,    51,    64,    63,    66,    63,
      24,    25,    63,    27,    44,    17,     4,    41,    64,    27,
      66,    44,    16,    63,    38,    39,    63,    17,    42,    16,
      64,    63,    66,    47,    48,    49,    63,    54,    52,    17,
      16,    55,    56,    57,    44,    44,    48,    61,    62,    63,
      52,    17,     5,    63,    56,    57,   186,   187,    48,    61,
      62,    63,    52,   193,   194,    63,    56,    57,    29,    16,
      48,    61,    62,    63,    85,   136,    62,   170,    56,    57,
      -1,    90,    48,    61,    62,    63,    -1,    -1,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    62,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    46,    68,    69,    63,    70,    75,    91,    97,     0,
      45,    71,     6,    15,    98,    99,    16,    72,    84,    84,
       7,     8,     9,    10,    11,    12,    13,    54,    17,    48,
      56,    57,    61,    62,    63,    94,   101,   102,   103,    14,
      93,    70,    63,    73,     3,    76,    52,    63,    96,   101,
     114,   101,    43,    19,    20,    21,    22,    23,    64,    66,
     101,    40,    16,    40,    78,    84,    50,    51,    18,    18,
      18,    50,   101,   101,   104,   101,   101,   101,   101,   101,
     101,    41,    72,    41,    63,    77,    63,    63,    63,    50,
       5,     7,     8,    12,    13,    54,   100,   100,    40,    78,
      63,   104,    16,    79,    44,    41,     4,    74,    24,    25,
      38,    39,    42,    47,    49,    55,    63,    83,    84,    85,
      87,    88,    89,    90,    91,    92,    94,    95,    96,    97,
     101,   105,   106,   107,   108,   114,   100,    44,   101,   101,
      63,    63,   101,    63,   101,    63,    27,    82,    26,    37,
      65,    86,   109,   110,   111,    83,    16,    79,    80,    81,
     100,    51,    16,    17,   101,   112,   112,    44,    83,    44,
       5,    63,    63,   101,   112,    31,    32,    33,    34,    35,
      36,   113,    28,    29,    44,    44,    83,    83,    80,    18,
     101,   112,   112,    83,    83,    82,    82,    82,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    74,    75,    75,    76,    77,    78,    78,    79,
      79,    80,    80,    81,    82,    83,    83,    83,    84,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    89,    90,    91,    91,
      92,    93,    93,    94,    94,    95,    96,    97,    98,    98,
      98,    98,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   103,
     104,   104,   105,   105,   105,   106,   107,   108,   109,   110,
     111,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     113,   113,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     0,     3,     0,     2,     0,     4,
       0,     6,     0,     1,     1,     7,     8,     3,     0,     4,
       0,     3,     1,     2,     2,     2,     3,     0,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     2,
       2,     0,     2,     4,     5,     4,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     2,     2,     2,     5,     4,
       5,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 43 "yacc.y"
                                                                                {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                    append((yyval.node), (yyvsp[-4].node));
                                                                                    append((yyval.node), (yyvsp[-3].node));
                                                                                    append((yyval.node), (yyvsp[-1].node));
                                                                                    append((yyval.node), (yyvsp[0].node));
                                                                                    printHeaders();
                                                                                    printInorder((yyval.node)); }
#line 1627 "y.tab.c"
    break;

  case 3:
#line 52 "yacc.y"
                                                                            {   (yyval.node) = (yyvsp[0].node); }
#line 1633 "y.tab.c"
    break;

  case 4:
#line 53 "yacc.y"
                                                                            {   (yyval.node) = NULL; }
#line 1639 "y.tab.c"
    break;

  case 5:
#line 56 "yacc.y"
                                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, ";\n"));
                                                                                        append((yyval.node), (yyvsp[0].node)); }
#line 1648 "y.tab.c"
    break;

  case 6:
#line 60 "yacc.y"
                                                                                    {   (yyval.node) = NULL; }
#line 1654 "y.tab.c"
    break;

  case 7:
#line 63 "yacc.y"
                                                                {   (yyval.node) = (yyvsp[0].node); }
#line 1660 "y.tab.c"
    break;

  case 8:
#line 64 "yacc.y"
                                                                {   (yyval.node) = NULL; }
#line 1666 "y.tab.c"
    break;

  case 9:
#line 67 "yacc.y"
                                                                {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[-2].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ");\n"));
                                                                    append((yyval.node), (yyvsp[0].node)); }
#line 1675 "y.tab.c"
    break;

  case 10:
#line 71 "yacc.y"
                                                                {   (yyval.node) = NULL; }
#line 1681 "y.tab.c"
    break;

  case 11:
#line 74 "yacc.y"
                                                                                        {   if (addVar((yyvsp[-5].value), (yyvsp[-2].node)->type) == -1)
                                                                                            yyerror("Se superó el límite de variables\n");
                                                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-5].value)));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                                                        append((yyval.node), (yyvsp[-1].node)); }
#line 1693 "y.tab.c"
    break;

  case 12:
#line 82 "yacc.y"
                                                                                        {   closeScope(); }
#line 1699 "y.tab.c"
    break;

  case 13:
#line 85 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1705 "y.tab.c"
    break;

  case 14:
#line 86 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1711 "y.tab.c"
    break;

  case 15:
#line 89 "yacc.y"
                                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                        append((yyval.node), (yyvsp[-3].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, "main() {\n"));
                                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
#line 1721 "y.tab.c"
    break;

  case 16:
#line 96 "yacc.y"
                                                                                                {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                                                    append((yyval.node), (yyvsp[-4].node));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-7].value)));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                                                                    append((yyval.node), (yyvsp[-3].node));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, ") {\n"));
                                                                                                    append((yyval.node), (yyvsp[-1].node));
                                                                                                    append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
#line 1734 "y.tab.c"
    break;

  case 17:
#line 106 "yacc.y"
                                                                {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[-1].node));
                                                                    append((yyval.node), (yyvsp[0].node)); }
#line 1742 "y.tab.c"
    break;

  case 18:
#line 109 "yacc.y"
                                                                {   (yyval.node) = NULL; }
#line 1748 "y.tab.c"
    break;

  case 19:
#line 112 "yacc.y"
                                                                {   (yyval.node) = (yyvsp[0].node); }
#line 1754 "y.tab.c"
    break;

  case 20:
#line 113 "yacc.y"
                                                                {   (yyval.node) = NULL; }
#line 1760 "y.tab.c"
    break;

  case 21:
#line 116 "yacc.y"
                                                                {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[-2].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ", "));
                                                                    append((yyval.node), (yyvsp[0].node)); }
#line 1769 "y.tab.c"
    break;

  case 22:
#line 120 "yacc.y"
                                                                {   (yyval.node) = (yyvsp[0].node); }
#line 1775 "y.tab.c"
    break;

  case 23:
#line 123 "yacc.y"
                                                                {   if (addVar((yyvsp[0].value), (yyvsp[-1].node)->type) == -1)
                                                                        yyerror("Se superó el límite de variables\n");
                                                                    (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), (yyvsp[-1].node));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value))); }
#line 1785 "y.tab.c"
    break;

  case 24:
#line 130 "yacc.y"
                                                                {   closeScope(); }
#line 1791 "y.tab.c"
    break;

  case 25:
#line 133 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[-1].node));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 1799 "y.tab.c"
    break;

  case 26:
#line 136 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[-1].node));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 1807 "y.tab.c"
    break;

  case 27:
#line 139 "yacc.y"
                                                    {   (yyval.node) = NULL; }
#line 1813 "y.tab.c"
    break;

  case 28:
#line 142 "yacc.y"
                                                    {   openScope(); }
#line 1819 "y.tab.c"
    break;

  case 29:
#line 145 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[-1].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ";\n")); }
#line 1827 "y.tab.c"
    break;

  case 30:
#line 150 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1833 "y.tab.c"
    break;

  case 31:
#line 151 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1839 "y.tab.c"
    break;

  case 32:
#line 152 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1845 "y.tab.c"
    break;

  case 33:
#line 155 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1851 "y.tab.c"
    break;

  case 34:
#line 156 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1857 "y.tab.c"
    break;

  case 35:
#line 157 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1863 "y.tab.c"
    break;

  case 36:
#line 158 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1869 "y.tab.c"
    break;

  case 37:
#line 159 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1875 "y.tab.c"
    break;

  case 38:
#line 160 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1881 "y.tab.c"
    break;

  case 39:
#line 161 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1887 "y.tab.c"
    break;

  case 40:
#line 162 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1893 "y.tab.c"
    break;

  case 41:
#line 163 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1899 "y.tab.c"
    break;

  case 42:
#line 164 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1905 "y.tab.c"
    break;

  case 43:
#line 165 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1911 "y.tab.c"
    break;

  case 44:
#line 166 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 1917 "y.tab.c"
    break;

  case 45:
#line 170 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, "return "));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 1925 "y.tab.c"
    break;

  case 46:
#line 175 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "++")); }
#line 1933 "y.tab.c"
    break;

  case 47:
#line 180 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "--")); }
#line 1941 "y.tab.c"
    break;

  case 48:
#line 185 "yacc.y"
                                                    {   if (isInCurrentScope((yyvsp[-2].value)) == 1)
                                                            yyerror("Variable ya declarada previamente\n");
                                                        if (addVar((yyvsp[-2].value), (yyvsp[-1].node)->type) == -1)
                                                            yyerror("Se superó el límite de variables\n");
                                                        if ((yyvsp[0].node) != NULL && (yyvsp[-1].node)->type != (yyvsp[0].node)->type) {
                                                            if((yyvsp[-1].node)->type != (yyvsp[0].node)->type) yyerror("dif types tambien\n");
                                                            yyerror("Asignación entre tipos incompatibles\n");
                                                        }
                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[-1].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-2].value)));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 1958 "y.tab.c"
    break;

  case 49:
#line 197 "yacc.y"
                                                    {   if (isInCurrentScope((yyvsp[-1].value)) == 1)
                                                            yyerror("Variable ya declarada previamente\n");
                                                        if (addVar((yyvsp[-1].value), (yyvsp[0].node)->type) == -1)
                                                            yyerror("Se superó el límite de variables\n");
                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[0].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-1].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = "));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "malloc(sizeof("));
                                                        if((yyvsp[0].node)->type == TYPE_LIST) {
                                                            append((yyval.node), newNode(TYPE_LITERAL, "l_node))"));
                                                        } else if((yyvsp[0].node)->type == TYPE_QUEUE) {
                                                            append((yyval.node), newNode(TYPE_LITERAL, "q_node))"));
                                                        } else if((yyvsp[0].node)->type == TYPE_MAP) {
                                                            append((yyval.node), newNode(TYPE_LITERAL, "MapNode))"));
                                                        } else if((yyvsp[0].node)->type == TYPE_STACK) {
                                                            append((yyval.node), newNode(TYPE_LITERAL, "sm_node))"));
                                                        }
                                                    }
#line 1982 "y.tab.c"
    break;

  case 50:
#line 217 "yacc.y"
                                                        {   int type = getType((yyvsp[0].value));
                                                            if(type == -1) {
                                                                yyerror("Variable no declarada previamente\n");
                                                            }
                                                            if (type != TYPE_STACK) {
                                                                yyerror("Operacion sobre tipo incompatible\n");
                                                            }
                                                            (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "popStack("));
                                                            append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                        }
#line 1999 "y.tab.c"
    break;

  case 51:
#line 230 "yacc.y"
                                                    {   (yyval.node) = NULL; }
#line 2005 "y.tab.c"
    break;

  case 52:
#line 231 "yacc.y"
                                                    {   (yyval.node) = newNode((yyvsp[0].node)->type, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = "));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 2013 "y.tab.c"
    break;

  case 53:
#line 235 "yacc.y"
                                                   {   int type = getType((yyvsp[0].value));
                                                            if (type == -1)
                                                                yyerror("Variable no declarada previamente\n");
                                                            if (type != TYPE_LIST && type != TYPE_QUEUE && type != TYPE_STACK)
                                                                yyerror("Asignación entre tipos incompatibles\n");

                                                            (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                            if(type == TYPE_LIST)
                                                                append((yyval.node), newNode(TYPE_LITERAL, "addListNode("));
                                                            else if(type == TYPE_QUEUE)
                                                                append((yyval.node), newNode(TYPE_LITERAL, "queueOffer("));
                                                            else if(type == TYPE_STACK)
                                                                append((yyval.node), newNode(TYPE_LITERAL, "push("));
                                                            append((yyval.node), (yyvsp[-2].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                            append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")")); }
#line 2035 "y.tab.c"
    break;

  case 54:
#line 252 "yacc.y"
                                                        {   int type = getType((yyvsp[0].value));
                                                            if (type == -1)
                                                                yyerror("Variable no declarada previamente\n");
                                                            if (type != TYPE_MAP)
                                                                yyerror("Asignación entre tipos incompatibles\n");

                                                            (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "addKeyValue("));
                                                            append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                            append((yyval.node), (yyvsp[-3].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                            append((yyval.node), (yyvsp[-2].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")")); }
#line 2054 "y.tab.c"
    break;

  case 55:
#line 267 "yacc.y"
                                                        {   int type = getType((yyvsp[0].value));
                                                            if(type == -1)
                                                                yyerror("Variable no declarada previamente\n");
                                                            if (type != TYPE_LIST && type != TYPE_QUEUE && type != TYPE_MAP)
                                                                yyerror("Asignación entre tipos incompatibles\n");

                                                            (yyval.node) = newNode(TYPE_EMPTY, NULL);

                                                            if(type == TYPE_MAP) {
                                                                append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                                append((yyval.node), newNode(TYPE_LITERAL, " = "));
                                                                append((yyval.node), newNode(TYPE_LITERAL, "removeKey("));
                                                                append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                                append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                                append((yyval.node), (yyvsp[-2].node));
                                                                append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                            } else {
                                                                if(type == TYPE_QUEUE) {
                                                                    append((yyval.node), newNode(TYPE_LITERAL, "removeFromQueue("));
                                                                }
                                                                if(type == TYPE_LIST) {
                                                                    append((yyval.node), newNode(TYPE_LITERAL, "removeFromList("));
                                                                }

                                                                append((yyval.node), (yyvsp[-2].node));
                                                                append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                                append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                                append((yyval.node), newNode(TYPE_LITERAL, ")")); }
                                                        }
#line 2088 "y.tab.c"
    break;

  case 56:
#line 296 "yacc.y"
                                                  {int type = getType((yyvsp[0].value));
                                                        if(type == -1) {
                                                            yyerror("Variable no declarada previamente\n");
                                                        }
                                                        if (type != TYPE_QUEUE && type != TYPE_STACK) {
                                                            yyerror("Operacion sobre tipo incompatible\n");
                                                        }

                                                        if(type == TYPE_QUEUE) {
                                                            (yyval.node) = newNode(TYPE_INT, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "peekQueue("));
                                                        } else if(type == TYPE_STACK) {
                                                            (yyval.node) = newNode(TYPE_STRING, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "peekStack("));
                                                        }

                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                    }
#line 2112 "y.tab.c"
    break;

  case 57:
#line 316 "yacc.y"
                                                    {   int type = getType((yyvsp[-2].value));
                                                        if (type == -1)
                                                            yyerror("Variable o funcion no declarada previamente\n");
                                                        if (type != (yyvsp[0].node)->type)
                                                            yyerror("Asignación entre tipos incompatibles\n");
                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-2].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = "));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 2126 "y.tab.c"
    break;

  case 58:
#line 327 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_STRING, "char * "); }
#line 2132 "y.tab.c"
    break;

  case 59:
#line 328 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_INT, "int "); }
#line 2138 "y.tab.c"
    break;

  case 60:
#line 329 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_DOUBLE, "double "); }
#line 2144 "y.tab.c"
    break;

  case 61:
#line 330 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_BOOL, "bool "); }
#line 2150 "y.tab.c"
    break;

  case 62:
#line 332 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LIST, "l_node * "); }
#line 2156 "y.tab.c"
    break;

  case 63:
#line 333 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_QUEUE, "q_node * ");}
#line 2162 "y.tab.c"
    break;

  case 64:
#line 334 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_STACK, "sm_node * ");}
#line 2168 "y.tab.c"
    break;

  case 65:
#line 335 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_MAP, "MapNode * "); }
#line 2174 "y.tab.c"
    break;

  case 66:
#line 337 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_STRING, "char * "); }
#line 2180 "y.tab.c"
    break;

  case 67:
#line 338 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_INT, "int "); }
#line 2186 "y.tab.c"
    break;

  case 68:
#line 339 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_DOUBLE, "double "); }
#line 2192 "y.tab.c"
    break;

  case 69:
#line 340 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_BOOL, "bool "); }
#line 2198 "y.tab.c"
    break;

  case 70:
#line 341 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_MAP, "MapNode * "); }
#line 2204 "y.tab.c"
    break;

  case 71:
#line 344 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_STRING, (yyvsp[0].value)); }
#line 2210 "y.tab.c"
    break;

  case 72:
#line 345 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_INT, (yyvsp[0].value)); }
#line 2216 "y.tab.c"
    break;

  case 73:
#line 346 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_DOUBLE, (yyvsp[0].value)); }
#line 2222 "y.tab.c"
    break;

  case 74:
#line 347 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_BOOL, (yyvsp[0].value)); }
#line 2228 "y.tab.c"
    break;

  case 75:
#line 348 "yacc.y"
                                                    {   int type = getType((yyvsp[0].value));
                                                        if (type == -1)
                                                            yyerror("Variable o funcion no declarada previamente\n");
                                                        (yyval.node) = newNode(type, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value))); }
#line 2238 "y.tab.c"
    break;

  case 76:
#line 353 "yacc.y"
                                                    {   if ((yyvsp[-1].node)->value != NULL) {
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        } else  {
                                                            (yyval.node) = newNode((yyvsp[-1].node)->type, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                            append((yyval.node), (yyvsp[-1].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                        } }
#line 2251 "y.tab.c"
    break;

  case 77:
#line 361 "yacc.y"
                                                   {   if ((yyvsp[-1].node)->value != NULL) {
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        } else  {
                                                            (yyval.node) = newNode((yyvsp[-1].node)->type, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                            append((yyval.node), (yyvsp[-1].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                        } }
#line 2264 "y.tab.c"
    break;

  case 78:
#line 369 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2270 "y.tab.c"
    break;

  case 79:
#line 370 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2276 "y.tab.c"
    break;

  case 80:
#line 371 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2282 "y.tab.c"
    break;

  case 81:
#line 372 "yacc.y"
                                                    {   if ((yyvsp[-1].node)->value != NULL) {
                                                            (yyval.node) = (yyvsp[-1].node);
                                                        } else  {
                                                            (yyval.node) = newNode(TYPE_STRING, NULL);
                                                            append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                            append((yyval.node), (yyvsp[-1].node));
                                                            append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                        } }
#line 2295 "y.tab.c"
    break;

  case 82:
#line 380 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[-1].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, " != NULL"));  }
#line 2303 "y.tab.c"
    break;

  case 83:
#line 385 "yacc.y"
                                                    {   (yyval.node) = addExpressions((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2309 "y.tab.c"
    break;

  case 84:
#line 386 "yacc.y"
                                                    {   (yyval.node) = subtractExpressions((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2315 "y.tab.c"
    break;

  case 85:
#line 387 "yacc.y"
                                                    {   (yyval.node) = multiplyExpressions((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2321 "y.tab.c"
    break;

  case 86:
#line 388 "yacc.y"
                                                    {   (yyval.node) = divideExpressions((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2327 "y.tab.c"
    break;

  case 87:
#line 389 "yacc.y"
                                                    {   (yyval.node) = moduleExpressions((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2333 "y.tab.c"
    break;

  case 88:
#line 390 "yacc.y"
                                                                   {   (yyval.node) = exponentExpressions((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2339 "y.tab.c"
    break;

  case 89:
#line 393 "yacc.y"
                                                    {   int type = getType((yyvsp[-2].value));
                                                        if (type == -1)
                                                            yyerror("Funcion no declarada previamente\n");
                                                        (yyval.node) = newNode(type, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-2].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                        append((yyval.node), (yyvsp[0].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                    }
#line 2353 "y.tab.c"
    break;

  case 90:
#line 403 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), (yyvsp[-2].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ", "));
                                                        append((yyval.node), (yyvsp[0].node)); }
#line 2362 "y.tab.c"
    break;

  case 91:
#line 407 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2368 "y.tab.c"
    break;

  case 92:
#line 410 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2374 "y.tab.c"
    break;

  case 93:
#line 411 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2380 "y.tab.c"
    break;

  case 94:
#line 412 "yacc.y"
                                                    {   (yyval.node) = (yyvsp[0].node); }
#line 2386 "y.tab.c"
    break;

  case 95:
#line 415 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        if ((yyvsp[0].node)->type == TYPE_STRING)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printf(\"%s\", "));
                                                        else if ((yyvsp[0].node)->type == TYPE_INT || (yyvsp[0].node)->type == TYPE_BOOL)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printf(\"%d\", "));
                                                        else if((yyvsp[0].node)->type == TYPE_DOUBLE)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printf(\"%lf\", "));
                                                        else if ((yyvsp[0].node)->type == TYPE_LIST)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printList("));
                                                        else if ((yyvsp[0].node)->type == TYPE_QUEUE)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printQueue("));
                                                        else if ((yyvsp[0].node)->type == TYPE_STACK)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printStack("));
                                                        append((yyval.node), (yyvsp[0].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ")")); }
#line 2406 "y.tab.c"
    break;

  case 96:
#line 431 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        if ((yyvsp[0].node)->type == TYPE_STRING || (yyvsp[0].node)->type == TYPE_INT)
                                                            yyerror("Operacion no valida para este tipo de variable\n");
                                                        else if ((yyvsp[0].node)->type == TYPE_LIST)
                                                            append((yyval.node), newNode(TYPE_LITERAL, "printBackwards("));

                                                        append((yyval.node), (yyvsp[0].node));
                                                        append((yyval.node), newNode(TYPE_LITERAL, ")")); }
#line 2419 "y.tab.c"
    break;

  case 97:
#line 439 "yacc.y"
                                                    {   int type = getType((yyvsp[0].value));
                                                        if (type == -1)
                                                            yyerror("Variable no declarada previamente\n");
                                                        if (type != TYPE_STRING)
                                                            yyerror("Asignación entre tipos incompatibles\n");

                                                        (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                        append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                        append((yyval.node), newNode(TYPE_LITERAL, " = _getchar_to_var()")); }
#line 2433 "y.tab.c"
    break;

  case 98:
#line 450 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "if("));
                                                                        append((yyval.node), (yyvsp[-3].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "{\n"));
                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
#line 2445 "y.tab.c"
    break;

  case 99:
#line 459 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "else {\n"));
                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
#line 2454 "y.tab.c"
    break;

  case 100:
#line 464 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "while("));
                                                                        append((yyval.node), (yyvsp[-3].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "{\n"));
                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "}\n")); }
#line 2466 "y.tab.c"
    break;

  case 101:
#line 473 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        if ((yyvsp[-2].node)->type == TYPE_STRING && (yyvsp[0].node)->type == TYPE_STRING) {
                                                                            append((yyval.node), newNode(TYPE_LITERAL, "strcmp("));
                                                                            append((yyval.node), (yyvsp[-2].node));
                                                                            append((yyval.node), newNode(TYPE_LITERAL, ", "));
                                                                            append((yyval.node), (yyvsp[0].node));
                                                                            append((yyval.node), newNode(TYPE_LITERAL, ")"));
                                                                            append((yyval.node), (yyvsp[-1].node));
                                                                            append((yyval.node), newNode(TYPE_LITERAL, "0"));
                                                                        } else if (((yyvsp[-2].node)->type == TYPE_INT || (yyvsp[-2].node)->type == TYPE_DOUBLE)  && ((yyvsp[0].node)->type == TYPE_INT || (yyvsp[0].node)->type == TYPE_DOUBLE)) {
                                                                            append((yyval.node), (yyvsp[-2].node));
                                                                            append((yyval.node), (yyvsp[-1].node));
                                                                            append((yyval.node), (yyvsp[0].node));
                                                                        } else if((yyvsp[-2].node)->type == TYPE_BOOL && (yyvsp[0].node)->type == TYPE_BOOL){
                                                                            append((yyval.node), (yyvsp[-2].node));
                                                                            append((yyval.node), (yyvsp[-1].node));
                                                                            append((yyval.node), (yyvsp[0].node));
                                                                        } else {
                                                                            yyerror("Comparación entre tipos incompatibles");
                                                                        }
                                                                    }
#line 2492 "y.tab.c"
    break;

  case 102:
#line 494 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, " && "));
                                                                        append((yyval.node), (yyvsp[0].node));                           }
#line 2501 "y.tab.c"
    break;

  case 103:
#line 498 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        append((yyval.node), (yyvsp[-2].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, " || "));
                                                                        append((yyval.node), (yyvsp[0].node));                           }
#line 2510 "y.tab.c"
    break;

  case 104:
#line 502 "yacc.y"
                                                                    {   (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                        append((yyval.node), newNode(TYPE_LITERAL, "("));
                                                                        append((yyval.node), (yyvsp[-1].node));
                                                                        append((yyval.node), newNode(TYPE_LITERAL, ")"));   }
#line 2519 "y.tab.c"
    break;

  case 105:
#line 506 "yacc.y"
                                                                    {   (yyval.node) = (yyvsp[0].node);                                  }
#line 2525 "y.tab.c"
    break;

  case 106:
#line 509 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LITERAL, " == "); }
#line 2531 "y.tab.c"
    break;

  case 107:
#line 510 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LITERAL, " > "); }
#line 2537 "y.tab.c"
    break;

  case 108:
#line 511 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LITERAL, " >= "); }
#line 2543 "y.tab.c"
    break;

  case 109:
#line 512 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LITERAL, " < "); }
#line 2549 "y.tab.c"
    break;

  case 110:
#line 513 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LITERAL, " <= "); }
#line 2555 "y.tab.c"
    break;

  case 111:
#line 514 "yacc.y"
                                                    {   (yyval.node) = newNode(TYPE_LITERAL, " != "); }
#line 2561 "y.tab.c"
    break;

  case 112:
#line 517 "yacc.y"
                                                                {   int type = getType((yyvsp[0].value));
                                                                    if (type == -1)
                                                                        yyerror("Variable no declarada previamente\n");
                                                                    if (type != TYPE_MAP) {
                                                                        yyerror("Asignación entre tipos incompatibles\n");
                                                                    }

                                                                    (yyval.node) = newNode(TYPE_EMPTY, NULL);
                                                                    append((yyval.node), newNode(TYPE_LITERAL, "getValue("));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[0].value)));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ","));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, (yyvsp[-2].value)));
                                                                    append((yyval.node), newNode(TYPE_LITERAL, ")")); }
#line 2579 "y.tab.c"
    break;


#line 2583 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 531 "yacc.y"


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

    /********** Enteros y Cadenas ***********/
    fprintf(tmpFile, "%s\n" , strCatFunction);
    fprintf(tmpFile, "%s\n" , strIntCatFunction);
    fprintf(tmpFile, "%s" , strDoubleCatFunction);
    fprintf(tmpFile, "%s\n" , strIntMultFunction);
    fprintf(tmpFile, "%s\n" , getCharToVar);

    /************** Listas ****************/
    fprintf(tmpFile, "%s\n", listStructure);
    fprintf(tmpFile, "%s\n", newListNodeL);
    fprintf(tmpFile, "%s\n", addListNodeL);
    fprintf(tmpFile, "%s\n", printListL);
    fprintf(tmpFile, "%s\n", removeFromListL);
    fprintf(tmpFile, "%s\n", printBackwards);

    /************** Colas ****************/
    fprintf(tmpFile, "%s\n", queueStruct);
    fprintf(tmpFile, "%s\n", queueOffer);
    fprintf(tmpFile, "%s\n", removeFromQueue);
    fprintf(tmpFile, "%s\n", printQueue);
    fprintf(tmpFile, "%s\n", peekQueue);

    /************** Mapas ****************/
    fprintf(tmpFile, "%s" , mapStructure);
    fprintf(tmpFile, "%s" , emptyMapNode);
    fprintf(tmpFile, "%s" , emptyMap);
    fprintf(tmpFile, "%s" , searchMapNode);
    fprintf(tmpFile, "%s" , newMapNode);
    fprintf(tmpFile, "%s" , getMapNode);
    fprintf(tmpFile, "%s" , addMapNode);
    fprintf(tmpFile, "%s" , removeMapNode);

    /************** Pilas ****************/
    fprintf(tmpFile, "%s" , stackNode);
    fprintf(tmpFile, "%s" , stackMotherNode);
    fprintf(tmpFile, "%s" , newStackNode);
    fprintf(tmpFile, "%s" , pushStack);
    fprintf(tmpFile, "%s" , printStack);
    fprintf(tmpFile, "%s" , peekStack);
    fprintf(tmpFile, "%s" , popStack);


}
