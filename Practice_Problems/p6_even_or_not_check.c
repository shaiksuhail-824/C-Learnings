# include <stdio.h>
int main() {
    printf("Enter the number: ");
    int num;
    scanf("%d",&num);
    printf("it is %d \n",num%2 == 0);
    
    return 0;
}