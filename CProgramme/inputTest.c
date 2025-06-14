#include <stdio.h>

int main() {
    int x;
    int *ptrx = &x;
    printf("Input: ");
    scanf("%d", &x);
    printf("%p", (void *) ptrx);

    return 0;
}