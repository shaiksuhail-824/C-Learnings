# include <stdio.h>
# include <math.h>
void maxNumber(int a, int b,int 
    *mx);
int main () {
    int a = 3;
    int b = 4;
    int mx;
    maxNumber(a,b,&mx);
    return 0;
}

void maxNumber(int a, int b,int *mx) {
    *mx = fmax(a,b);
    printf("maxnum = %d",*mx);
}
