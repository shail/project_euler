#include <stdio.h>
int main(int argc, char** argv) {
  int sum = 0;
  for (int i = 0; i < 1001; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  printf("The sum: %i\n", sum);
  return 0;
}
