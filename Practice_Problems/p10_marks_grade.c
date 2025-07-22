# include <stdio.h>
int main() {
    int marks;
    pintf("Enter the marks:");
    scanf("%d",&marks);
    if(marks<30){
        printf("Grade:C");
    }else if(30<=marks<70){
        printf("Grade:B");
    }else if(70<=marks<90){
        printf("Grade:A");
    }else{
        printf("Grade:A+");
    }
    return 0;
}