#include <stdio.h>

int main(void)
{
  int age;
  char first_name_initial;

  age = 98;
  first_name_initial = 'J';
  printf("Age = %d, Initial = %c\n", age, first_name_initial);
  age++;
  printf("Age = %d, Initial = %c\n", age, first_name_initial);
  age += 10;
  printf("Age = %d, Initial = %c\n", age, first_name_initial);
  age = age - 10;
  printf("Age = %d, Initial = %c\n", age, first_name_initial);
  printf("Char %c = %d\n", first_name_initial, first_name_initial);
  first_name_initial++;
  printf("Char %c = %d\n", first_name_initial, first_name_initial);
  first_name_initial -= 3;
  printf("Char %c = %d\n", first_name_initial, first_name_initial);
  first_name_initial = first_name_initial + 10;
  printf("Char %c = %d\n", first_name_initial, first_name_initial);
  return (0);
}
