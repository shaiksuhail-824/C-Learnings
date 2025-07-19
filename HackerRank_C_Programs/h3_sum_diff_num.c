#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int I1,I2;
    float F1,F2;
	scanf("%d %d",&I1,&I2);
    printf("%d %d \n",I1+I2,I1-I2);
	scanf("%f %f",&F1,&F2);
    printf("%0.1f %0.1f \n",F1+F2,F1-F2);

    return 0;
}