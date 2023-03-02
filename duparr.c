#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[100] , x , y , z , number , i;
	printf("please enter a size of your arr=" );
	scanf("%d",&number);

	for ( i = 0; i<number; i++)
	{
		printf("enter the number in your arr[%d]=",i);
		scanf("%d",&arr[i]);
	}

	for (i= 0; i <number; i++)
	{
		for(x=i+1 ; x<number ; x++)
		{
			if (arr[x]==arr[i])
			{
				for(y=x ; y<=number-1 ; y++)
				{
					arr[y]=arr[y+1];
				}
				number--;
				x--;
			}
		}
	}

	for ( i = 0; i <number; i++)
	{
		printf("your new arr list is arr[%d]=%d\n",i , arr[i]);
	}
	return 0;
}