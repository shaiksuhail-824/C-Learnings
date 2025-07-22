# include <stdio.h>
// A program to check if a given number is prime or not.
int main() {
    int num;
    scanf("%d",&num);
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count=count+1;
        }
    }
    if(count==2){
        printf("It is prime number \n");
    }else{
        printf("It is not prime number \n");
    }
    return 0;


}