#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
float dollars; 
int cents;
int counter = 0;
do
{
dollars = get_float("Enter cash: \n");
cents = round(dollars*100);     
}
while(cents <= 0.0 );
while(cents != 0 )
{
 if(cents >= 25)
    {
        cents = (cents-25);
        counter++;
    }
    else if(cents >= 10)
    {
        cents = (cents-10);
        counter++;
    }
    else if(cents >= 5)
    {        
        cents = (cents-5);
        counter++;  
    }
    else
    {    
        cents = (cents-1);
        counter++;  
    }  
}
printf("%i\\n",counter);
counter =0;

}

