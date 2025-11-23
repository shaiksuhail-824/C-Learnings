#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr1[n],arr2[n],sum[n];
    for(i =0;i<n;i++){
            scanf("%d",&arr1[i]);
    }
    for(i =0;i<n;i++){
            scanf("%d",&arr2[i]);
    }
    for(i = 0;i<n;i++){
            sum[i] = arr1[i]+arr2[i];
    }
    Printf("sum \n");
    for(i = 0;i<n;i++){
            printf("%d \n",sum[i]);
    }
    return 0;
}
