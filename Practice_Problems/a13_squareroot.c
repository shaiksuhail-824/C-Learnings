# include <stdio.h>
# include <math.h>
int squareRoot(int num);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d \n",squareRoot(n));
    return 0;
}
int squareRoot(int num) {
      int sr = sqrt(num);
      return sr;
}
