#include <stdio.h>
#include "get_name.h"
#include "print_str.h"

char* name;

int main() {
  name = get_name();
  print_name(name);
  
  return 0;
}