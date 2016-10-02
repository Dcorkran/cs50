#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){
string userName = GetString();

int n = strlen(userName);


printf("%c",toupper(userName[0]));

for (int i = 0; i < n; i++){
    if (userName[i] == ' '){
        printf("%c", toupper(userName[i + 1]));
    }
       
       
}
    
    printf("\n");
    
}
