 # include <stdio.h>

 void square(int n);

 void _square(int *n);

 int main() {
    int num;
    scanf("%d",&num);
    printf("square numbers : %d \n", num);
    square(num);

    _square(&num);

   printf("square numbers : %d \n", num);
   return 0;
    

 }
 //value Address
 void square(int n) {
    int result = n*n;
    printf("square numbers : %d \n", result);
    
      
 }
 // reference Address

 void _square(int *n) {
      *n = (*n) * (*n);
      printf("square numbers : %d \n", *n);
 }