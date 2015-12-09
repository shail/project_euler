#include <stdio.h>
// zero is false
int isPalin(int number) {
  int reverse = 0;
  int temp = number;
  while (temp != 0) {
    reverse = reverse * 10;
    reverse = reverse + (temp % 10);
    temp = temp/10;
  }

  if (number == reverse) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char* argv[]) {
  int max;
  for (int i = 999; i > 100; i--) {
    for (int j = i; j > 100; j--) {
      int number = i * j;
      if (isPalin(number) && number > max) {
        max = number;
      }
    }
  }
  printf("Number: %d\n", max);
  return 0;
}
