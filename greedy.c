#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float amountOfChange = 0;


    do{
        printf("How much change is owed? ");
        amountOfChange = GetFloat();
    }
    while (amountOfChange < 0);
    
    
    
    amountOfChange = amountOfChange * 100;
    
   
    int intChange = round(amountOfChange);
    
    

int numCoins = 0;



while (intChange / 25 >= 1)

{
    
    intChange = intChange - 25;
    numCoins = numCoins + 1;
}


while (intChange / 10 >= 1)

{
    
    intChange = intChange - 10;
    numCoins = numCoins + 1;
}


while (intChange / 5 >= 1)

{
    
    intChange = intChange - 5;
    numCoins = numCoins + 1;
}

while (intChange / 1 >= 1)

{
    
    intChange = intChange - 1;
    numCoins = numCoins + 1;
}



printf("%d\n",numCoins);
    
    
    
}