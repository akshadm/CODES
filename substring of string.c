#include <stdio.h>
void main()
{
   char str[100], substr[100];
   int start, sublen, c = 0;

   printf("Input the main string:  ");
   gets(str);

   printf("Input the starting point of substring: ");
   scanf("%d", &start);

   printf("Input the length of substring: ");
   scanf("%d", &sublen);

   while (c < sublen)
   {
      substr[c] = str[start+c-1];
      c++;
   }
   substr[c] = '\0';

   printf("The substring retrieve from the string is : %s", substr);

}
