#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b;
	scanf("%d%d",&a,&b);
	int ans=a, in=a; 

	for(int i = 1; i <b; i++)
    {
        for(int j = 1; j < a; j++)
        {
            ans += in;
        }
       in = ans;
    }

	printf("%d",ans);
	return 0;
}