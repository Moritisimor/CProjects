#include <stdio.h>
#define SUCCESS 0
#define INVALIDINPUT 1

void fibonacci(int iterations) {
  unsigned long long x = 1;
  unsigned long long y = 1;

  if (iterations >= 1) {
    printf("iteration 1 = 0\n");
  }
  if (iterations >= 2) {
    printf("iteration 2 = 1\n");
  }
  if (iterations >= 3) {
    printf("iteration 3 = 1\n");
  }
  
  for (int i = 4; i < iterations + 1 ; i++) {
    unsigned long long z = x + y;
    printf("iteration %d = %llu\n", i, z);
    x = y;
    y = z;
    if (i == 91) {
      printf("Cannot go above %d iterations due to bit limitations.\n", i);
      return;
    }
  }
}

int main(void) {
  int iterations;
  printf("Welcome to my fibonacci program! \nEnter the amount of iterations you would like: ");
  int iterationsMatch = scanf("%d", &iterations);
  if (iterationsMatch == 1) {
    fibonacci(iterations);
    return SUCCESS;
  } else {
    printf("Invalid input! \nExiting...\n");
    return INVALIDINPUT;
  }
}
