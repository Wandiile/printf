#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED (x) (void) (x)
#define BUFF_SIZE 1024

/*sizes */
#define SIZE_SHORT 1
#define SIZE_LONG 2

/* flags */
#define FLAG_SPACE 16
#define FLAG_PLUS 2
#define FLAG_MINUS 1
#define FLAG_ZERO 4
#define FLAG_HASH 8

/**
 * struct  format - struct op
 *
 * @form - The Format
 * @func -The function associated
 */
struct form
{
	char form;
	int (*func)( va_list, char[], int, int,int,int);
};

/** typedef struct form form_f - struct op
 * 
 * @form: The format.
 * @func: The function associated
 */
int _print(const char *format,...);
int print_handle (const char *form, int *i, var_list list,char buffer[], int prin_flags, int print_width, print_precession, int print_size);

/* specifiers*/

int print_flags(const char *format, int *i);
int print_width(const char *format, int *i, va_list list);
int print_precession(const char *format, int *i, va_list list);
int print_size(const char *format, int *i);
