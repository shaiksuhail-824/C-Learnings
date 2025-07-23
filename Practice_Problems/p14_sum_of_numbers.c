# include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=n;i>=1;i--){
        sum = sum+i;
        printf("%d %d\n",i,sum);
    }
    return 0;
}