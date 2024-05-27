#include <stdio.h>
void doWorks(int a, int b, int *sum, int *pord, int *avg);

int main()
{
  int a = 3, b = 5;
  int sum, pord, avg;
  doWorks(a, b, &sum, &pord, &avg);
  printf("sum=%d,prod=%d,avg=%d\n", sum, pord, avg);
  return 0;
}
void doWorks(int a, int b, int *sum, int *pord, int *avg)
{
  *sum = a + b;
  *pord = a - b;
  *avg = (a + b) / 2;
}
