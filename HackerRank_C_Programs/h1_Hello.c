#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char s[100];
    scanf("%[^\n]%*c",s);
    printf("Hello,World! %s",s);
    return 0;
}