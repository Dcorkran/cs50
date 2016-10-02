#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    
    if (argc != 2){
        printf("error\n");
        return 1;
    }
    else{
        
        
        int k = atoi(argv[1]);
        string userText = GetString();
        char c;
        
        for (int i = 0; i < strlen(userText); i++){
            
            if (isalpha(userText[i])){
                
                 c = userText[i];
                 
                    if (c >= 'A' && c <= 'Z'){
                        
                        for(int j = 0; j < k; j++){
                           
                           if (c == 'Z'){
                               c = 'A';
                           }
                           else{
                            c = c+1;
                        }
                    }
                    printf("%c",c);
            }
            
            else {
                        
                        for(int j = 0; j < k; j++){
                           
                           if (c == 'z'){
                               c = 'a';
                           }
                           else{
                            c = c+1;
                        }
                    }
                    printf("%c",c);
            }
            
            
            }
            
            else{
                
                printf("%c",userText[i]);
               
                
            }
            
        
        
        
        
        
    }
    }
    printf("\n");
    return 0;
}