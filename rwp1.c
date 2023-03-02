#include<stdio.h>
 int powe(int a,int b);
int main()
{
  int a , b;
  scanf("%d%d",&a,&b);
  printf("\n %d", powe(a, b));
  return 0;
}
int powe(int a, int b)
{
  
  if (b == 0)
    return 1;
  int answer = a;
  int in = a;
  int i, j;
  for(i = 1; i < b; i++)
  {
     for(j = 1; j < a; j++)
     {
        answer += in;
     }
     in = answer;
  }
  return answer;
}