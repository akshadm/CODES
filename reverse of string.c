#include<stdio.h>
int main()
{
    //initializing variables
char str[100], rev[100];
int i , j , count = 0;
scanf("%s", str);
printf("The string is: %s\n", str);
   //finding string length
int n = strlen(str);
printf("the length of string is %d", n);
  j = n - 1;

  //reversing the string by swapping
  for (i = 0; i < n; i++)
  {
    rev[i] = str[j];
    j--;
  }

  printf("\nNew string formed after reverse is: %s", rev);
}



