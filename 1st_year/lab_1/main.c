#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "main.h"

int figureNum = 0;
void process1() {
  Point point;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);

  if (point.x <= point.y && point.x >= -1) {
    printf("Точка принадлежит фигуре 1\n");
  } else {
    printf("Точка не принадлежит фигуре 1\n");
  }
}

void process2() {
  Point point;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);
}

void process18() {
  Point point;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);

  point.y = fabsf(point.y); 
  point.x = fabsf(point.x); 
  if (point.x >= point.y && point.x <= 1) {
    printf("Точка принадлежит фигуре 18\n");
  } else {
    printf("Точка не принадлежит фигуре 18\n");
  }
}

void process23() {
  Point point;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);

  if (fabsf(point.x) + fabsf(point.y) <= 1 && ((point.x <= 0 && point.y >= 0) || (point.x >= 0 && point.y <= 0))) {
    printf("Точка принадлежит фигуре 23\n");
  } else {
    printf("Точка не принадлежит фигуре 23\n");
  }
}

void process24() {
  Point point;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);

  if (point.x >= point.y && point.x <= 0) {
    printf("Точка принадлежит фигуре 24\n");
  } else {
    printf("Точка не принадлежит фигуре 24\n");
  }
}



int main() {
  printf("Введите номер фигуры: ");
  scanf("%d", &figureNum);

  switch(figureNum) {
    case 1:
      process1();
    break;
    case 18:
      process18();
    break;
    case 23:
      process23();
    break;
    case 24:
      process24();
    break;
    default:
      printf("Я не нахожу фигуру с этим номером\n");
  }

  return 0;
}