#include <stdio.h>
#include <stdlib.h>

unsigned long largest_prime_factor(unsigned long n) {
  unsigned long largest_factor = 1;
  unsigned long p = 3;
  unsigned long div = n;
  // remove any even numbers
  while (div % 2 == 0) {
    largest_factor = 2;
    div = div/2;
  }

  // then look at odd numbers as prime numbers obviously can only be odd
  while (div != 1) {
    while (div % p == 0) {
      largest_factor = p;
      div = div/p;
    }
    p = p + 2;
  }

  return largest_factor;
}

int main(int argc, char** argv) {
  unsigned long factor;
  unsigned long i = 1;

  factor = largest_prime_factor(600851475143);
  printf("%ld\n", factor);

  return 0;
}
