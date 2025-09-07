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