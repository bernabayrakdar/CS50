#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool check_key(string k){

 for(int i=0;i<strlen(k);i++)
 {
     if(isdigit(k[i]))
     {
         return false;
     }
}
return true;
}

int main(int argc, string argv[])
{
    if(argc!=2 || check_key(argv[1]))
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    int k = atoi(argv[1]);
 
 string p_text = get_string("plaintext: ");
 
 int length = strlen(p_text);
 int c_text[length];
 int i,c; 
 for(i=0; i<length; i++)
 {
     c = p_text[i];
     c_text[i] = c+k;
 }
 printf("ciphertext: ");
 for(i=0; i<length; i++)
 {
     if(c_text[i] < 65 )
     {
        printf("%c",p_text[i]); 
     }
     else if(c_text[i] > 90 &&  c_text[i]< 97 )
     {
          int n = (c_text[i] - 90);
         c_text[i] = 64 + n;   
         printf("%c",c_text[i]); 

     }

    else if(c_text[i] > 122)
     {
         int m = (c_text[i] - 122);
         while(m>26)
         {
             m = m%26;
         }
         c_text[i] = 96+ m;   
         printf("%c",c_text[i]);        
     }
    
    else if(c_text[i] >= 65 || c_text[i] <= 90 ) 
     {
         printf("%c",c_text[i]);
     }

     else if(c_text[i] >= 97 || c_text[i] <= 122)
     {
         printf("%c",c_text[i]);       
     }     
 }
 
printf("\n");
}
