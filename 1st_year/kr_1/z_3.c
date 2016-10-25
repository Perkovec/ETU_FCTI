#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char user_name[60];
int choosen_type = 0;
char custom_name[60];
int to_answer = 1;

void answer();
void want_repeat();

int main() {
  printf("Hello, type your full name: ");
  scanf("%s", user_name);
  printf("Hello, %s!\n", user_name);
  while (to_answer == 1) {
    answer();
    want_repeat();
  }

  printf("Bye!");
  return 0;
}

void answer() {
  printf("Choose from list subject that you love most of all:\n");
  printf("1)Math\n");
  printf("2)Physics\n");
  printf("3)Programming\n");
  printf("0)Custom\n");
  printf("Your choice: ");
  scanf("%d", &choosen_type);
  if (choosen_type == 0) {
    printf("Type custom subject: ");
    scanf("%s", custom_name);
  }

  switch(choosen_type) {
    case 1:
      printf("User %s loves %s most of all\n", user_name, "Math");
      break;
    case 2:
      printf("User %s loves %s most of all\n", user_name, "Physics");
      break;
    case 3:
      printf("User %s loves %s most of all\n", user_name, "Programming");
      break;
    default:
      printf("User %s loves %s most of all\n", user_name, custom_name);
  }
}

void want_repeat() {
  int first = 1;
  char *ans = calloc(60, sizeof(char));
  strcpy(ans, "test");
  while (strcmp(ans, "yes") != 0 && strcmp(ans, "no") != 0) {
    if (!first) {
      printf("Wrong answer, only 'yes' or 'no'\n");
    }
    printf("Do you want to choose subject again(yes/no): ");
    scanf("%s", ans);
    first = 0;
  }
  
  if (strcmp(ans, "yes") == 0) {
    strcpy(ans, "test");
    to_answer = 1;
  } else if (strcmp(ans, "no") == 0) {
    strcpy(ans, "test");
    to_answer = 0;
  }

  free(ans);
}