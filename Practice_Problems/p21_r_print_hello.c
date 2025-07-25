#include <stdio.h>

// Recursive function to print "Hello, World!"
int printHelloWorld(int n);

int main() {
    int n;
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &n);
    printHelloWorld(n);
    return 0;
}

int printHelloWorld(int n) {
    if (n > 0) {
        printf("Hello, World!\n");
        printHelloWorld(n - 1);
    }
}