#include <stdio.h>

unsigned int getPrimitiveCheckSum(char parsee[]) {
  char *parseePtr = parsee;
  unsigned int sum = 0;
  int spicer = 125;
  while (*parseePtr != 0) {
    sum += (int) *parseePtr * spicer;
    if ((int) *parseePtr % 2 == 0) {
      spicer += (int) *parseePtr;
    } else {
      if (spicer >= (int) *parseePtr) {
        spicer -= (int) *parseePtr; 
      } else {
        spicer += (int) *parseePtr;
      }
    }
    parseePtr++;
  }
  return sum;
}

int comparePrimitiveCheckSums(char parsee1[], char parsee2[]) {
  if (getPrimitiveCheckSum(parsee1) == getPrimitiveCheckSum(parsee2)) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  char testString1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char testString2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
  printf("Checksum of Hello = %u\n", getPrimitiveCheckSum(testString1));
  printf("Checksum of World = %u\n", getPrimitiveCheckSum(testString2));
  
  printf("\nComparison of string Hello and World:\n");
  if (comparePrimitiveCheckSums(testString1, testString2) == 1) {
    printf("Probably same.\n");
  } else {
    printf("Probably not Same.\n");
  }
  
  printf("\nComparison string Hello with itself:\n");
  if (comparePrimitiveCheckSums(testString1, testString1) == 1) {
    printf("Probably same.\n");
  } else {
    printf("Probably not same.\n");
  }

  printf("\nComparison of string World with its checksum\n");
  printf("Checksum = %u\n", getPrimitiveCheckSum(testString2));
  if (97583 == getPrimitiveCheckSum(testString2)) {
    printf("Probably same.\n");
  } else {
    printf("Probably not same.\n");
  }
}
