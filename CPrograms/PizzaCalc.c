// PizzaRechner.py rewritten in C!

#include <stdio.h>

#define PI 3.14159
#define SUCCESS 0
#define WRONGTYPE 1

int main() {
    float radius1, radius2, price1, price2, pricepersqcm1, pricepersqcm2;

    printf("Welcome to the Pizza Calculator! \nThis tool will tell you, which of two pizzas costs less per square cm.");

    printf("\nEnter the radius of the 1st pizza in cm: ");
    int returnRadius1 = scanf(" %f", &radius1);

    printf("Enter the radius of the 2nd pizza in cm: ");
    int returnRadius2 = scanf(" %f", &radius2);

    printf("Enter the Price of the 1st pizza: ");
    int returnPrice1 = scanf(" %f", &price2);

    printf("Enter the price of the 2nd pizza: ");
    int returnPrice2 = scanf(" %f", &price2);

    if (returnPrice1 != 1 || returnPrice2 != 1 || returnRadius1 != 1 || returnRadius2 != 1) {
        printf("\n\n\nAn Error has occurred!\nYou either typed a string, a character or used , instead of . for floating point integers.\nExiting...\n");
        return WRONGTYPE;
    }

    pricepersqcm1 = price1 / (PI * radius1 * radius1);
    pricepersqcm2 = price2 / (PI * radius2 * radius2);

    if (pricepersqcm1 > pricepersqcm2) {
        printf("The 1st pizza offers more value per square cm.\n");
    } else {
        printf("The 2nd pizza offers more value per square cm.\n");
    }

    return SUCCESS;
}