# include <stdio.h>

int main() {
    // Type declaration instructions

    // valid
    int x = 10;
    int y = x;
    int z = x + y;
    int a = 2,b;
    // Invalid
    // int a1 = a2 = a3 = 22;  it first to assign 22 into a3 and remaining a1 and a2 variable be empty.

   // Arithmetic instruction

   // valid
   //a = b+c
   int even = 2,odd = 3;
   int sum =odd+ even;
   printf("sum is %d \n",sum);
   // INvalid
   //b + c = a
   //a = bc here it is invalid due to multiply two containers
   // power = a^b  It is bite to be used. we can insert math pow()
   // int even + odd =sum
 
   // modula declaration
   int number1 = 2,number2 = 2;
   printf("%d \n",number1%number2);

   // Type Conversation
   printf("%d \n",2 + 2);
   printf("%f \n",2 + 2.0);
   int num1 = 1.999999;
   printf("%d --> (int conversion)\n" , num1);
   // operation precedence
   int result = 2 + 3 *4;
   printf("%d \n",result);
   // associative(same precendence)
   int r1  = 2*3/5*3;
   printf("%d \n",r1);
   // Relational operators
   int a1 = 2, b1 = 4;
   printf("%d \n",a1 == b1); // equal to
   printf("%d \n", a1 != b1); // not equal to 
   printf("%d \n", a1 > b1); // greater than
   printf("%d \n", a1 < b1); // less than
   printf("%d \n", a1 >= b1); //  greater or equal to 
   printf("%d \n", a1 <= b1); // less than or equal to 
   printf("%d \n", a1 > b1); // greater than
   printf("%d \n", a1 < b1); // less than

   // Logical operators
   printf("%d \n", a1 < b1 && a1 > b1); 
   printf("%d \n", a1 < number1|| b1 > number2); 
   printf("%d \n", !(a1 <= b1)); 
   
   // Assignment operators
   a1 += b1;
   printf("%d \n",a1);
   a1 -= b1; 
   printf("%d \n",a1);
   a1 *= b1;
   printf("%d \n",a1);
   a1 /= b1;
   printf("%d \n",a1);
   a1 %= b1;
   printf("%d \n",a1);
   
   return 0;
}