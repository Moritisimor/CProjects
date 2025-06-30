#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *unsafePtr = malloc(sizeof(char));
    while (1) {
        *unsafePtr = 'e';
        printf("%c", *unsafePtr);
        unsafePtr++;
        *unsafePtr = 'z';
        printf("%c", *unsafePtr);
        unsafePtr++;
        *unsafePtr = 'n';
        printf("%c", *unsafePtr);
        unsafePtr++;
        *unsafePtr = 'o';
        printf("%c", *unsafePtr);
        unsafePtr++;
        *unsafePtr = 'o';
        printf("%c", *unsafePtr);
        unsafePtr++;
        *unsafePtr = 'b';
        printf("%c", *unsafePtr);
        unsafePtr++;
    }
}