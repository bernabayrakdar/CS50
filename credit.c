#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
long card_number = get_long("Enter card number: \n");
long card_no = card_number;
int numbers[20];
int sum1=0, sum2=0,num1,num2,n_num2,no,no2,i=0;

while(card_number > 0)
{
    num1 = (card_number%10);
    numbers[i] = num1;
    i++;
    sum1 = sum1 + num1;
    card_number = card_number/10;
    num2 = card_number%10;
     numbers[i] = num2;
     i++;
    if((num2*2) >= 10)
    {
          n_num2 = (num2*2)%10;         
          sum2 = sum2 + n_num2;
          n_num2 = (num2*2)/10;
          sum2 = sum2 + n_num2;      
    }
    else 
    {
         sum2 = sum2 + num2*2;
    }
    card_number = card_number/10;

    
}
int final = sum1 + sum2;

if((final % 10) != 0 || i<13)
{
    printf("INVALID\n");  
}

else
{
   if(numbers[i-2] == 3 &&( numbers[i-3] == 4 || numbers[i-3] == 7))
   {
       printf("AMEX\n");
   }
   else if(numbers[i-1] == 5 &&( numbers[i-2] == 1 || numbers[i-2] == 2 || numbers[i-2] == 3 || numbers[i-2] == 4 || numbers[i-2] == 5))
   {
       printf("MASTERCARD\n");
   }
   else if(numbers[i-1] == 4)
   {
       printf("VISA\n");
   }
   else
   printf("INVALID\n");
       


}











}



