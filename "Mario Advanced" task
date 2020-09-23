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

    int i,j,k,m,counter=0;
    for(i=0; i<height; i++)
    {
        for(j=0; j<height; j++)
        {
            if(j == (height-1-i))
            {
                for(k=j; k<height; k++)
                {
                    printf("#"); 
                    counter++;
                    if (k == height-1)
                    {
                        printf("  ");
                        
                        for(m=0; m<counter; m++)
                        {
                            printf("#");
                        }                        
                    }
                }
                break;
            }     
            else
            {
                printf(" ");
            } 
 }
        printf("\n");   
        counter = 0;    

}
}



