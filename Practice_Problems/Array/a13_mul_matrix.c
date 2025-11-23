#include <stdio.h>

int main() {
    int m, n, p;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter columns of second matrix: ");
    scanf("%d", &p);
    if(n!=p){
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int arr1[n][p];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    int sum[m][p];  // result matrix will be m × p

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            sum[i][j] = 0;
            for (int k = 0; k < n; k++) {
                sum[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
