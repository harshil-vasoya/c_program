#include <stdio.h>
int main(int argc, char const *argv[])


{
    int hour , munite ,second , ; 
    printf("enter your second");

    scanf("%d",&second);
    printf("\n");

    hour=second/3600;

    munite=(second -(3600)*hour)/60;

    second=(second-(3600)*hour - (60)*munite);

    printf("hours ,meetr , second is %d:%d:%d" , hour ,munite,second );

	return 0;
}