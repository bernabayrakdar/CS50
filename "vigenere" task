#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 bool check_key(string k) 
{
    for(int i=0; i<strlen(k); i++)
 {
     if(isalpha(k[i]))
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
        printf("Usage: ./vigenere key\n");
        return 1;
    }

string key =  argv[1];
string p_text = get_string("plaintext: ");
int c_text[strlen(p_text)];
int words[strlen(key)];

int i,c,k=0;
for(i=0; i<strlen(key); i++)
{
    if( key[i] >= 'a' && key[i] <= 'z')
    {
        c = (key[i] - 97);
        words[i] = c;
      //printf("%d ",words[i]);
    }
    else if (key[i] >= 'A' && key[i] <= 'Z')
    {
        c = (key[i] - 65);
        words[i] = c;    

    }
}
printf("ciphertext: ");
for(i=0; i<strlen(p_text); i++)
{
    if(p_text[i] < 65)
    {
        printf("%c",p_text[i]);
    }
   else
   { 
        c_text[i] = words[k] + p_text[i];
        // printf("%d ",p_text[i]);
        // printf("%c",c_text[i]);
        k++;
    
    if(k == strlen(key))
    {
        k=0;
    }

   if(p_text[i] >= 97 && p_text[i] <= 122 && c_text[i] > 122)
   {
       int m = (c_text[i] - 122);
         while(m>26)
         {
             m = m%26;
         }
         c_text[i] = 96 + m;   
         printf("%c",c_text[i]);   
   }
   else if( p_text[i] >= 65 && p_text[i] <= 90 && c_text[i] > 90)
   {
       int m = (c_text[i] - 90);
         while(m>26)
         {
             m = m%26;
         }
         c_text[i] = 64 + m;   
         printf("%c",c_text[i]);   
   }
   else 
   {    
    printf("%c",c_text[i]);
   }
}
}
printf("\n");

}
