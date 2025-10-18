#include <stdio.h>
void printNumbers(int arr_a[],int n);

int main() {
    // array of integers
    int maths = 99;
    int physics = 95;
    int chemistry = 98;
    int marks[3] = {maths, physics, chemistry};
    printf("maths: %d,physics: %d,chemistry: %d\n",marks[0],marks[1],marks[2]);

    // initialization of array
    int arr[5] = {1,2,3,4,5};
    int arr1[] = {2,3,4,5,6};
    printf("arr[0]: %d, arr1[0]: %d\n",arr[0],arr1[0]);

    printf("pointer arthimatic \n");
    int age = 22;
    int *ptr = &age;
    printf("*ptr = %u \n",ptr);
    ptr++;//ex is &age is 1096 to add int bytes(4) to get 1100
    printf("*ptr = %u \n",ptr);//here the meaning of p++ and P-- is to add the increament to the address.
    ptr--; //ex is &age is 1100 to add int bytes(4) to get 1096
    printf("*ptr = %u \n",ptr);
    printf("float \n");
    float price = 123.334;
    float *ptr1 = &price;
    printf("*ptr1 = %u \n",ptr1);
    ptr++;
    printf("*ptr1 = %u \n",ptr1);
    ptr1--;
    printf("ptr1= %u \n",ptr1);
    printf("charater \n");
    char star = "*";
    char *ptr2 = &star;
    printf("ptr2 = %u \n",ptr2);
    ptr2++;
    printf("ptr2 = %u \n",ptr2);
    ptr2--;
    printf("ptr2 = %u \n ",ptr2);
    printf("Difference and comparision \n");
    int age_1 = 22;
    int *ptr_1 = &age_1;
    int age_2 = 23;
    int *ptr_2 = &age_2;
    printf("ptr_1 = %u ptr_2 = %u difference = %u \n",ptr_1,ptr_2,ptr_2-ptr_1);// we cant diffference int and char pointer.
    ptr_2 = &age_1;
    printf("comparision = %u \n",ptr_1 == ptr_2);
    printf("Array in pointer \n");
    int *ptr_a = &arr[0];
    printf("*ptr_a %u \n",ptr);
    printf("tranverse an array \n");
    int adhaar[5];
    // input
    for(int i=0;i<5;i++){
        printf("%d index ",i);
        scanf("%d",&adhaar[i]);
    }
    //output
    for(int i =0;i<=5;i++){
        printf("%d index : %d \n",i ,adhaar[i]);
    }
    printf("function in array \n");
    int arr_a[] = {1,2,3,4,5};
    printNumber(arr_a,5);
    printf("multiple dimensional in array \n");
    int marks1[2][3];// 2*3 marks it takes - - -/- - -
    marks1[0][0] = 98;
    marks1[0][1] = 85;
    marks1[0][2]= 99;

    marks1[1][0] = 91;
    marks1[1][1] = 89;
    marks1[1][2] = 99;
    printf("%d",marks1[1][2]);

    
   


    return 0;
}
void printNumber(int arr_a[],int n){
        for(int i = 0;i<n;i++){
            printf("%d \n",arr_a[i]);
        }
    }
// #include <stdio.h>
// int main(){
//     int a=10;
//     int *p;
//     p=&a;
//     printf("value of a=%d \n",a);
//     printf("value of pointer variable=%d \n",*p);
//     printf("address of a=%d \n",&a);
//     printf("addrees of pointer variable=%d \n",&(*p));
//     *p=100;//change the actual variable
//     printf("value of a=%d \n",a);
//     printf("value of pointer variable=%d \n",*p);
//     printf("address of a=%d \n",&a);
//     printf("addrees of pointer variable=%d \n",&(*p));
//     a=200;
//     printf("value of a=%d \n",a);
//     printf("value of pointer variable=%d \n",*p);
//     printf("address of a=%d \n",&a);
//     printf("addrees of pointer variable=%d \n",&(*p));
//     printf("addrees of pointer variable of p=%d \n",&p);
//     printf("addrees of pointer variable=%d \n",*(&a));

//  }
// call by reference using pointer
// int sum(int *a,int *b);
// int main(){
//       int a=10;
//       int b=20;
//       sum(&a,&b);
//       printf("address of a=%d\n",&a);
//       printf("address of b=%d\n",&b);

// }
// int sum(int *a,int *b){
//     printf("address of a=%d\n",&a);
//     printf("address of b=%d\n",&b);
//     return 0;

