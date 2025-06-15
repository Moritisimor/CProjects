// PizzaRechner.py rewritten in C!

#include <stdio.h>

#define PI 3.14159


int main() {
    float radius1, radius2, preis1, preis2, preisproqcm1, preisproqcm2;
    printf("Willkommen zum Pizza Rechner! \nDieses Tool soll Ihnen sagen, welche zweier Pizzen preiswerter ist.");

    // INPUT REGION

    printf("\nGeben Sie den Radius der ersten Pizza an: ");
    scanf(" %f", &radius1);

    printf("Geben Sie den Radius der zweiten Pizza an: ");
    scanf(" %f", &radius2);

    printf("Geben Sie den Preis der ersten Pizza an: ");
    scanf(" %f", &preis1);

    printf("Geben Sie den Preis der zweiten Pizza an: ");
    scanf(" %f", &preis2);

    return 0;
}