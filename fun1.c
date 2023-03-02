#include <stdio.h>
#include<string.h>
int i=0;
int n=0 ,x=0 ,number1=0 ,j=0, number2=0 , count=0;
char harshil[50];
int fun(int i);
int main(int argc, char const *argv[])
{	
	char harshil[50];
	scanf("%s",harshil);
	while(i<strlen(harshil))
	{
		if(harshil[i]>=48 && harshil[i]<=57 )
		{

		}
		else{ 
			while(j<=strlen(harshil))
	{
		if(harshil[j+1]>=48 && harshil[j+1]<=57 )

		{
			number1=harshil[i];
			if(harshil[j+2]>=48 && harshil[j+2]<=57){
			
			number2=harshil[j+2];
			break;
		}
		}
		j++;
	}
	count=(number2-48)+10*(number1-48);
	
			
			while(x<=count)
			{
				printf("%c",harshil[i] );
				x++;
			}

		}
		i++;
	}
	

	
	
	return 0;
}


