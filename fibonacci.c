#include <stdio.h>

int fibo(int n);

int main()
{
  int n;
  scanf("%d", &n);
  fibo(n);
}
void fibo(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }

  int fib1 = fibo(n - 1);
  int fib2 = fibo(n - 2);
  int fibonacci = fib1 + fib2;
  printf("%d \n", fibonacci);
}