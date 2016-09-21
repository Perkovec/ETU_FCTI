#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

int figureNum = 0;

int isPolygonPoint(Point point, Point *verticles, int length) {
  int i, j;
  bool is_inside = false;
  Point verticle_i, verticle_j;
  
  for (i = 0, j = length - 1; i < length; j = ++i) {
    verticle_i = verticles[i];
    verticle_j = verticles[j];
    if (((verticle_i.y >= point.y) != (verticle_j.y >= point.y)) &&
      (point.x <= (verticle_j.x - verticle_i.x) * (point.y - verticle_i.y) / (verticle_j.y - verticle_i.y) + verticle_i.x)) {
        is_inside = !is_inside;
      }
  }

  return is_inside;
}

void process1() {
  Point point;
  Point *verticles = calloc(3, sizeof(Point));

  verticles[0].x = -1.0f;
  verticles[0].y = -1.0f;

  verticles[1].x = -1.0f;
  verticles[1].y = 1.0f;

  verticles[2].x = 1.0f;
  verticles[2].y = 1.0f;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);

  if (isPolygonPoint(point, verticles, 3) == 1) {
    printf("Точка принадлежит фигуре 24\n");
  } else {
    printf("Точка не принадлежит фигуре 24\n");
  }
}

void process24() {
  Point point;
  Point *verticles = calloc(3, sizeof(Point));

  verticles[0].x = -1.0f;
  verticles[0].y = 0.0f;

  verticles[1].x = -1.0f;
  verticles[1].y = -1.0f;

  verticles[2].x = 0.0f;
  verticles[2].y = -1.0f;

  printf("Введите координаты точки: ");
  scanf("%f %f", &point.x, &point.y);

  if (isPolygonPoint(point, verticles, 3) == 1) {
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
    case 24:
      process24();
    break;
    default:
      printf("Я не нахожу фигуру с этим номером\n");
  }

  return 0;
}