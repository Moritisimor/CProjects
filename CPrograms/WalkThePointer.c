#include <stdio.h>

int main(void) {
    int coolarray[6] = { 2, 2, 3, 4, 5, 6 };
    int *coolarrayptr;
    coolarrayptr = coolarray;

    for (int i = 0; i < 6; i++) {
        printf("The adress: %p holds the value: %d\n",(void *) coolarrayptr, *coolarrayptr);
        coolarrayptr++;
    }
    return 0;
}