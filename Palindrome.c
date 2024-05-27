#include <stdio.h>

int length(char s[]);
void palindrome(char s[]);
int main()
{
  chars s[20];

  printf("Enter a String:  ");
  gets(s);

  length(s);

  // for (j = 0; s[j] != '\0'; j++)
  //   ;
  // i = 0;
  // j--;
  // while (i < j)
  // {
  //   if (s[i] != s[j])
  //   {
  //     flag = 1;
  //     break;
  //   }
  //   i++;
  //   j--;
  // }
  // if (flag == 1)
  // {
  //   printf("Not a PAlindrome..");
  // }
  // else
  // {
  //   printf("Palindrome");
  // }
}

int length(char s[])
{
  int count;
  for (int i = 0; s[i] != '\0'; i++)
  {
    count++;
  }
  printf(count);
}
