#ifndef FUNCTION_H
#define FUNCTION_H

void print_name(char *name, void (*f)(char *));

#ifndef SIZE_T_TYPE_H
#define SIZE_T_TYPE_H

typedef unsigned int size_t;

#endif /* SIZE_T_TYPE_H */

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_H */
