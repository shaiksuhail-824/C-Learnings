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
// //1.Write a program to convert a string from uppercase to lowercase and lower case to upper case
// // 'A' to 'Z' is 65 to 90.'a' to 'z' is 97 to 122
// // 'A'+32='a'
// // 'a'-32='A'
// int main(){
//        char s[100];
//        scanf("%s[^\n]",s);//string with spaces
//        for(int i=0;s[i]!='\0';i++){
//                     if(s[i]>='A'&& s[i]<='Z'){
//                                   s[i]= s[i]+32;//convert uppercase to lower case
//                     }else{ 
//                          s[i] = s[i]-32;// convert lowercase to upper case
                    
//                     }
//        }       
//       //output
//       printf("string s =%s \n",s);          
//        return 0;

// }

/*
#include <stdio.h>
#include <ctype.h>
//2.Write a program to count the number of vowels,consonants and digits in a string.
int main(){
        char s[100];
        scanf("%[^\n]",s);//%[^\n] is include space and number also terminate you click enter
        int vowels=0,consonants=0,digits=0;
        for(int i=0;s[i]!=0;i++){
                   char ch=tolower(s[i]);
                      if(isalpha(ch)){
                            if(ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'){
                                              vowels++;
                            }else{
                                  consonants++;
                            }
                      }else if(isdigit(ch)){
                                   digits++;
                      }
                                            
        }
        printf("vowels:%d \n",vowels);
        printf("consonants:%d \n",consonants);
        printf("digits:%d \n",digits);
       return 0;
}
*/
/*
# include <stdio.h>
# include <string.h>
//3.Write a program to reverse a string without using the strrev() function.
int main(){
       char str[100],str1[100];
       scanf("%[^\n]",str);
       int strLen = strlen(str);
       for(int i=0;i<strLen;i++){
                    str1[i]=str[strLen-i-1]; 
      }
      str[strLen]='\0';
      printf("reverse str:%s\n",str1);
       return 0;
}
*/
/*
# include <stdio.h>
//4.Write a program to find the length of a string without using strlen().
int  main(){
        char str[100];
        scanf("%[^\n]",str);
        int len=0;
        for(int i = 0;str[i]!='/0';i++){
                     len=len+1;
        }
        printf("length_of_string:%d",len);
        return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
//5.Write a program to check whether a string is a palindrome.
int main() {
    char str[100];
    int i, len, isPalindrome = 1;   // assume it is a palindrome

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // read string including spaces

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;   // mismatch found
            break;
        }
    }

    if (isPalindrome == 1) {
        printf("It is a Palindrome\n");
    } else {
        printf("It is Not a Palindrome\n");
    }

    return 0;
}
*/

//Write a program to remove all spaces from a string.

//Write a program to replace all vowels with * in a string.

//Write a program to copy one string into another without using strcpy().
/*
# include <stdio.h>
# include <ctype.h>
# include <string.h>
//5.Write a program to count the number of words in a string.
int main(){
        int count =0;
        char str[100];
        scanf("%[^\n]",str);
        int strLen=strlen(str);
        for(int i=0;i<strLen;i++){
                    if(isspace(str[i])){
                              count++;
                    }
        }
        printf("the no of words are%d",count+1);
        return 0;
}
*/

// # include <stdio.h>
// # include <string.h>
// //We want to sort the characters of a string in ascending order (A → Z or a → z).
// int main(){
//           char str[100],temp;
//           scanf("%[^\n]",str);
//           int len = strlen(str);
//           for(int i =0;i<len;i++){
//                   for(int j=i+1;j<len-1;j++){
//                              if(str[i]>str[j]){
//                                          temp = str[i];
//                                          str[i] = str[j];
//                                          str[j] = temp;
//                               }
//                   }
//           }
//           printf("%s",str);                           
//           return 0;
// }


// //Array_of_string
// # include <stdio.h>
// # include <string.h>
// //1.Write a program to find the strings starting with “c” and “a” for the given n input strings..
// int main(){
//       int n;
//       printf("Enter the no of strings be:");
//       scanf("%d",&n);
//       char str[n][20];
//       for(int i=0;i<n;i++){
//                    printf("Enter the strings %d:",i+1);
//                    scanf("%19s",str[i]);//reads upto 19 characters and leaves space for null terminator
                  
//       }
//       printf("Enter strings start with 'c' and 'a': \n");
//     for(int i=0;i<n;i++){

