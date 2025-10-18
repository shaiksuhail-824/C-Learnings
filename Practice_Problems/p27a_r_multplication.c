# include <stdio.h>
int mul(int a,int b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",mul(a,b));
    return 0;
}
int mul(int a,int b){
    if(b==0){
        return 0;
    }
    if(b>0){
        return a+mul(a,b-1);
    }
    return -mul(a,-b);
}