#include <stdio.h>
#include <math.h>

#define SUCCESS 0
#define FAILURE 1

double square(double x) {
    return x * x;
}
double vectorLength(double x, double y) {
    return sqrt(square(x) + square(y));
}

struct Space {
    double x;
    double y;
};

struct Vector {
    double x;
    double y;
    double length;
};

int main() {
    struct Space space1;
    space1.x = 0;
    space1.y = 0;

    struct Vector vectorA;
    vectorA.x = 45;
    vectorA.y = 75;
    vectorA.length = vectorLength(vectorA.x, vectorA.y);

    struct Vector vectorB;
    vectorB.x = 20;
    vectorB.y = 90;
    vectorB.length = vectorLength(vectorB.x, vectorB.y);

    space1.x += vectorA.x + vectorB.x;
    space1.y += vectorA.y + vectorB.y;

    printf("vectorA x = %lf \nvectorA y = %lf \nVectorA length = %lf\n", vectorA.x, vectorA.y, vectorA.length);
    printf("vectorB x = %lf \nvectorB y = %lf \nVectorB length = %lf\n", vectorB.x, vectorB.y, vectorB.length);
    printf("space1 x = %lf \nspace1 y = %lf\n", space1.x, space1.y);
    return SUCCESS;
}