#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
* File: variadic_functions.h
* Auth: simphiwe mkhwanazi
* Desc: Header file containing prototypes for all functions
*      used in the 0x0F-variadic_functions directory.
*/

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);


/**
* struct checker - A new struct type defining a checker.
* @type: A type representing a data type.
* @f: A function pointer to a function that check
*  a data type corresponding to type.
*/

typedef struct checker
{
char *type;
void (*f)();
} checker;
#endif
