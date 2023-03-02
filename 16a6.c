#include <stdio.h>
int main(int argc, char const *argv[])
{
	int hight[5],weight[5],counthight=0,counweight=0;
	
	
		printf("enter the hight of 1 person");
		for (int j= 0;  j<5; ++j)
		{
			printf("\n person[%d]=",j);
			scanf("%d",&hight[j]);

			if(hight[j]>=170)
				counthight++;
		
	}
	printf("enter the weight of 1 person");
		for (int j= 0;  j<5; ++j)
		{
			printf("\n person[%d]=",j);
			scanf("%d",&weight[j]);

			if(weight[j]<50)
				counweight++;
		}

		printf("\n %d person whos hight is greter than 170 \n %d person whos weight is under 50 ",counthight,counweight);
	return 0;
}