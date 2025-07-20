# include <stdio.h>
int main(){
    int sunday = 0;
    int snowing = 1;
    printf("%d \n",sunday  && snowing);
    int monday = 0;
    int raining = 0;
    printf("%d \n",monday || raining);
    int num1;
    printf("Enter the num:");
    scanf("%d",&num1);
    printf("%d \n",num1>5 && num1<100);

}