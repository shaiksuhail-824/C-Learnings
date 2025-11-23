# include <stdio.h>
# include <stdio.h>
int main(){
    int rows = 5,k;
    for(int i = 1;i<=rows;i++){
        for(int j = 1; j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d",k);
        }
        for(int x = i-1;x>=1;x--){
            printf("%d",x);
        }
        printf("\n");
    } 
    return 0;

}
//     1
//    121
//   12321
//  1234321
// 123454321
