#include <stdio.h>

float R;

struct Point2D {
  float x, y;
} point;

int main() {
  printf("Введите координаты точки: ");
  scanf("%f %f", &(point.x), &(point.y));

  printf("Введите радиус: ");
  scanf("%f", &R);

  if ((point.x * point.x + point.y * point.y) <= R * R) {
    printf("Точка входит в окружность\n");
  } else {
    printf("Точка не входит в окружность\n");
  }
  return 0;
}