#include <stdio.h>

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
}