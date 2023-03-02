#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char harshil[50];
	int x=0 , number1=0,number2=0 ,count=0,i=0;
	scanf("%s",harshil);
	
	while(i<strlen(harshil))
	{
		if(harshil[i]>=48 && harshil[i]<=57 )

		{
			number1=harshil[i];
			if(harshil[i+1]>=48 && harshil[i+1]<=57){
			
			number2=harshil[i+1];
			break;
		}
		}
		i++;
	}
	count=(number2-48)+10*(number1-48);
	for(int j=0;j<count;j++)
	{
		printf("%c",harshil[0]);
		
	}

}
