/*

File: secure.c

Description: Defines functions from secure.h. These functions demonstrate safe string manipulation and memory management practices.

Name: Bode Reed

Date: 2026, 11, 20

*/



#include "secure.h"

#include <stdio.h>

#include <stdlib.h>



int safe_copy(char *dst, size_t dst_sz, const char *src) {

    if (dst == NULL || src == NULL || dst_sz == 0) {

        return 1;

    }



    size_t i = 0;



    while (i < dst_sz - 1 && src[i] != '\0') {

        dst[i] = src[i];

        i++;

    }



    dst[i] = '\0';



    if (src[i] != '\0') {

        return 1;

    }



    return 0;

}



int safe_concat(char *dst, size_t dst_sz, const char *src) {

    if (dst == NULL || src == NULL || dst_sz == 0) {

        return 1;

    }



    size_t i = 0;



    while (i < dst_sz && dst[i] != '\0') {

        i++;

    }



    if (i == dst_sz) {

        return 1;

    }



    size_t j = 0;



    while (i < dst_sz - 1 && src[j] != '\0') {

        dst[i] = src[j];

        i++;

        j++;

    }



    dst[i] = '\0';



    if (src[j] != '\0') {

        return 1;

    }



    return 0;

}



void safe_memory_management_demo(void) {

    int *p = malloc(sizeof(int));



    if (p == NULL) {

        printf("Memory allocation failed.\n");

        return;

    }



    *p = 10;

    printf("Value: %d\n", *p);



    free(p);

    p = NULL;

}



/*

Unsafe dangling pointer example:



int *p = malloc(sizeof(int));



if (p != NULL) {

    *p = 10;

    free(p);

}

*/
