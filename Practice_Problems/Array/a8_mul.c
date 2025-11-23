#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int arr1[n],arr2[n],mul[n];
    for(i =0;i<n;i++){
            scanf("%d",&arr1[i]);
    }
    for(i =0;i<n;i++){
            scanf("%d",&arr2[i]);
    }
    for(i = 0;i<n;i++){
            mul[i] = arr1[i]*arr2[2];
    }
    Printf("mul \n");
    for(i = 0;i<n;i++){
            printf("%d \n",mul[i]);
    }
    return 0;
}

