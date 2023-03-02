#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	scanf("%d",&a);
	int k=a;
    int p=-2;
	for(int i=0;i<a+1;i++)
        {

            for(int j=0;j<2*a+1;j++)
            {

             if(i<2)
             {
                if(i==0 && j==k)printf("*");

                 if(j==k-i && i!=0) printf("*");
                 else printf(" ");
                 if(j==k+i  && i!=0)printf("*");
                 else printf(" ");
             } 
             if(i>1 && i<=a-2)
             {
                if((i==2)&& j==k-i)printf("*");
                if((i==2)&& j==k+i)printf("*");
                if((i==2)&& j==k)printf("*");
                if((j==k-i || j==k-p) &&i!=2 ) printf("*");
                else printf(" ");
                if((j==k+i || j==k+p)&& i!=2)printf("*");
                else printf(" ");
             }
             if(i==a-1)
             {
              if(j==k-i || j==k-p) printf("*");
                else printf(" ");
                if(j==k+i || j==k+p )printf("*");
                else printf(" ");  
             }

             if(i==a)printf(" *");
            
    }
        p++;
        printf("\n");
    }
}
    
