//    1
//    222
//   33333
//  4444444
// 555555555
# include <stdio.h>
int main(){
    int rows = 5;
    for(int i = 1;i<=rows;i++){
        for(int j = 1; j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    } 
    return 0;
}
// if we take k instead of following pattern will be print
/*  1
   123
  12345
 1234567
123456789 */
