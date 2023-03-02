#include <stdio.h>
void p(int nu,int value);
void leftp(int n, int v);
void rightp(int n,int v);
void rp(int n, int v);

int main(){

	int n;
	printf("\nenter your number here : ");
	scanf("%d",&n);
	rp(n,n);


}
void p(int nu,int value)
{
	if(nu==0){return;}
	printf("%d ",value);
	p(nu-1,value);
}
void leftp(int n,int v){
	if(n==v){return;}
	printf("%d ",v);
	leftp(n,v-1);
}
void rightp(int n,int v){
	if(n==v){return;}
	printf("%d ",n+1);
	rightp(n+1,v);
}
void rp(int n,int v){
	
	leftp(n,v);
	printf(" ");
	p(2*n-1,n);
	printf(" ");
	rightp(n,v);

	printf("\n");

	if(n==1){
	
		return;
	}
	rp(n-1,v);
	leftp(n,v);
	printf(" ");
	p(2*n-1,n);
	printf(" ");
	rightp(n,v);
	printf(" ");
	printf("\n");
	
	}
