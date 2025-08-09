# include <stdio.h>

void spa(int a,int b,int *sum, int *prod, int *avg);

int main(){
     int a = 2,b = 3;
     int sum, prod, avg;
     spa(a,b,&sum,&prod,&avg);
     printf("%d %d %d",sum,prod,avg);
    return 0;
}

void spa(int a,int b,int *sum, int *prod, int *avg){

     *sum = a+b;
     *prod = a*b;
     *avg = (a+b)/2;

    printf("sum = %d,prod = %d , avg = %d",*sum,*prod,*avg);
}