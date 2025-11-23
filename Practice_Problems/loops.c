// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter the num:");
//     scanf("%d",&num);
//     pritnf("Factors:");
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             printf("%d ",i);
//         }
//     }
//         return 0;
// }
// #include <stdio.h>
// int main(){
//     int num,fact=1;
//     printf("Enter the num:");
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         fact=fact*i;

        
//         }
//         printf("factorial of %d is %d",num,fact);
    
//         return 0;
// }
// # include <stdio.h>
// int main(){
//     int temp,num,rev=0;
//     printf("Enter the num:");
//     scanf("%d",&num);
//     temp=num;
//     while(num>0){
//         rev=rev*10+num%10;
//         num=num/10;
        
//     }
//     if(rev==temp){
//         printf("It is palindrome \n");
//     }else{
//         printf("It is not palindrome \n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter the num :");
//     scanf("%d",&num);
//     int count=0;
//     for(int i=1;i<=num;i++){
//         if(num%i==0){
//             count=count+1;
//         }
//     }
//     if(count==2){
//         printf("It is prime number\n");
//     }else{
//         printf("It is not prime number\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     int n,a=0,b =1,c;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     printf("fibonacci series upto %d numbers:",n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int num,count;
//     printf("Enter the num :");
//     scanf("%d",&num);
//     printf("print the first upto %d number:",num);
//     for(int i=1;i<=num;i++){
//         count=0;
//         for(int j=1;j<=num;j++){
//         if(i%j==0){
//             count=count+1;
//         }
//     }
//     if(count==2){
//         printf("%d ",i);
//     }
// }
// }
// #include <stdio.h>
// int main() {
//     int n, i, j, num = 1;

//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++) {
//         // Print leading spaces for alignment
//         for (j = 0; j <= n - i; j++)
//             printf("  ");

//         // Calculate and print Pascal's triangle values
//         for (j = 0; j <= i; j++) {
//             if (j == 0 || i == 0)
//                 num = 1;
//             else
//                 num = num * (i - j + 1) / j;
//             printf("%4d", num);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int num,sum;
//     printf("Enter the num :");
//     scanf("%d",&num);
//     printf("print the first upto %d perfect number:",num);
//     for(int i=1;i<=num;i++){
//         sum=0;
//         for(int j=1;j<i;j++){
//         if(i%j==0){
//             sum=sum+j;
//         }
//     }
//     if(sum==i){
//         printf("%d ",i);
//     }
// }
// }

// #include <stdio.h>
// int main(){
//     int n,p=1;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     // Upper half
//     for (int i = 1; i <= n; i++) {
//         for (int space = 0; space < n - i; space++)
//             printf("   ");
//         for (int star = 0; star < 2*i - 1; star++)
//             printf("* ");
//         printf("\n");
//     }

//     // Lower half
//     for (int i = n - 1; i >0; i--) {
//         for (int space = 0; space < n - i; space++)
//             printf("   ");
//         for (int star = 0; star < 2*i - 1; star++)
//             printf("*  ");
//         printf("\n");
//     }

//     return 0;
// }
// # include <stdio.h>
// int main(){
//     int rows =5;
//     for(int i=1;i<=rows;i++){
//         for(int j = 1;j<=rows-i;j++){
//             printf(" ");
//         }
//         for(int k = 1;k<=2*i-1;k++){
//             if(k==1 || k==2*i-1 || i ==  rows){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }  
//         printf("\n");
    

//     }
//         for(int i = rows;i>=1;i--){
//         for(int j =1;j<= rows-i;j++){
//             printf(" ");
//         }
//         for(int k =1;k<=2*i-1;k++){
//             if(k==1 || k ==2*i-1 || i == rows){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;

        
// }

// #include <stdio.h>
// int main(){
//     int rows = 5;
//     for(int i = 1;i<=rows;i++){
//         for(int j = 1;j<=rows-i;j++){
//             printf(" ");
//         }
//         for(int k = 1;k<=2*i-1;k++){
//             if(k==1 || k == 2*i-1){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for(int i = rows;i>=1;i--){
//         for(int j = 1;j<= rows-i;j++){
//             printf(" ");
//         }
//         for(int k = 1;k<=2*i-1;k++){
//             if(k == 1 || k == 2*i-1){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;


// }
#include <stdio.h>

int main() {
    int n = 4;   // height of top (levels)

    // Upper part
    for(int i = 1; i <= n; i++) {

        // spaces
        for(int s = 1; s <= n - i; s++)
            printf("  ");

        // increasing numbers
        for(int j = 1; j <= i; j++)
            printf("%d ", j);

        // decreasing numbers
        for(int j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    // Lower part
    for(int i = n - 1; i >= 1; i--) {

        // spaces
        for(int s = 1; s <= n - i; s++)
            printf("  ");

        // increasing numbers
        for(int j = 1; j <= i; j++)
            printf("%d ", j);

        // decreasing numbers
        for(int j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
