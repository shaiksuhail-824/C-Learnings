#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user_input,computer_input;
    char s[20][20] = {"rock","paper","scisssor"};
    printf("Enter the '0'for rock '1'for paper,'2 for scissor: ");
    scanf("%d",&user_input);
    srand(time(NULL));
    computer_input = rand()%(3)+0;
    if(user_input == 0 && computer_input == 1){
                 printf("'computer wins',user_choice:%s,computer_choise:%s",s[0],s[1]);
    }
    else if(user_input == 0 && computer_input == 2){
                    printf("'user wins',user_choice:%s,computer_choise:%s",s[0],s[2]);
    }else if(user_input == 1 && computer_input == 0){
                    printf("'user wins',user_choice:%s,computer_choise:%s",s[0],s[2]);
    }else if(user_input == 2 && computer_input == 0){
                    printf("'user wins',user_choice:%s,computer_choise:%s",s[0],s[2]);
    }else{
                    printf("please ensure that the user_input and computer_input not same");
    }

    return 0;