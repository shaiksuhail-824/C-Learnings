# include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int main() {
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    printf("%c \n",ch);
    scanf("%s \n",s);
    printf("%s \n",s);
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);

 }