#include <stdio.h>
int main()
{
  char ch;
  printf("enter a character: ");
  scanf("%c", &ch);
  if (ch >= 'a' && ch <= 'z')
  {
    printf("Lowecase \n");
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    printf("UpperCase \n");
  }
  return 0;
}