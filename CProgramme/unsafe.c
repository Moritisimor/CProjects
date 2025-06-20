#include <stdlib.h>
 // This program may crash your system.
int main() {
  while (1) {
    malloc(1024 * 1024);
  }
  return 0;
}
