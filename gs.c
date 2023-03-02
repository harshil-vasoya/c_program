#include<stdio.h>
void main(){
	int salary,gs;
	printf("-----------------Calculate GS-----------------\n");
	printf("Enter Your Salary : ");
	scanf("%d",&salary);
	if((salary>=10000)&&(salary<20000)){
		gs=salary+(salary*0.2)+(salary*0.8);
		printf("Your GS  is : %d",gs);
	}
	else{
		if((salary>=20000)&&(salary<30000)){
			gs=salary+(salary*0.25)+(salary*0.9);
			printf("Your GS  is : %d",gs);
		}
		else{
			if((salary>=20000)&&(salary<30000)){
				gs=salary+(salary*0.25)+(salary*0.9);
				printf("Your GS  is : %d",gs);
			}
			else{
				if(salary<10000){
					printf("Enter valid Salary!!!!!");
				}
			}
		}
	}
}




 