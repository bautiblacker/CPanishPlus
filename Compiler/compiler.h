#ifndef COMPILER_H
#define COMPILER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

FILE * tmpFile;
#define TMP_FILE_NAME ".comp_mid.tmp.c"

int yyparse();

void freeResources();

#endif