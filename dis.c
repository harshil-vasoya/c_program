#include <stdio.h>
int main(int argc, char const *argv[])
{
	int velocity , aecleration , time;
	float distance;

	printf("hellow users , this is a machine for get your distance \n");
	printf("so please enter your starting velocity v=");

	scanf("%d", &velocity);

	printf("and also enter your accleration a=");

	scanf("%d" , &aecleration);

	printf("and also enter your time of traveling t=");

	scanf("%d", &time);


	distance= velocity*time + (aecleration*time*time)/2;

	printf("your distance is %f" , distance);
	return 0;
}