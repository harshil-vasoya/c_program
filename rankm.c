
#include <stdio.h>
int a;
int main()
{
	// this scanf for how many time you want to find rank of matrix
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{ 
	//make two dimantaion arry indext start 0 and 0 means ary[row][colum]
	
	int ary[3][3],d,m1,m2,m3,m4,m5,m6,m7,m8,m9,c1;
	for(int j=0;j<3;j++)
	{
	for(int k=0;k<3;k++)
	{
	scanf("%d,",&ary[j][k]);
	}
	}
	// find detrnmination
	d=(ary[0][0]*(ary[1][1]*ary[2][2]-ary[1][2]*ary[2][1]))-(ary[0][1]*(ary[1][0]*ary[2][2]-ary[1][2]*ary[2][0]))+(ary[0][2]*(ary[1][0]*ary[2][1]-ary[1][1]*ary[2][0]));
	//calucalte for any part of matrix is 0?
	m1=ary[0][0]*ary[1][1]-ary[1][0]*ary[0][1];
	m2=ary[0][0]*ary[1][2]-ary[1][0]*ary[0][2];
	m3=ary[0][0]*ary[2][2]-ary[2][0]*ary[0][2];
	m4=ary[0][0]*ary[2][1]-ary[2][0]*ary[0][1];
	m5=ary[1][0]*ary[2][1]-ary[2][0]*ary[1][1];
	m6=ary[1][1]*ary[2][2]-ary[2][1]*ary[1][2];
	m7=ary[0][1]*ary[2][2]-ary[2][1]*ary[0][2];
	m8=ary[1][0]*ary[2][2]-ary[2][0]*ary[1][2];
	m9=ary[0][1]*ary[1][2]-ary[1][1]*ary[1][2];
	// cheak the first full row is 0?
	if (ary[0][0]==0 && ary[0][1]==0 && ary[0][2]==0)
	{
	// first row change with third row of the matrix;
	ary[0][0]=ary[2][0];
	ary[2][0]=0;
	ary[0][1]=ary[2][1];
	ary[2][1]=0;
	ary[0][2]=ary[2][2];
	ary[2][2]=0;
	}
	// cheak the second full row is 0?
	else if (ary[1][0]==0 && ary[1][1]==0 && ary[1][2]==0)
	{
	// second row change with third row of the matrix
	ary[1][0]=ary[2][0];
	ary[2][0]=0;
	ary[1][1]=ary[2][1];
	ary[2][1]=0;
	ary[1][2]=ary[2][2];
	ary[2][2]=0;
	}
	// cheak the third row is 0?
	 if (ary[2][0]==0 && ary[2][1]==0 && ary[2][2]==0)
	{
	// find the rank of matrix when third row is 0
	float p,q,r;
	p=ary[0][0]/ary[1][0];
	q=ary[0][1]/ary[1][1];
	r=ary[0][2]/ary[1][2];
	if (p==q && q==r)
	{
	printf("1\n");
	}
	else
	{
	printf("2\n");
	}
	}
	// find rank of matrix when any full row is none zero
	else if(d==0)
	{
	if (m1==0 || m2==0 || m3==0 || m4==0 || m5==0 || m6==0 || m7==0 || m8==0 || m9==0 )
	{
	printf("1\n");
	}
	else
	{
	printf("2\n");
	}
	}
	else
	{
	printf("3\n");
	}
	}
	return 0;
}