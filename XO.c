#include <stdio.h>
void design();
int draw();
int insert_C();
int block_step_user(int x,int y,int z);
int for_winig_move(int x,int y,int z);

char square[10]={'1','2','3','4','5','6','7','8','9'},mark_U,mark_C;
int i=0,a,b=0;
int main()
{
      printf("enter your chois from 'X' or 'O'\n");
      scanf("%c",&mark_U);
      if (mark_U=='x')
      {
          mark_C='o';
      }
      else 
      {
        mark_C='x';
      }

      do
      {     
            design();
            printf("Enter your %c in tic tac toe\n",mark_U );
            scanf("%d",&a);

            square[a-1]=mark_U;
            

            if (insert_C())
            {   design();
                printf("Computer is win ......\n");
                return 0;
            }
            else if (draw())
            {   design();
               printf("match is draw....\n");
                return 0;
            }
       
        }while(1);

    return 0;
}
void design()
{
    printf("\n\n   Tic Tac Toe\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[0], square[1], square[2]);

    printf("__|_|__\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[3], square[4], square[5]);

    printf("__|_|__\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[6], square[7], square[8]);

    printf("     |     |     \n\n");
}
int insert_C()
{

    if (square[4]=='5')
    {
        square[4]=mark_C;

        return 0;
    }
    else
    {
            // for the winnig move

           if (for_winig_move(0,1,2))
           {
               return 1;
           }
           else if (for_winig_move(3,4,5))
            {
                return 1;
            } 
            else if (for_winig_move(6,7,8))
            {
                return 1;
            }
            else if (for_winig_move(0,3,6))
            {
                return 1;
            }
            else if (for_winig_move(1,4,7))
            {
                return 1;
            }
            else if (for_winig_move(2,5,8))
            {
                return 1;
            }
            else if (for_winig_move(0,4,8))
            {
                return 1;
            }
            else if (for_winig_move(2,4,6))
            {
                return 1;
            }

            // for block the step of  user 

            else if (block_step_user(0,1,2))
            {
                return 0;
            }
            else if (block_step_user(3,4,5))
            {
                return 0;
            }
            else if (block_step_user(6,7,8))
            {
                return 0;
            }
            else if (block_step_user(0,3,6))
            {
                return 0;
            }
            else if (block_step_user(1,4,7))
            {
                return 0;
            }
            else if (block_step_user(2,5,8))
            {
                return 0;
            }
            else if (block_step_user(0,4,8))
            {
                return 0;
            }
            else if (block_step_user(2,4,6))
            {
                return 0;
            }
            else if(square[4]==mark_C)
            {
                 if(square[1]=='2' && square[7]=='8'){square[7]=mark_C;}

            else if(square[3]=='4' && square[5]=='6'){square[5]=mark_C;}

            else if(square[1]==mark_U && square[3]==mark_U && square[0]=='1'){square[0]=mark_C;}

            else if(square[5]==mark_U && square[7]==mark_U && square[8]=='9'){square[8]=mark_C;}

            else if(square[0]=='1'){square[0]=mark_C;}

            else if(square[2]=='3'){square[2]=mark_C;}

            else if(square[8]=='9'){square[8]=mark_C;}

            else if(square[6]=='7'){square[6]=mark_C;}
            }
        else
        {
             if(square[0]=='1'){square[0]=mark_C;}
             
        else if(square[2]=='3'){square[2]=mark_C;}
        else if(square[8]=='9'){square[8]=mark_C;}
        else if(square[6]=='7'){square[6]=mark_C;}
        }
    

    }
    return 0;
}

int block_step_user(int x, int y , int z)
{
   
    if (square[x]==mark_U && square[y]==mark_U && square[z]==(z+1)+'0')
    {
        square[z]=mark_C;
        return 1;
    }
    else if (square[y]==mark_U && square[z]==mark_U && square[x]==(x+1)+'0')
    {
       square[x]=mark_C;
       return 1;
    }
    else if (square[x]==mark_U && square[z]==mark_U && square[y]==(y+1)+'0')
    {
        square[y]=mark_C;
        return 1;
    }
    return 0;
}
int for_winig_move(int x,int y,int z)
{
    if (square[x]==mark_C && square[y]==mark_C && square[z]==(z+1)+'0')
    {
        square[z]=mark_C;
        return 1;
    }
    else if (square[y]==mark_C && square[z]==mark_C && square[x]==(x+1)+'0')
    {
       square[x]=mark_C;
       return 1;
    }
    else if (square[x]==mark_C && square[z]==mark_C && square[y]==(y+1)+'0')
    {
        square[y]=mark_C;
        return 1;
    }
    return 0;
}

int draw()
{
    for (int j = 0; j < 9; j++)
    {
        if (square[j]!=(j+1)+'0')
        {
            b=1;
        }
        else
        {
            return 0;
        }
    }
    return b;
}