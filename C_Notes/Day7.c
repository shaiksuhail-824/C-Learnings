#include <stdio.h>

int main() {
    // array of integers
    int maths = 99;
    int physics = 95;
    int chemistry = 98;
    int marks[3] = {maths, physics, chemistry};
    printf("maths: %d,physics: %d,chemistry: %d\n",marks[0],marks[1],marks[2]);
}