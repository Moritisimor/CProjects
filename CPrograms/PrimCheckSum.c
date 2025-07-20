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
    return;
  }
}

int main(int argc, char *argv[]) {
  printf("Decimal: %u\n", getPrimitiveCheckSum(argv[1]));
  printf("Hex: 0x%x\n", getPrimitiveCheckSum(argv[1]));
}
