# include <stdio.h>
//A program to calculate perimeter of rectangle.
 int main() {
    int length,width,perimeter;
    scanf("%d \n %d",&length,&width);
    perimeter = 2*(length+width);
    printf("%d /n",perimeter);

    return 0;
}