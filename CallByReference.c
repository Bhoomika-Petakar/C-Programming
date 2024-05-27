#include <stdio.h>

void square(int *n);

int main()
{
  int num = 4;
  square(&num);
  printf("number is: %d \n", num);
}
void square(int *n)
{
  *n = (*n) * (*n);
  printf("%d \n", *n);
}
