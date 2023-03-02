#include <stdio.h>
int main()
{
    int array[1000],n;
    int temp;

    printf("enter the size of array n=");
    scanf("%d",&n);

    for (int i = 0; i <n; ++i)
    {
        printf("\nenter number in array[%d]=",i);
        scanf("%d",&array[i]);

    }
    
    for(int i = 0;i < n-1;i++){
        for(int j = 0; j<n-1-i;j++){
            if(array[j+1]<array[j]){
                temp = array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
                
            }
        }
    }
    
    for(int i = 0;i<n;i++){
        printf("\n array[%d]=%d",i,array[i]);
    }
    
    return 0;
}

