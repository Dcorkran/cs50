#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int minutes = 0;
  
    
    printf("minutes:");
    minutes = GetInt();
    int waterUse = (12 * minutes);
    printf("bottles:%d\n", waterUse);

    
}