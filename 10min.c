#include <stdio.h>

int main()
{
   int a, b, c, d, e, f, g, h, i, j;
   int min1, min2 , min3, min4 , min5 , min6 ,  min7;
    printf("enter ten mumbers : ");
    scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &g, &h, &i, &j , &f);
    
    if(a<b)
        min1 = a;
    else
        min1 = b;
        
    if(c<d)
        min2 = c;
    else
        min2 = d;
        
    if(e<f)
        min3 = e;
    else
        min3 = f;
        
    if(g<h)
        min4 = g;
    else
        min4 = h;
        
    if(i<j)
        min5 = i;
    else
        min5 = j;
        
    
    if(min1<min2)
        min6 = min1;
    else
        min6 = min2;
        
    if(min3<min4)
        min7 = min3;
    else
        min7= min4;
        
    if(min5 < min6 && min5 < min7)
	{
		printf("%d is smallest",min5);
	}
	else if(min6< min7)
	{
		printf("%d is smallest",min6);
	}
	else
	{
		printf("%d is smallest",min7);
	}


    if(a>b)
        min1 = a;
    else
        min1 = b;
        
    if(c>d)
        min2 = c;
    else
        min2 = d;
        
    if(e>f)
        min3 = e;
    else
        min3 = f;
        
    if(g>h)
        min4 = g;
    else
        min4 = h;
        
    if(i>j)
        min5 = i;
    else
        min5 = j;
        
    
    if(min1>min2)
        min6 = min1;
    else
        min6 = min2;
        
    if(min3>min4)
        min7 = min3;
    else
        min7= min4;
        
    if(min5 >min6 && min5 > min7)
    {
        printf("and %d  is bigest",min5);
    }
    else if(min6> min7)
    {
        printf("and %d is bigest",min6);
    }
    else
    {
        printf("and %d is bigest",min7);
    }   

    return 0;
}
	



