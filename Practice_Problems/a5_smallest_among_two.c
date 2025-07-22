# include <stdio.h>
//A program to print the smallest number of two.
int main() {
    int num1,num2;
    scanf("%d \n %d",&num1,&num2);
    if(num1>num2){
        printf("num2 is smaller");
    }else{
        printf("num1 is smaller");
    }
}