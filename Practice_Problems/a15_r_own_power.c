# include <stdio.h>
int ownPower(int base,int expo);
int main(){ 
    int b,e;
    printf("Enter the base and exponent: ");
    scanf("%d %d",&b,&e);
    printf("%d \n",ownPower(b,e));
    return 0;

}
int ownPower(int base, int expo) {
    if (expo == 0) {
        return 1;
    } else {
        return base * ownPower(base, expo - 1);
    }
}