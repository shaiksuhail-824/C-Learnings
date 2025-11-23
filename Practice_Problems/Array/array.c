//1.Write a program to take an input array of ‘n’ numbers and
// find out the sum of all the elements, product of all the elements and mean of the array.
// #include <stdio.h>
// int main(){
//          int n;
//          printf("Enter the array size:");
//          scanf("%d",&n);
//          int arr[n];
//         printf("Enter the array:");
//          for(int i=0;i<n;i++){
//                   scanf("%d",&arr[i]);         
//         }
//         int sum =0,prod=1,mean;
//         for(int i=0;i<n;i++){
//                   sum = sum +arr[i];
//                   prod = prod*arr[i];    
//         }
//         mean = sum/n;
//         printf("sum:%d prod:%d mean:%d \n",sum,prod,mean);
//         return 0;
// }

//2.Write a program to take an input array of ‘n’ numbers and print the second smallest 
//and second largest element of all elements in the array.
// #include <stdio.h>
// int main() {
//     int n, i;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     if(n < 2) {
//         printf("At least 2 elements are required!\n");
//         return 0;
//     }

//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Initialize smallest and largest
//     int smallest, second_smallest, largest, second_largest;
//     smallest = second_smallest = largest = second_largest = arr[0];

//     // Find smallest and largest first
//     for(i = 1; i < n; i++) {
//         if(arr[i] < smallest)
//             smallest = arr[i];
//         if(arr[i] > largest)
//             largest = arr[i];
//     }

//     // Set initial values for second smallest & second largest
//     second_smallest = largest;
//     second_largest = smallest;

//     for(i = 0; i < n; i++) {
//         if(arr[i] > smallest && arr[i] < second_smallest) {
//             second_smallest = arr[i];
//         }
//         if(arr[i] < largest && arr[i] > second_largest) {
//             second_largest = arr[i];
//         }
//     }

//     if(smallest == second_smallest)
//         printf("No distinct second smallest element.\n");
//     else
//         printf("Second smallest = %d\n", second_smallest);

//     if(largest == second_largest)
//         printf("No distinct second largest element.\n");
//     else
//         printf("Second largest = %d\n", second_largest);

//     return 0;
// }
 //1. Write a program to find the addition and subtraction for the given 
 //two matrices of sizes ‘M x N’ and ‘P x Q’ respectively 
#include <stdio.h>

int main() {
    int M, N, P, Q;

    printf("Enter the size of first matrix (M N): ");
    scanf("%d %d", &M, &N);

    printf("Enter the size of second matrix (P Q): ");
    scanf("%d %d", &P, &Q);

    // Check if addition/subtraction possible
    if (M != P || N != Q) {
        printf("Addition and subtraction not possible (matrix sizes not same)\n");
        return 0;
    }

    int arr[M][N], arr1[P][Q], sum[M][N], sub[M][N];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < Q; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Perform addition and subtraction
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum[i][j] = arr[i][j] + arr1[i][j];
            sub[i][j] = arr[i][j] - arr1[i][j];
        }
    }

    printf("\nSum of matrices:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction of matrices:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//2. Write a program to find the multiplication of the given 
//two matrices of sizes ‘M x N’ and ‘P x Q’ respectively.
// #include <stdio.h>
// int main() {
//     int m, n, p,q;
//     printf("Enter rows and columns of first matrix: ");
//     scanf("%d %d", &m, &n);
//     printf("Enter rows and columns of second matrix: ");
//     scanf("%d %d", &p, &q);
//     if(n!=p){
//         printf("Matrix multiplication not possible\n");
//         return 0;//If you didn’t use return 0;, the program would still 
//         //continue to the multiplication part,which would cause wrong results or even runtime errors.
//     }
//     int arr[m][n];
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int arr1[p][q];
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < p; i++) {
//         for (int j = 0; j < q; j++) {
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     int sum[m][q]; 

//     // Matrix multiplication
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < q; j++) {
//             sum[i][j] = 0;
//             for (int k = 0; k < n; k++) {
//                 sum[i][j] += arr[i][k] * arr1[k][j];
//             }
//         }
//     }

//     printf("Resultant matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < q; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//3. Write a program to find the transpose of a matrix.
// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter rows and columns of matrix: ");
//     scanf("%d %d", &m, &n);
//     int arr[m][n],T[n][m];
//     printf("Enter elements of matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//        }
// }
//       for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             T[j][i]=arr[i][j];
//         }
        
//       }
//       printf("The transpose of matrix:\n");
//       for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//                    printf("%d\t",T[i][j]);


//         }
//         printf("\n");
//       }
//       return 0;
// }