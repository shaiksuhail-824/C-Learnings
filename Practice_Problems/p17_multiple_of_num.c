#include <stdio.h>
int main() {
    do{
        int num;
        printf("ENter the number");
        scanf("%d",&num);
        if(num%7==0){
            break;
        }

    }while(1);
    printf("Thank you");
    return 0;
}