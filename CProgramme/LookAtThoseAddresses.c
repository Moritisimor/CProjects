#include <stdio.h>

int main() {
    int v = -1;
    int* ptrv = &v;
    int w = 0;
    int* ptrw = &w;
    int x = 1;
    int* ptrx = &x;
    int y = 2;
    int* ptry = &y;
    int z = 3;
    int* ptrz = &z;

    printf("%p \n", (void *) ptrv);
    printf("%p \n", (void *) ptrw);
    printf("%p \n", (void *) ptrx);
    printf("%p \n", (void *) ptry);
    printf("%p \n", (void *) ptrz);

    return 0;
}