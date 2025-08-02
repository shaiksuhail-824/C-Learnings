 # include <stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d",_age);
    // address
    printf("%p \n", &age);
    printf("%p \n", ptr);
    printf("%p \n", &ptr);

    // value
    printf("%d \n", age);
    printf("%d \n", *ptr);
    printf("%d \n", *(&age));

    //examples
    int x;
    int *p;
    p = &x;
    *p = 1;
    printf("x = %d \n",x);
    printf("p = %d \n",*p);

    *p +=5;
    printf(" x = %d \n", x);
    printf(" p = %d \n",*p);
    
    (*p)++;
    printf(" x = %d \n", x);
    printf(" p = %d \n",*p);


    //pointer to pointer
    int marks = 98;
    int *ptr1 = &marks;
    int **ptr2 = &ptr1;
    printf("%d \n",**ptr2);

    int i = 10;
    int *p1 = &i;
    int **p2 = &p1;
    printf("%d \n", **p2);
    return 0;
}
























