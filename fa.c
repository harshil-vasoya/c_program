#include <stdio.h>
void sort(int n, int* pointers);
int main()
{
   
    int n;
    printf("enter the value for n=");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; ++i)
    {
        printf("\n arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    sort(n, arr);
  
    return 0;
}
void sort(int n, int* pointers)
{
    int i, j, t;  
    for (int i = 0; i < n; i++) {
  
        for (j = i + 1; j < n; j++) {
  
            if (*(pointers + j) < *(pointers + i)) {
  
                t = *(pointers + i);
                *(pointers + i) = *(pointers + j);
                *(pointers + j) = t;
            }
        }
    }
  
    for (i = 0; i < n; i++)
        printf("%d ", *(pointers + i));
}

