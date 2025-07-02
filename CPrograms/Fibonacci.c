#include <stdio.h>
#define SUCCESS 0
#define INVALIDINPUT 1

void fibonacci(int iterations) {
  unsigned long long x = 0;
  unsigned long long y = 1;

  if (iterations >= 1) {
    printf("iteration 1 = 0\n");
  }
  if (iterations >= 2) {
    printf("iteration 2 = 1\n");
  }
  
  for (int i = 3; i < iterations + 1 ; i++) {
    unsigned long long z = x + y;
    printf("iteration %d = %llu\n", i, z);
    x = y;
    y = z;
    if (i == 94) {
      printf("Cannot go above %d iterations due to bit limitations.\n", i);
      return;
    }
  }
}

int main(void) {
  int iterations;
  printf("Welcome to my fibonacci program! \nEnter the amount of iterations you would like: ");
  int iterationsMatch = scanf("%d", &iterations);
  if (iterationsMatch == 1 && iterations > 0) {
    fibonacci(iterations);
    return SUCCESS;
  } else {
    printf("Invalid input! \nDid you enter a positive integer? \nExiting...\n");
    return INVALIDINPUT;
  }
}
