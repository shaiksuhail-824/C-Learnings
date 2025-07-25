# include <stdio.h>
int fab(int num);
int main() {
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Fibonacci series: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", fab(i));
    }
    return 0;
}

int fab(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fab(num - 1) + fab(num - 2);
}