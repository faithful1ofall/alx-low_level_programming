#ifndef FUNCTION_H
#define FUNCTION_H

void print_name(char *name, void (*f)(char *));
/**
 * size_t - typedef for unsigned integer
 */
/*typedef unsigned int size_t;*/
/*void array_iterator(int *array, size_t size, void (*action)(int));*/
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_H */
