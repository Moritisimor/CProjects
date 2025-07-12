// PizzaRechner.py rewritten in C!

#include <stdio.h>

#define PI 3.14159
#define SUCCESS 0
#define WRONGTYPE 1

int main() {
    double radius1, radius2, price1, price2;

    printf("Welcome to the Pizza Calculator! \nThis tool will tell you, which of two pizzas costs less per square cm.");

    printf("\nEnter the radius of the 1st pizza in cm: ");
    int returnRadius1 = scanf(" %lf", &radius1);

    printf("Enter the price of the 1st pizza: ");
    int returnRadius2 = scanf(" %lf", &price1);

    printf("Enter the radius of the 2nd pizza in cm: ");
    int returnPrice1 = scanf(" %lf", &radius2);

    printf("Enter the price of the 2nd pizza: ");
    int returnPrice2 = scanf(" %lf", &price2);

    if (returnPrice1 != 1 || returnPrice2 != 1 || returnRadius1 != 1 || returnRadius2 != 1) {
        printf("\n\n\nAn Error has occurred!\nYou either typed a string, a character or used , instead of . for floating point integers.\nExiting...\n");
        return WRONGTYPE;
    }

    double pricepersqcm1 = price1 / (PI * radius1 * radius1);
    double pricepersqcm2 = price2 / (PI * radius2 * radius2);

    if (pricepersqcm1 > pricepersqcm2) {
        printf("The 1st pizza costs %lf per square cm and offers more value per square cm.\n", pricepersqcm1);
    } else if (pricepersqcm1 < pricepersqcm2) {
        printf("The 2nd pizza costs %lf per square cm and offers more value per square cm.\n", pricepersqcm2);
    } else {
        printf("Both pizzas hold the same value at %lf per square cm.\n", pricepersqcm1);
    }

    return SUCCESS;
}
