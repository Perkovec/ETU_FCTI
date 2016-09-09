#include <stdio.h>

#define NAME_SIZE 100

char input_name[NAME_SIZE];

char* get_name() {
  printf("Enter user name: ");
  fgets(input_name, NAME_SIZE, stdin);

  return input_name;
}