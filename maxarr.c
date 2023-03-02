#include <stdio.h>
int main(int argc, char const *argv[])
{
	int  i, number;
	double arr[100];
	printf("enter the number for size of your arr=");
	scanf("%d",&number);



	for (int i = 0; i <=number; i++)
	{
		printf("enter the number in arr[%d]", i);
		scanf("%lf\n",& arr[i]);
	}

	

	for ( i = 1; i <=number; i++)
	{
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	}


	printf("%lf is that largest number in your arr",arr[0]);

	return 0;
}