# include <stdio.h>
//A program to check if given character is digit or not.
int main() {
    int ch;
    scanf("%d",&ch);
    if(ch>97 && ch<123){
        printf("it is not digit");
    }else{
        printf("it is digit");
    }

    return 0;
//pending
}