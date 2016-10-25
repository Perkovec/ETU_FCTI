#include <stdio.h>

int size = 0;
int i = 0;
int reversed = 0;
int central = 0;
int padding = 0;
int delta = -2;

void repeatPrint(char *ch, int count);
void printDiagonal(int main);

int main() {
  scanf("%d", &size);

  central = size + delta;
  for (i = 0; i < size; ++i) {
    padding = (size - central - 2) / 2;
    repeatPrint("*", padding);
    printDiagonal(1);
    repeatPrint("*", central);
    printDiagonal(0);
    repeatPrint("*", padding);
    printf("\n");
    if (central == 0 && !reversed) {
      reversed = 1;
      delta = 2;
      central = -2;
    }

    central += delta;
  }

  return 0;
}

void repeatPrint(char *ch, int count) {
  for (int d = 0; d < count; ++d) {
    printf("%s", ch);
  }
}

void printDiagonal(int main) {
  if (!reversed) {
    printf("%s", (main ? "-" : "+"));
  } else {
    printf("%s", (main ? "+" : "-"));
  }
}