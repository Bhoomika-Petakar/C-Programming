#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter numbers: ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if (a > b && a > c)
  {
    printf("%d is A Large Number", a);
  }
  else if (b > a && b > c)
  {
    printf("%d is A Large Number", b);
  }
  else
  {

    printf("%d is A Large Number", c);
  }
}