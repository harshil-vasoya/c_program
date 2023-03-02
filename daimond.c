#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	scanf("%d",&a);
	int k=a-1;
	for(int i=0;i<2*a-1;i++)
        {
            for(int j=0;j<2*a-1;j++)
            {
                if(i<a)
                {

                    if(j==(k-i) )
                    {
                    	printf("*");
                            
                    }
                    if(j!=(k-i)) printf(" ");
                    

                    if(j==(k+i) && i!=0)
                    {
                        printf("*"); 
                    }
                    if(j!=(k+i)) printf(" ");

                    
                    
                }
                if(i>(a-1))
                {
                    if (j==(i-k))
                    {
                       printf("*");
                       
                    }
                    else{
                    	printf(" ");
                    }
                    if(j==(2*a-i+k-2) && i!=2*a-2)
                    {
                        printf("*");
                       
                    }
                    if(j!=(2*a-i+k-2)) printf(" ");
                    
                }

            }
           printf("\n");
        }
	return 0;
}