#ifndef FUNCTION_POINTERS_
#define FUNCTION_POINTERS_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(in
t));
int int_index(int *array, int size, int (*cmp)(int));
int _puchar(char c):
#endif
