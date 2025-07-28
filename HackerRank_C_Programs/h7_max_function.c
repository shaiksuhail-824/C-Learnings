# include <stdio.h>
# include <math.h>
 int main() {
    int a = 3;
    int b = 4;
    int c = 6;
    int d = 5;
    int f = fmax(a, b);
    int s =fmax(b,d);
    int m = fmax(f,s);
    
    printf("%d", s);
    
    return 0;

 }