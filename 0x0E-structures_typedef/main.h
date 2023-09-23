#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int length(char *string);
char getstring(char *new, char *old);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
