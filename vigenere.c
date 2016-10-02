#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>



int main(int argc, string argv[]){

if (argc != 2) {
        printf("error\n");
        return 1;
    }


for (int i = 0; i < strlen(argv[1]); i++){
    
    if (isalpha(argv[1][i])==0){
    printf("error\n");
    return 1;
    }
    
}

   
  
    
string keyText = argv[1];
string text = GetString();
char cKey;
int keyLength = strlen(keyText);
int j = 0;
char c;
        
    for (int i = 0; i < strlen(text); i++){
                
        cKey = toupper(keyText[j % keyLength]) % 65;  
                    
        if (isupper(text[i])){
            c = text[i] + cKey; 
                        
            if (c > 90){
                printf("%c", ((c % 90) + 64));
                }
            else {
                printf("%c",c);
                }
            j = j + 1;
        } 
                     
                    else if (islower(text[i])){
                        c = text[i] + cKey;
                        int intC = text[i] + cKey;
                        if (intC > 122){
                            c = (intC % 122) + 96;
                        printf("%c", c);
                        }
                        else {
                        printf("%c",c);
                        }
                        j = j + 1;
                     } 
                    
                    else{
                        printf("%c", text[i]);
                       
                     } 
                }
        printf("\n");
        return 0;
        
        

    
}