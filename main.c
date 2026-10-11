#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>

int main()
{


    //user authentication

    char correct_password[6];
    char user_password[6];
    int valid =0;

while(!valid){
    printf("Please type your password: (5 digits)\n");
    char temp_input[100];
    scanf("%99s", temp_input);
    int c;
    while((c = getchar()) != '\n'&& c!= EOF);
    if(strlen(temp_input)==5){
       valid=1;
       for(int i=0; i<5; i++){
        if(!isdigit(temp_input[i])){
            valid=0;
        break;
        }
       }
    }
   if(valid){
    strcpy(correct_password , temp_input);
   }
}
 if(!valid){
    printf("Error: Password MUST be 5 digits.\n");
    while(getchar() !='\n');
 }
    printf("Please rewrite your password: \n");
    scanf(" %s", user_password);
    if((strcmp(correct_password , user_password) ==0)){
        printf("welcome back\n");
    }
    else {
        printf("Wrong password");
    }
    return 0;
}
