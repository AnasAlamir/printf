#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...);
int print_c(char a, int *i);
int print_s(char *a, int *i);
int print_i(int a, int *i);
int print_u(unsigned int a, int *i);
int print_x(int a, int *i);
int print_X(int a, int *i);
int print_o(int a, int *i);
#endif
