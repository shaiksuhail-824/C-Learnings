# include <stdio.h>
// check if a number is ddivisible by 2 or not?
// True = 1 , False = 0
int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d",&num);
    printf("%d\n ",num%2 == 0);
    return 0;

}