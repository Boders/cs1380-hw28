#ifndef SECURE_H

#define SECURE_H



#include <stdio.h>



int safe_copy(char *dst, size_t dst_sz, const char *src);

int safe_concat(char *dst, size_t dst_sz, const char *src);

void safe_memory_management_demo(void);



#endif
