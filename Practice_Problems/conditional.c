//1.Write a program to print the memory allocation 
//required for all the datatypes in C Language.
// #include <stdio.h>
// int main(){
// printf("size of char:%zubytes \n",sizeof(char));
// printf("size of int:%zubytes \n",sizeof(int));
// printf("size of short:%zubytes \n",sizeof(short));
// printf("size of long:%zubytes \n",sizeof(long));
// printf("size of double:%zubytes \n",sizeof(double));
// printf("size of flaot:%zubytes \n",sizeof(float));
// printf("size of long long:%zubytes \n",sizeof(long long));
// printf("size of long double:%zubytes \n",sizeof(long double));
// }
//2.Write a program to check whether the given number is an even number or odd number
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("even number");
//     }else{
//         printf("odd number");
//     }
// }
// 3.Write a menu based program to take of input of two values followed input of choice and 
// accordingly perform arithmetic operations like Addition, Subtraction, Multiplication, Modulus, 
// Division, Power( Using Switch Statement) 
 #include <stdio.h>
#include <math.h>
int main(){
    char opr;
    int a,b;
    printf("enter the opr:");
    scanf("%c",&opr);
    scanf("%d %d",&a,&b);
    switch(opr){
        case '+':{
            
            printf("a+b=%d",a+b);
            break;
        }
        case '-':{
            
            printf("a-b=%d",a-b);
            break;
        }case '*':{
            
            printf("a*b=%d",a*b);
            break;
        }case '/':{
            
            if(b!=0){
                printf("a/b=%.2f",(float)a/b);
            }else{
                printf("Error: Division by zero\n");
            }
            break;
        }case 'p':{
            
            printf("a^b=%.2f",pow(a,b));
            break;
        }default :{
            printf("invalid output.");
        } 
    }
}
//4.Write a program to swap two numbers without using third variable.
// #include <stdio.h>
// int main(){
//     int n1,n2;
//     printf("Enter the value of n1<n2:");
//     scanf("%d %d",&n1,&n2);
//     n1=n1+n2;
//     n2=n1-n2;
//     n1=n1-n2;
//     printf("n1=%d \n",n1);
//     printf("n2=%d \n",n2);
// }
//5. Write a program to find out whether the given number is a perfect square or not.
// #include <stdio.h>
// #include <math.h>
// int main(){
//   int num;
//   double sqnum; 
//   printf("Enter the number:");
//   scanf("%d",&num);
//   sqnum=sqrt(num);
//   if((int)sqnum*(int)sqnum==num){
//     printf("It is perfect square");
//   }else{
//     printf("It is not a perfect square");
//   }
// }
//6.Write a program to find out whether the given number is positive, negative or zero value.
// #include <stdio.h>
// int main(){
//     int num;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     if(num>0){
//         printf("positive number");
//     }else if(num<0){            
//         printf("negative number");
//     }else if(num==0){
//         printf("number is zero");   
//     }else{
//         printf("invalid input");
//     }
// }