//             // check if string starts with 'c' or 'a'
//              if(str[i][0]=='c' || str[i][0]=='a'){
//                           printf("%s \n",str[i]);
//             }
//      }
//       return 0;    
// }


// #include <stdio.h>
// //2. Write a program to print the words of given input string in reverse order For  Eg. If input string is “I am an Indian”, the output would be “Indian an am I” 

// int main() {
//     int n;
//     printf("Enter the string length:");
//     scanf("%d",&n);
//     printf("Input strings:");
//     char str[n][20];

//     for (int i = 0; i < n; i++) {
//         scanf("%s", str[i]);
//     }

//     for (int i = n - 1; i >= 0; i--) {
//         printf("%s ", str[i]);
//     }

//     return 0;
// }

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

//#include <stdio.h>

//int main(){
//-32,768 to 32,767 int range

//1.malloa() functions
//2.calloc() function
//3.realloc()
//4.free()
//__________________________
//1.malloc()
//the function dynamic allocation the block of memory
//p=(int *a)malloc(*x):
// p=(int *a)
// create dynamic memory using malloc 

//}
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     p=(int *)malloc(n*sizeof(int));
//     if(p!=NULL){
//         printf("memory is allocation");

//     }
// }
//create dynamic program using 5 assign the integer values
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     p=(int *)malloc(n*sizeof(int));
//     if(p==NULL){
//         printf("memory is not allocation");

//     }else{
//         for(int i=0;i<5;i++){
//             scanf("%d",p+i);
//         }
//         for(int i=0;i<5;i++){
//             printf("%d \n",*(p+i));
//         }
//     }
// }
#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
    int id;
};
int main(){
struct student *s;
s=(struct student*)malloc(sizeof( struct student));
s->id=100;
printf("%d",s->id);
}
//2.calloc--continues memory allocation
//calloc function is alllocated continues dynamic memory by using same syntax
   // p=(int *)calloc(n,sizeof(int));

//calloc need two argument 1.num of element 2.size of element
//1.create dynamic memory usin callow function
 //#include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     p=(int *)malloc(n*sizeof(int));
//     if(p!=NULL){
//         printf("memory is allocation");

//     }
// }
//2.create dynamic memory assign the integer values
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p,n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     p=(int *)calloc(n,sizeof(int));
//     if(p==NULL){
//         printf("memory is not allocation");

//     }else{
//         for(int i=0;i<n;i++){
//             scanf("%d",p+i);
//         }
//         for(int i=0;i<n;i++){
//             printf("%d \t",*(p+i));
//         }
//     }
// }
//3.realloc() --reallocation
// realloction function allocate re memory whicnh is create by m and n block
//it is usef=d to create new memory.
//p=(int  *)realloc(pointer variable,new size);
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p,n,n2;
//     printf("Enter the number");
//     scanf("%d",&n);
//     p=(int *)malloc(n*sizeof(int));
//     printf("memory addresss \n");
//     for(int i=0;i<n;i++){
//         printf("%d \n",p+i);
//     }

//     printf("Enter the new size \n");
//     scanf("%d",&n2);
//     p=(int *)realloc(p,n2);
//     printf("new memory addresss \n");
//     for(int i=0;i<n2;i++){
//         printf("%d \n",p+i);
//     }
// }
//free() is used to delete the memory which is created by m and n block.
//syntax -- free(pointer variable)
// int *p;
// p=(int *)malloc(n*size(int));
// free(p);

    // #include <stdio.h>

// int main(int argc, char *argv[]) {

//     printf("Number of arguments = %d\n", argc);

//     for (int i = 0; i < argc; i++) {
//         printf("Argument %d : %s\n", i, argv[i]);
//     }

//     return 0;
// }

//gcc command_line_arguments.c -o command_line_arguments
//./command_line_arguments hello world 123
//sum of two numbers
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("Sum = %d\n", a + b);

    return 0;
}
//./command_line_arguments 2 9
//atoi() stands for ASCII to Integer.

//It is a function in C used to convert a string (char array) into an integer value.
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     int i;

//     if (argc == 1) {  // Only program name
//         printf("No elements to display...\n");
//     }
//     else {
//         printf("List of elements:\n");

//         // Print all arguments except program name
//         for (i = 1; i < argc; i++) {
//             printf("%s\n", argv[i]);
//         }
//     }

//     return 0;
// }

