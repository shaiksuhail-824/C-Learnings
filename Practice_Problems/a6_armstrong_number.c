# include <stdio.h>
# include <math.h>
//A program to check if a given number is Armstrong number or not.
int main() {
    int num;
    scanf("%d",&num);
    int sum = 0;
    int i = num;
    int a;
    while(i>0){
        a = i%10;
        sum = sum+ pow(a,3);
        i=i/10;
    }
    if(sum==num){
        printf("It is armstrong number \n");
    
     }else{
        printf("It is not armstrong number \n");
     }
   
    return 0;

}