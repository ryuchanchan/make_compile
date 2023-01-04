#ifndef COMPILER_H
#define COMPILER_H

#include <ctype.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
char *user_input;
void error_at(char *loc, char *fmt, ...);
#endif