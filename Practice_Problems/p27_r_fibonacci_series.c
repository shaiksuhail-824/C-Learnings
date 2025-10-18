/*# include <stdio.h>
int fab(int num);
int main() {
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Fibonacci series: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fab(i));
    }
    return 0;
}

int fab(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fab(num - 1) + fab(num - 2);
}
*/
// # include <stdio.h>
// int fact(int n);
// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//          printf("%d",fact(i));
//     }
//     return 0;
// }    
// int fact(int n){
//      if(n==0){
//         return 0;
//      }else if(n==1){
//         return 1;
//      }else{
//         return fact(n-1)+fact(n-2);
//      }
// } 
// sum of natural number
// # include <stdio.h>
// int sum(int n);
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;
// }
// int sum(int n){
//      if(n==1){
//         return  1;
//      }
//      int sumfm1 = sum(n-1);
//      int sum = sumfm1*n;

// }

// # include <stdio.h>
// int ownPow(int base,int expo);
// int main(){
//     int base,expo;
//     scanf("%d %d",&base,&expo);
//     printf("%d",ownPow(base,expo));
//     return 0;
// }
// int ownPow(int base , int expo){
//     if(expo==0){
//         return 1;
//     }
//     return base *ownPow(base,expo-1);
// }
