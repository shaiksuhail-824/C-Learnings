# include <stdio.h>

int main() {
    
    // Conditional S    tatement
   //  int age;
   //  printf("Enter the age:");
   //  scanf("%d",&age);

    //if-else condition

    // if(age > 18){git
    //     printf("you cast the vote!");
    
    // } else {
    //     printf("you can't cast vote \n");
    // }

    // else if conditions

    // if(age > 18 ){
    //     printf("you are  a adult /n");
    // } else if(age < 18){
    //     printf("you are a teenagar");
    // } else{
    //     printf("you are a child");
    // }

    // ternary operation

    //(age > 18)?printf("you can cast the vote \n"):printf("you can't cast vote \n");
    
    // switch condition
    
//     int day;
//     printf("Enter the day(1-7):");
//     scanf("%d",&day);
//     switch(day){
//         case 1 : printf("Monday \n");
//                break;
//         case 2 : printf("Tuesday \n");
//                break;
//         case 3 : printf("Wednesday \n");
//                break;
//         case 4 : printf("Thursday \n");
//                break;
//         case 5 : printf("Friday \n");
//                break;
//         case 6 : printf("Saturday \n");
//                break;
//         case 7 : printf("Sunday \n");
//                break;
//         default : printf("Enter valid input \n");
//     }
//   nested conditions
     int num1;
     printf("Enter number:");
     scanf("%d",&num1);
     if(num1 <= 10 && num1 >= 1){
       printf("%d is between 1 and 10 \n",num1); 
       if(num1%2 == 0 ){
              printf("%d is even",num1);
       }else{
              printf("%d is odd",num1);
       }

     }else{
              printf("%d it is not between 1 to 10 ",num1);
      }


    return 0;
}