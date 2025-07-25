# include <stdio.h>
void numberprint(int num);
int main() {
    int n;
    scanf("%d",&n);
    numberprint(n);
    return 0;
}
void numberprint(int num){
    for(int i = 1;i<=num;i++){
        printf("%d \n",i);
    }
}