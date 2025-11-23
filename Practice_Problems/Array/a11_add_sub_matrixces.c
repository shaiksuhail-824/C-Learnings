#include <stdio.h>
int main(){
      printf("Enter the matrix size\n");
      int m,n;
      scanf("%d %d",&m,&n);
      int arr[m][n],arr1[m][n],sum[n][n],sub[n][n];
      printf("Enter the matrix_1 \n");
      for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                      scanf("%d",&arr[i][j]);
                      
                }
      }
      printf("Enter the matrix_2 \n");
      for(int i=0;i<n;i++){
                  for(int j=0;j<n;j++){ 
                           scanf("%d",&arr1[i][j]);
                  }
      }                  
      for(int i = 0;i<m;i++){
                for(int j=0;j<n;j++){
                         sum[i][j]=arr[i][j]+arr1[i][j];
                         sub[i][j]=arr[i][j]-arr1[i][j];
                }
      }
      printf("sum_of_matrixes\n");
      for(int i = 0;i<m;i++){
                for(int j = 0;j<n;j++){
                         printf("%d \n",sum[i][j]);
                        
                }
      }
      printf("sub_of_matrices \n");
      for(int i=0;i<m;i++){
                   for(int j=0;j<n;j++){
                            printf("%d \n",sub[i][j]);
                  }
      }
      return 0;
}
