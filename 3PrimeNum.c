#include <stdio.h>
int main()
{
  int n;
  int flag = 0;
  scanf("%d", &n);
  for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
  {
    printf("not a price number...");
  }
  else
  {
    printf("is not a prime number..");
    return 0;
  }
}