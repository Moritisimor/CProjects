#include <stdio.h>

void showPrimitiveCheckSum(char parsee[], int length) { // Should not include null termination unless you want to print that 
  char *parseePtr = parsee;
  int sum = 0;
  for (int i = 0; i < length; i++) {
    printf("The character %c holds the ASCII value %d\n",*parseePtr, (int) *parseePtr);
    sum += (int) *parseePtr;
    parseePtr++;
  }
  printf("The sum of these ASCII characters combined equals : %d\n", sum);
}

int getPrimitiveCheckSum(char parsee[], int length) {
  char *parseePtr = parsee;
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += (int) *parseePtr;
    parseePtr++;
  }
  return sum;
}

int comparePrimitiveCheckSums(char parsee1[], char parsee2[], int length1, int length2) {
  if (getPrimitiveCheckSum(parsee1, length1) == getPrimitiveCheckSum(parsee2, length2)) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  char testString1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char testString2[] = {'W', 'o', 'r', 'l', 'd', '\0'};
  showPrimitiveCheckSum(testString1, 5);
  showPrimitiveCheckSum(testString2, 5);
  if (comparePrimitiveCheckSums(testString1, testString2, 5, 5) == 1) {
    printf("Probably same.\n");
  } else {
    printf("Probably not Same.\n");
  }
}
