// # include <stdio.h>
// int main(){
//     int rows = 10;
    // for(int i = 1;i<=rows;i++){
    //     for(int j = 1;j <= rows-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k <= 2*i-1;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i = rows;i>=1;i--){
    //     for (int j = 1;j<=rows-i;j++){
    //         printf(" ");
    //     }
    //     for(int k = 1;k<=2*i-1;k++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // Print diamond inside square using loops
//     for(int i = 1; i <= rows; i++) {
//         for(int j = 1; j <= rows; j++) {
//             if(j >= rows/2 + 2 - i && j <= rows/2 + i) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for(int i = rows-1; i >= 1; i--) {
//         for(int j = 1; j <= rows; j++) {
//             if(j >= rows/2 + 2 - i && j <= rows/2 + i) {
//                 printf("*");
//             } else { for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
     
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//pattern
#include <stdio.h>
int main() {
    int  n=3;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    int n1=n-1;
     for(int i=n1;i>=1;i--){
        for(int j=1;j<=n1-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
     
     


}
