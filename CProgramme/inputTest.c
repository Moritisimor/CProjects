#include <stdio.h>

int main() {
    int x;
    int *ptrx = &x;
    printf("Enter something and I will tell you the RAM Adress of it! \nInput: ");
    scanf("%d", &x);
    printf("This variable resides at: %p", (void *) ptrx);

    return 0;
}