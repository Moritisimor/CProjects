#include <stdio.h>

unsigned int getPrimitiveCheckSum(char parsee[]) {
  char *parseePtr = parsee;
  char *harvester = parsee;
  unsigned int sum = 0;
  unsigned int spicerSum = 0;
  unsigned int spicer = 0;
  while(*harvester != 0) {
    spicer += *harvester;
    spicer /= 4;
    harvester++;
  }
  while (*parseePtr != 0) {
    sum += (int) *parseePtr * spicer;
    if ((int) *parseePtr % 2 == 0) {
      spicer = spicer >> (int) *parseePtr / 2;
    } else {
      spicer = spicer << (int) *parseePtr * 2; 
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

int main(int argc, char *argv[]) {
  int currentIndex = 1;
  argv++;
  while (*argv != NULL) {
    printf("Current String: %s\n", *argv);
    printf("Decimal: %u\n", getPrimitiveCheckSum(argv[currentIndex]));
    printf("Hex: 0x%x\n", getPrimitiveCheckSum(argv[currentIndex]));
    currentIndex++;
    argv++;
  }
}
