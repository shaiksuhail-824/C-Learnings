# include <stdio.h>
//A program to print the average of 3 numbers.
int main() {
    int num1,num2,num3;
    int sum;
    scanf("%d \n %d \n %d",&num1,&num2,&num3);
    sum = num1+num2+num3;
    printf("%d \n",sum/3);
    return 0;
}