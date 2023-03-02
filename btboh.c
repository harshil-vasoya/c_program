#include <stdio.h>
void fun(int a, int b);

int main(int argc, char const *argv[])
{
	int a , b ;

	scanf("%d%d",&a,&b);
	fun(a,b);
	return 0;
}
void fun(int a , int b)
{
	char arr[100] ;
	int i=0;
	while(a>0)
	{
		arr[i]=a%b;
		a=a/b;
		i++;	

	}
	for ( i =i-1; i >=0; i--)
	{
		printf("%c",arr[i]);
	}

}