// #include <stdio.h>

// int len(char str[100]);
// int cpy(char str[100], char str1[100]);
// int cont(char str[100],char str1[100],char result[200]);
// int uprstr(char str[100]);
// int cmpstr(char str[100],char str1[100]);

// int main() {
//     char str[100], str1[100],result[200];
//     scanf("%s", str);

//     printf("Length of the string: %d\n", len(str));

//     cpy(str, str1);
//     printf("Copy of the string is: %s\n", str1);
//     cont(str,str1,result);
//     printf("concatenation of the strings:%s\n",result);
//     uprstr(str);
//     printf("conversion of uppercase:%s \n",str);
//     int cmp_result=cmpstr(str,str1);
//     if(cmp_result==1){
//         printf("comparision:Both strings are equal\n");
//     }else{
//         printf("comparsion:Both strings are not equal\n");
//     }

//     return 0;
// }

// int len(char str[100]) {
//     int length = 0;
//     while (str[length] != '\0') {
//         length++;
//     }
//     return length;
// }

// int cpy(char str[100], char str1[100]) {
//     int i = 0;
//     while (str[i] != '\0') {
//         str1[i] = str[i];
//         i++;
//     }
//     str1[i] = '\0';     
//     return 0;
// }
// int cont(char str[100],char str1[100],char result[200]){
//     int i=0,j=0;
//     while(str[i]!=0){
//         result[i]=str[i];
//         i++;
//     }
//     while(str1[j]!=0){
//         result[i]=str1[j];
//         j++;
//         i++;
//     }
//     result[i]='\0';

//     return 0;

// }
// int uprstr(char str[100]){
//          int i=0;
//          while(str[i]!='\0'){
//          if(str[i]>='a' && str[i]<='z'){
//                      str[i]=str[i]-32;
                     
//          }
         
//          i++;
//          }
//          return 0;
// }
// int cmpstr(char str[100],char str1[100]){
//     int i=0;
//     while(str[i]!='\0'&& str1[i]!='\0'){
//         if(str[i]!=str1[i]){
//                 return 0;
//         }
//         i++;
//     }
//     if(str[i]!='\0' || str1[i]!='\0'){
//         return 0;
//     }
//            return 1;
    
// }

#include <stdio.h>
int mul(int a,int b);
int div(int a,int b);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("multplication of two numbers is:%d\n",mul(a,b));
    printf("division of two numbers is:%d \n",div(a,b));


}
int mul(int a,int b){
         int result=0;
         int positive=1;
         if(b<0){
            b=-b;
            positive=-positive;
         }
         if(a<0){
            a=-a;
            positive=-positive;
         }
         for(int i=0;i<b;i++){
            result= result+a;
         }
         return result*positive;
}
int div(int a,int b){
    int result=0;
    int positive=1;
    if(b<0){
    b=-b;
    positive=-positive;
    }
    if(a<0){
    a=-a;
    positive=-positive;
    }
    while(a>=b){
    a=a-b;
    result=result+1;
    }
    return result*positive;
}


