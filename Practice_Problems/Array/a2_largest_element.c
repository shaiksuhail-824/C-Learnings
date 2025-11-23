#include <stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    printf("The largest element is %d \n",max);

    return 0;
}