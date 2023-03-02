

#include <stdio.h>
#include <stdlib.h>
void display(int r){
    int x,y;
    
    for(x=-5;x<=5;x++)
    {  
        printf("\t\t\t");
        for(y=-5;y<=5;y++)
        {          
            if( x*x+y*y == 5*5) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int r 
    
    display(r);

    return 0;
}

