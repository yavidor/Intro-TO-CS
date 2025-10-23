#include <stdio.h>

long long nextFib(long long *cache) {
  const long long newFib = *cache + *(cache + 1);
  *cache = *(cache + 1);
  *(cache + 1) = newFib;
  return newFib;
}

int main(void) {
  long long cache[] = {1, 1};
  for (int i = 3; i < 100; ++i) {
    printf("fib[%d]: %llu\n", i, nextFib(cache));
  }
  return 0;
}
