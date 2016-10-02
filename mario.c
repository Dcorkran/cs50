#include <stdio.h>
#include <cs50.h>

int main(void)
{
 int height = 0;
 string blocks = "#";
 string spaces =" ";
 
     do {
     printf ("height:");
     height = GetInt();
     
     }
     while (height < 0 || height > 23);
        
     for (int pyramid = 0; pyramid < height; pyramid++){
         
         for (int a = pyramid+1; a < height; a++){
             printf("%s",spaces);
         }
         printf("#");
         for (int b = 0; b <= pyramid; b++){
             printf("%s",blocks);
         } 
         printf("\n");
     }
}