#include <stdio.h>
//Write a program to take an input array of ‘n’ numbers and find out the sum of all the elements, product of all the elements and mean of the array.
int main(){
         int n;
         scanf("%d",&n);
         int arr[n];
         for(int i=0;i<n;i++){
                  scanf("%d",&arr[i]);         
        }
        int sum =0,prod=1,mean;
        for(int i=0;i<n;i++){
                  sum = sum +arr[i];
                  prod = prod*arr[i];    
        }
        mean = sum/n;
        printf("sum:%d prod:%d mean:%d \n",sum,prod,mean);
        return 0;
}
                
                  
