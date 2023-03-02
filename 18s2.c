#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{	
	int n;
	char name[100];
	scanf("%s",name);
	n=strlen(name);
	printf("\ncharactor are:");
	for (int i = 0; i <n; ++i)
	{
		printf("\n %c",name[i] );
	}
	return 0;
}