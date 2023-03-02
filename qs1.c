#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int a[40],n,i;
	int qucickshort(int [], int ,int);
	
	printf("enter the size of arry:");
	scanf("%d",&n);
	printf("enter the elemnts :\n");

	for (int i = 0; i <n; ++i)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	qucickshort(a,0,n-1);
	printf("sorted elemnts are :");
	for (int i = 0; i < n; ++i)
	{
		printf("a[%d]=%d\n",i,a[i] );
	}
	
	
	return 0;

}
int qucickshort(int a[40],int first,int last)
{
	int i ,j ,pivot,temp,n;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<a[pivot] &&i<last)
				i++;
			while(a[j]>a[pivot] &&j>first )
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
		qucickshort(a,first,j-1);
		qucickshort(a,j+1,last);
	}
	return qucickshort(a,0,n-1);
	
}