// }
// pointer to pointer
// #include <stdio.h>
// int main(){
// int a=10;
// int *x;
// x=&a;
// int **y;
// **y=&x;
// printf("value of a:%d \n",**y);

//}
// # include <stdio.h>
// int main(){
// int a=10;
// int *x;
// x=&a;
// int **y;
// **y=&x;
// y=20;// change the pointer value
// printf("value of a:%d \n",**y);

// }
// # include <stdio.h>
// int main(){
// int a=10;
// int *x;
// x=&a;
// int **y;
// **y=&x;
// printf("value of a:%d \n",**y);
// printf("addres of a: %d \n",&a);
// #include <stdio.h>
// int main(){
// int a=10;
// int *x;
// x=&a;
// int **y;
// y=&x;
// int ***z;
// z=&y;
// printf("value of a:%d \n",*x);
// printf("value of a:%d \n",*x);
// printf("value of a:%d \n",**y);
// printf("value of a:%d \n",***z);
// printf("addres of a: %d \n",&a);
// printf("addres of a: %d \n",&(*x));
// printf("addres of a: %d \n",&(**y));
// printf("addres of a: %d \n",&(**y));


// }
// #include <stdio.h>
// int main(){
//     int a=10;
//     void *x;
//     x=&a;
    
//     printf("valaue of a: \n",x);
//     printf("valaue of a:%d \n",&x);
//     printf("valaue of a:%d \n",a);
//     printf("valaue of a:%d \n",&a);
// }
//NULL POINTER
// #include <stdio.h>
// int main(){
//     int *x=NULL;
//     printf("value of pointer variable x=%d\n",x);
// }
// Case 1 : constant pointer
// #include <stdio.h>
// int main(){
//    int a=10;
//    const int *x;
//    x=&a;
//    printf("value of a:%d \n",*x);//it holding 
//    printf("value of a:%d \n",*(&a));

// }
//case 2:const variable
// #include <stdio.h>
// int main(){
//    const int a=10;
//    int *x;
//    x=&a;
//    printf("value of a:%d \n",*x);//it holding 
//    printf("value of a:%d \n",*(&a));
// }
//case 3:Both const pointer and variable
// #include <stdio.h>
// int main(){
//    const int a=10;
//    const int *x;
//    x=&a;
//    //*x=12;assignment of read-only location ‘*x’
//    printf("value of a:%d \n",*x);//it holding 
//    printf("value of a:%d \n",*(&a));

// }
//ARRAY AND POINTER
// #include <stdio.h>
// int main(){
//     int x[5]={10,20,30,40,50};
//     //acessing address of the array without pointer
//     //moderate method
//     printf("address of variable x[0]:%d \n",&x[0]);
//     printf("address of variable x[1]:%d \n",&x[1]);
//     printf("address of variable x[2]:%d \n",&x[2]);
//     printf("value of variable x[0]:%d \n",x[0]);
//     printf("value of variable x[1]:%d \n",x[1]);
//     printf("value of variable x[2]:%d \n",x[2]);
//     // traditional method
//     printf("address of variable x0:%d \n",x);
//     printf("address of variable x1:%d \n",x+1);
//     printf("address of variable x2:%d \n",(x+2));
//     printf("value of variable x:%d \n",*x);
//     printf("value of variable x[0]:%d \n",*(x+0));
//     printf("value of variable x[1]:%d \n",*(x+1));
//     printf("value of variable x[2]:%d \n",*(x+2));
   

// }
//if change the value of pointer variable.
// #include <stdio.h>
// int main(){
//     int x[5]={10,20,30,40,50};
//     int *p;
//     p=x;
//     *(p+2)=100;//assign the values
//     *(p+4)=450;
//     printf("addresso of  variable=%d\n",x);
//     printf("addresso of pointer  variable=%d\n",p);
//     printf("addresso of x[0]=%d\n",p+0);
//     printf("addresso of x[1]=%d\n",p+1);
//     printf("addresso of x[2]=%d\n",p+2);
//     printf("addresso of x[3]=%d\n",p+3);
//     printf("addresso of x[4]=%d\n",p+4);
//     printf("value  of x[0]=%d\n",*(p+0));
//     printf("value  of x[1]=%d\n",*(p+1));
//     printf("value  of x[2]=%d\n",*(p+2));
//     printf("value  of x[3]=%d\n",*(p+3));
//     printf("value  of x[4]=%d\n",*(p+4));





