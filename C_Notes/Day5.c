# include <stdio.h>
//declaration of function
void printhello();
int s(int a, int b);

int main() {
    printhello(); //function call
    printhello();
    printf("Enter two numbers to sum:");
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = s(a,b);
    printf("Sum is: %d\n", sum); //function call with arguments

    return 0;
}
//function defination
void printhello() {
    printf("Hello, World!\n");
}
int s(int a, int b) {
    return a+b;
}

// Recursive function

