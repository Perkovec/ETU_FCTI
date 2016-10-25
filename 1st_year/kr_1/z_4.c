#include <stdio.h>

int count = 0;

int main() {
  scanf("%d", &count);
  
  switch(count) {
    case 0:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      printf("апельсинов");
      break;
    case 1:
      printf("апельсин");
      break;
    case 2:
    case 3:
    case 4:
      printf("апельсина");
      break;
  }

  return 0;
}