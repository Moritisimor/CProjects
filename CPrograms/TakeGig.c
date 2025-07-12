#include <stdlib.h>
#include <stdio.h>

#define SUCCESS     0
#define NOMALLOC    1
#define NOFREE      2
#define MALLOCFAIL  3

int main() {
    char goAhead;
    char freeGig;
    unsigned long gig = 1024 * 1024 * 1024;
    char *takenUpGig = NULL;

    printf("Warning, this program may cause your PC to crash or freeze. \nWould you like a Gigabyte of RAM to be taken away? \nEnter y to confirm: ");
    scanf(" %c", &goAhead);
    if (goAhead == 'y') {
            takenUpGig = malloc(gig);
            if (takenUpGig != NULL) {
                for (unsigned long i = 0; i < gig; i += 4096) {
                    takenUpGig[i] = 0;
                }
            } else {
                printf("Could not allocate memory. \nExiting...\n");
                return MALLOCFAIL;
            }
    } else {
        return NOMALLOC;
    }

    printf("Enter y to free the Gigabyte: ");
    scanf(" %c", &freeGig);
    if (freeGig == 'y') {
        free(takenUpGig);
        printf("Memory freed succesfully\n");
        return SUCCESS;
    } else {
        printf("Freeing Memory anyway...\n");
        free(takenUpGig);
        return NOFREE;
    }
}