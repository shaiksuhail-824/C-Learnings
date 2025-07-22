# include <stdio.h>
int main(){
    int count;
    int num;
    scanf("%d",&num);

    for(int i=1;i<=num; i++){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count+=1;
            }
        }
         if(count==2){
        printf("%d \n",i);
        }
    }
     
      return 0;
      
}