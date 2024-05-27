#include <stdio.h>

int fact(int n);

int main()
{
  int n;
  scanf("%d", &n);
  printf("The factorial of number %d id %d \n", n, fact(n));
}
int fact(int n)
{
  if (n == 1)
  {
    return 1;
  }
  int factnm1 = fact(n - 1);
  int factn = factnm1 * n;
  return factn;
}