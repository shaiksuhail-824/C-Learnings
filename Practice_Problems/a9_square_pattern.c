# include <stdio.h>
// A program to print a square pattern of stars.
int main() {
    int num = 5;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=4;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}