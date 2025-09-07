# include <stdio.h>
// A program to check it upper or lower
int main() {
    char ch;
    printf("Enter:");
    scanf("%c",&ch);
    if(ch>='a' && ch>='z'){
        printf("lower_case");
    }else if(ch>='A'&& ch<='Z'){
        printf("upper_case");
    }else{
        printf("Not english character");
    }
    return 0;
}