#include <stdio.h>

void showPrimitiveCheckSum(char parsee[]) { 
  char *parseePtr = parsee;
  int sum = 0;
  int spicer = 125;
  while (1) {
    if (*parseePtr != 0) {
      printf("The character %c holds the ASCII value %d\n",*parseePtr, (int) *parseePtr);
      sum += (int) *parseePtr * spicer;
      spicer += 25;
      parseePtr++;
    } else {
      break;
    }
  }
  printf("The spiced-up checksum of these ASCII characters combined equals: %d\n", sum);
}

int getPrimitiveCheckSum(char parsee[]) {
  char *parseePtr = parsee;
  int sum = 0;
  int spicer = 125;
  while (1) {
    if (*parseePtr != 0) {
      sum += (int) *parseePtr * spicer;
      spicer += 25;
      parseePtr++;
    } else {
      break;
    }
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
  char testString1[] = {'a', 'b', 'c', 'd', 'e', '\0'};
  char testString2[] = {'e', 'd', 'c', 'b', 'a', '\0'};
  showPrimitiveCheckSum(testString1);
  showPrimitiveCheckSum(testString2);
  printf("\nComparison of string abcde and edcba:\n");
  if (comparePrimitiveCheckSums(testString1, testString2) == 1) {
    printf("Probably same.\n");
  } else {
    printf("Probably not Same.\n");
  }
  printf("\nComparison string abcde with itself:\n");
  if (comparePrimitiveCheckSums(testString1, testString1) == 1) {
    printf("Probably same.\n");
  } else {
    printf("Probably not same.\n");
  }
}
