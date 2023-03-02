#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,k,i,x;
	scanf("%d",&n);
	   for(i=1;i<=2*n-1;i++)
       { x=n;
           if(i<=n)
           {
               for(j=1;j<2*n;j++)
               {
                   printf("%d ",x);
                   if(i>j)
                   {
                       x--;
                   }
                   if(i+j>=2*n)
                   {
                       x++;
                   }
               }
           }
           printf("\n");
       }
	return 0;
}