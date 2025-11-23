#include <stdio.h>
int main(){
    int rows = 5;
    printf("1.column_same \n");
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            printf("%c",'A'+i-1);
        }
        printf("\n");
    }
    printf("2.rows_same \n");
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
     printf("3.column_same_reverse \n");
    for(int i = rows;i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("%c",'A'+i-1);
        }
        printf("\n");
    }
     printf("4.space_with_right_angled_triangle \n");
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("%c",'A'+k-1);
        }
        
        printf("\n");
    }
    printf("5.continous_alphabets \n");
    int num =1;
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            printf("%c",'A'+ (num++)-1);
        }
        printf("\n");
    }
    printf("5a.continous_alphabets \n");
    char ch = 'A';
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=i;j++){
            printf("%c",ch++);
        
        }
        printf("\n");
    }
    printf("6.continous_alphabets_reverse \n");
    int cha = 'A';
    for(int i = rows;i>=1;i--){
        for(int j = 1;j<=i;j++){
            printf("%c",cha);
            cha++;
        }
        printf("\n");
    }
    printf("6.simple_i_pyramids \n");
    
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("%c",'A'+i-1);
        }

        printf("\n");
    }
    printf("7.simple_k_pyramids \n");

    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("%c",'A'+k-1);
        }

        printf("\n");
    }
    printf("8.continuos_pyramids \n");
    int n =1;
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("%c",'a'+(n++)-1);
        }

        printf("\n");
    }
    printf("8.diamond \n");
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("%c",'a'+k-1);
        }

        printf("\n");
    }    
    for(int i = rows;i>=1;i--){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=2*i-1;k++){
            printf("%c",'a'+k-1);
        }

        printf("\n");
    }
    printf("9.hollow_diamond \n");
    for(int i = 1;i<=rows;i++){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k =1;k<=2*i-1;k++){
            if(k==1||k==2*i-1){
                printf("%c",'A'+k-1);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = rows;i>=1;i--){
        for(int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k =1;k<=2*i-1;k++){
            if(k==1||k==2*i-1){
                printf("%c",'A'+k-1);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }



    
     printf("hackerrank \n");
    int n1;
    scanf("%d", &n1);
  	int row = n1*2-1;
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=row;j++){
            printf("%d",n1);
            
        }
        printf("\n");
    }
        return 0;
}