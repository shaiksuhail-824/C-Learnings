#include <stdio.h>
int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i = 0;i<n;i++){
              scanf("%d",&arr[i]);
    }
    int sum =0;
    for(int i = 0;i<n;i++){
                 sum = sum+arr[i];
    }
    int avg = sum/n;
    printf("The sum %d and avg %d \n",sum,avg);
    return 0;
}
