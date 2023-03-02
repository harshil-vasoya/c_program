#include <stdio.h>
int main(int argc, char const *argv[])
{
	int killo; 
	float meter, centi , foot , inche;

	printf("please enter your killometters");
	scanf("%d", &killo);
	printf("\n");

	meter= (killo)*1000;

	centi= (killo)*100000;

	foot=(centi)/30.48;

	inche=(centi)/0.39;

	printf("your meter is %f , centi is %f, and foot is %f, and inche is %f" , meter ,centi , foot , inche);


	return 0;
}