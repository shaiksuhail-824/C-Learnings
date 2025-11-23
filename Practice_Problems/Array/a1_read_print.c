// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements: \n");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array elements are:");
//     for(int i =0;i<n;i++){
//         printf("%d \n",arr[i]);
//     }
 
// }
// max and min
// # include <stdio.h>
// int main(){
//     int a[100],max,min;
//     for(int i=0;i<5;i++){
//         scanf("%d",&a[i]);
//     }
//     max = min = a[0];
//     for(int i =0;i<5;i++){
//                  if(max<a[i]){
//                     max = a[i];
//                  }
//                  if(min>a[i]){
//                     min = a[i];
//                  }
//     }
//     printf("max=%d,min=%d \n",max,min);
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int arr[100];
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=5;i>0;i--){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int arr[100],key,found;
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&key);
//     for(int i=0;i<5;i++){
//         if(key==arr[i]){
//              found =1;
//             printf("yes");
//             break;
//         }
//         }
//     if(!found){
//         printf("not found");
//     }
    
//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int arr[100],even=0,odd=0;
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<5;i++){
//       if(arr[i]%2==0){
//         even = even+arr[i];
//       }else{
//         odd = odd+arr[i];
//       }
//     }
//     printf("%d %d",even,odd);
    
//     return 0;
// }
# include <stdio.h>
int main(){
    int m,n;
    int arr[m][n],sum[m][n],arr1[m][n];

    scanf("%d %d",&m,&n);
       for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
                 scanf("%d",&arr[i][j]);
        }
    }
       for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
                 scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            sum[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("%d",sum[i][j]);
        }
    printf("\n")
    }
    return 0;
}