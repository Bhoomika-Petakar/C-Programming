#include <stdio.h>
int main()
{
  int x;

  scanf("%d", &x);
  // printf("%s\n", number % 2 == 0 ? printf("Divisible") : printf("Not Divisible"));
  printf("%d \n", x % 2 == 0);
  return 0;
}