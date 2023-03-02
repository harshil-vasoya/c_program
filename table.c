#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a , b ,n;
    scanf("%d",&n);
    for (int i = 1; i <=n; ++i)
    {
    	for (int y=1; y<=10 ; ++y)
    	{
    	  printf("\n %d * %d = %d", i ,y,y*i);	
    	}
    }
	return 0;
}