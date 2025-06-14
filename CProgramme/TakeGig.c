#include <stdlib.h>
#include <stdio.h>

int main() {
    char goAhead;
    char freeGig;
    ulong gig = 1024 * 1024 * 1024;
    char *takenUpGig = NULL;

    printf("Warning, this program may cause your PC to crash or freeze. \nWould you like a Gigabyte of RAM to be taken away? \nEnter y to confirm: ");

    scanf(" %c", &goAhead);
    if (goAhead == 'y') {
            takenUpGig = malloc(gig);
            if (takenUpGig == NULL) {
                printf("Could not allocate memory. \nExiting...");
                return 3;
            }
    } else {
        return 1;
    }

    printf("Enter y to free the Gigabyte: ");

    getchar();
    if (freeGig == 'y') {
        free(takenUpGig);
        return 0;
    } else {
        printf("Why didn't you free me?");
        return 2;
    }
}