#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char string[50];
	int sum;
	scanf("%s",string);
	for (int i = 0; string[i]!='\0'; ++i)
	{	
		sum=0;
		if(string[i]>='a' && string[i]<='z')
		{
			printf("%c",string[i]);

		}
		else if(string[i]>='0' && string[i]<='9')

		{

			
			
			for (int j = 0; j <string[i]-49; ++j)
			{
				printf("%c",string[i-1]);
			}
		
		}
	}
	return 0;
}