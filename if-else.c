#include <stdio.h>
int main()
{
  int age;
  printf("Enter age: ");
  scanf("%d", &age);
  if (age >= 18)
  {
    printf("Adult \n");
  }
  else if (age > 30 && age < 50)
  {
    printf("Mid-Age \n");
  }
  else
  {
    printf("Aged \n");
  }
}
