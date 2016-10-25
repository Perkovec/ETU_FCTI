#include <stdio.h>

char c, input[100];
int delta = 0;
int length = 0;
int i = 0;

int main() {
  while (( c = getchar()) != '\n')
    input[length++] = c;
    
  input[length] = '\0';
  
  if (length > 3) {
    i = 2;
    while (i < length && delta < 8) {
      putchar(input[i]);
      i += 3;
      delta++;
    }
  }
  
  return 0;
}