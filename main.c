#include <stdio.h>
#include <string.h>

#include "stack.h"

int main(void)
{
    Stack stack = init_stack(-6);

    char* string = "Hello World";
    char* string2 = "wassup";

    int string_length = strlen(string);
    int string2_length = strlen(string2);

    void* result = push(&stack, string, string_length);
    string = "wassup";
    result = push(&stack, string2, string2_length);
    

    string = pop(&stack, string2_length);
    string2 = pop(&stack, string_length);
    
    printf("String1: %s\nString2: %s\n", string, string2);
    return 0;
}