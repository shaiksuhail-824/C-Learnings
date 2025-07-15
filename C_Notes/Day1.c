# include <stdio.h>

int main() {
    // print the Hello world
    printf("Hello World \n");
    //Variables
    int age = 5;
    float pi = 3.14;
    char percentage = '%';
    // Print the variables
    printf("age is %d \n ",age);
    printf("pi is %f \n", pi);
    printf("percentage %c \n",percentage);
    // input/output
    int a,b;
    printf("Enter: ");
    scanf("%d",&a);
    printf("Enter: ");
    scanf("%d",&b);
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    // operations
    printf("sum of a&b: %d \n",a+b);
    printf("sub of a&b %d \n",a-b);
    printf("mul of a&b %d \n",a*b);
    printf("div of a&b %d \n ",a/b);
    return 0;
}
