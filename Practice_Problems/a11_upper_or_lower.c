# include <stdio.h>
int main() {
    char ch;
    printf("Enter:");
    scanf("%c",&ch);
    if(ch>='a' && ch>='z'){
        printf("lower_case");
    }else if(ch>='a'&& ch<='z'){
        printf("upper_case");
    }else{
        printf("Not english character");
    }
    return 0;
}