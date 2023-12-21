#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int fhash;
	int f;

	fhash = 5381;
	while ((f = *str++))
		fhash = ((fhash << 5) + fhash) + f; /* fhash * 33 + c */

	return (fhash);
}
