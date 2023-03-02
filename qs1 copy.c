#include <stdio.h>
int qucickshort(int a[40],int first,int last)
{
	int i ,j ,pivot,temp;
	if(frist<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<pivot &&i<last)
				i++;
			while(a[j>pivot])
				j--;
			if(i<j){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		qucickshort(a,0,j-1);
		qucickshort(a,j+1,last);
	}
}
int main(int argc, char const *argv[])
{
	int a[40],n,i;
	printf("enter the size of arry:");
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)

	{
		scanf("%d",&a[i]);
	}
	qucickshort(a,0,n-1);
	printf("sorted elemnts are :");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",a[i] );
	}
	
	return 0;
}