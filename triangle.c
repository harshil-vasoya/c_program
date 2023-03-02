#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter side A : ");
	scanf("%d",&a);
	printf("Enter side B : ");
	scanf("%d",&b);
	printf("Enter side C : ");
	scanf("%d",&c);	
	if((a*a) == (b*b + c*c) || (b*b) == (a*a + c*c) || (c*c) == (b*b + a*a))
	{
		printf("right tringle");
	}
	else{
		if((a==b)&&(a==c)){
			printf("equilateral tringle");
		}
		else{
			if(a==b || b==c || a==c){
				printf("isosceles tringle");
			}
			else{
				printf("scalene tringle");
			}
		}
	}
}