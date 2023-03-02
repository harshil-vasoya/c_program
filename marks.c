#include <stdio.h>
int main(int argc, char const *argv[])
{
	int physic , maths , english , chem , hindi , average;
	printf("enter your makrs of physic =");
	scanf("%d ", &physic);

	printf("\nenter your makrs of maths =");
	scanf("%d", &maths);
	printf("enter your makrs of english =");
	scanf("%d", &english);
	printf("enter your makrs of chem =");
	scanf("%d", &chem);
	printf("enter your makrs of hindi =");
	scanf("%d", &hindi);
	 average= (physic*maths*english*chem*hindi)/5;

	 if(average<35)

	 	printf("aap fail ho congretulation");

	 else 
	 	{
	 		if ( 35<average >45)

	 	printf("aap pass ho chuke ho badhai ho ");
		 else 
		  { 
		 	if (45<average>60)
		  {
		 		
	 		printf("aap second classs me ho");
	 	}

	 	else{

	 		if(60<=average>70)
	 		{

	 	printf("aap frist class me ho");
	 		}
	else

		printf("aap to bahut hosiyar ho");
}
}
}
}
