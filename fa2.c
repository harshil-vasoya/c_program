#include <stdio.h>

int main()
{
    int first, second, *pointer, *pointer2, total;
    
    printf("two integers to add\n");
    scanf("%d%d", &first, &second);
    
    pointer = &first;
    pointer2 = &second;
    
    total = *pointer+ *pointer2;
    
    printf("total of entered numbers = %d\n",total);
    
    return 0;
}