#include <stdio.h>

// loop control statements
// for loop
// while loop
// do while loop

int main() {

// for(initialisation; condition; updation) {
//    do something
// }

for(int i=1; i<=5; i++){

    printf("Hello, World! \n");

}

// while(condition) {

//   do something

// }
int i=10;
while(i>=1){
    printf("%d\n",i);
    i--;
}


// do {

// do something

// } while(condition);

int j=1;
do {
   printf("%d \n",j);
    j++;
}while(j<=5);

// Break Statement
for(int i =1;i<=10;i++){
    if(i==5){
        break;
    }
    printf("%d \n",i);
}

// Countinue State
for(int i=1;i<=15;i++){
    if(i%5==0){
        continue;
    }    
    printf("%d \n",i);
}

// Nested loop
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