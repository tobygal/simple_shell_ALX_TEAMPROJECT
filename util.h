#ifndef _UTIL_H
#define _UTIL_H

#include <unistd.h>
#include "_string.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **_realloc2(char **ptr, unsigned int old_size, unsigned int new_size);

#endif