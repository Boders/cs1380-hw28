/*

File: main.c

Description: Main function for testing secure string functions defined in secure.c.

Name: Bode Reed

Date: 2026, 11, 20

*/



#include "secure.h"

#include <stdio.h>

#include <string.h>



int main(void) {

    char buffer[5];



    int result = safe_copy(buffer, sizeof(buffer), "Bode");

    printf("Successful copy: %s (return %d)\n", buffer, result);

    if (result != 0 || strcmp(buffer, "Bode") != 0) {

        printf("Copy test failed.\n");

        return 1;

    }



    result = safe_copy(buffer, sizeof(buffer), "Bode Reed");

    printf("Truncated copy: %s (return %d)\n", buffer, result);

    if (result != 1 || strcmp(buffer, "Bode") != 0) {

        printf("Truncation test failed.\n");

        return 1;

    }



    result = safe_copy(buffer, sizeof(buffer), NULL);

    printf("Rejected NULL: return %d\n", result);



    printf("Memory test:\n");

    safe_memory_management_demo();



    return 0;

}
