#include <stdio.h>

long long a_ceil(long a, long b) {
  long c = a / b;
  if (a % b > 0)
    c++;
  return c;
}

long cols, rows, size;

int main() {
  scanf("%ld %ld %ld", &cols, &rows, &size);
  printf("%llu\n", a_ceil(cols, size) * a_ceil(rows, size)); // use %I64d for windows
  return 0;
}