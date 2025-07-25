# include <stdio.h>
float temperatureConvert(float celsius);
 int main() {
    printf("Enter the temperature in celsius: ");
    float c;
    scanf("%f",&c);
    printf("%f \n",temperatureConvert(c));
    return 0;
 }
 float temperatureConvert(float celsius){
    float fran = celsius*(9.0/5.0)+32;
    return fran;

 }