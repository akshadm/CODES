
#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000],char1,char2;
    int  i;

    printf("Enter  the string : ");
    gets(string);

	printf("\nEnter a character which you want to replace: ");
    char1=getchar();
    getchar();
    printf("\nEnter the character to replace with  %c : ",char1);
    char2=getchar();
    printf("\nBefore replacing characters the string was :%s",string);

    for(i=0;string[i];i++)
	{
		if(string[i]==char1)
		{
		   string[i]=char2;

	    }

	}

    printf("\n\nAfter replacing characters the string became :%s",string);


    return 0;
}
