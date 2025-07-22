# include <stdio.h>
//A program to check if given character is digit or not.
int main() {
    char a;
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("it is digit");

    }else{
        printf("it is not digit");
    }

    return 0;
}