#include <stdio.h>
int main(int argc, char const *argv[])
{
	int hapto,month ;
	float total1=0,total2=0,par;
	printf("\n enter your mothly value:");
	scanf("%d",&hapto);
	printf("\n number of month:");
	scanf("%d",&month);
	printf("\n parsantag for one month:");
	scanf("%f",&par);	
	for (int i = 0; i <month; ++i)
	{		
		total1+=(total1)*(0.01*par)+hapto+hapto*(0.01*par);
	}
	printf("\n your return is %f",total1);
	return 0;
}
