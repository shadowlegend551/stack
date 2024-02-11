#include <stdio.h>
#include <string.h>

#include "stack.h"

int main(void)
{
    Stack stack = init_stack(0);

    // First string.
    char* string = "Hello World";
	
	// Second string.
    char* string2 = "wassup";

    int string_length = strlen(string);
    int string2_length = strlen(string2);

    // Push first string.
    push(&stack, string, string_length);
	
	// Push second string.
    push(&stack, string2, string2_length);
    
    // Pop second string to first variable.
    string = pop(&stack, string2_length);
	
	// Pop first string to second variable.
    string2 = pop(&stack, string_length);
    
	// Display results.
    printf("String1: %s\nString2: %s\n", string, string2);
    return 0;
}