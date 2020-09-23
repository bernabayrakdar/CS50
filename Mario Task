# CS50X

#include <cs50.h>
#include <stdio.h>

int main(void)
{

int height;
do
{
  height = get_int("Enter height: \n");
} 

while(height < 1 || height > 8);

    int i,j;
    for(i=0; i<height; i++)
    {
        for(j=0; j<height; j++)
        {
            if(j == (height-1-i))
            {
                for(int k=j; k<height; k++)
                {
                    printf("#");     
                }  
                break;              
            }     
            else
            {        
                 printf(" ");
                
            }       
        }
        printf("\n");       
    }
}


