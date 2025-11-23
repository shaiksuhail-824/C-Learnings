//struture are user defined data types 
//--declaration--
// struct structurename
// {
//     datatype variable1
//     datatype variable2
//     datatype variable3
// }
// struct cse{
//     int a;
//     flaot b;
//     char c;
// }
//--declare structure variable--
//structure variable can be declaring at structure declaration or outside structure
//--declaration--
// struct structurename
// {
//     datatype variable1
//     datatype variable2
//     datatype variable3
// }
// struct cse{--structure variable
//     int a;--number variable
//     flaot b;
//     char c;
// }
//--acessing the structure numbers--
//the number can be accseing using dot operator
//syntax
//structure variable.number variable(x.a);
// struct cse{--structure variable
//     int a;--number variable
//     flaot b;
//     char c;
// }x;
// #include <stdio.h>
// struct cse{
//     int a;
//     float b;
//     char c;
// }x;
// int main(){
//     x.a=10;
//     x.b=20.5;
//     x.c='s';
//     printf("a=%d \n",x.a);
//     printf("a=%f \n",x.b);
//     printf("a=%c \n",x.c);
// }
//--structure variable can be declaring outside the stucture--
//each and every structure variable have separate memory location
// #include <stdio.h>
// struct cse{
//     int a;
//     float b;
//     char c;
// };
// int main(){
//     struct cse x;
//     x.a=10;
//     x.b='d';
//     x.c='s';
//     printf("a=%d \n",x.a);
//     printf("a=%f \n",x.b);
//     printf("a=%c \n",x.c);
//     printf("address of a= %d \n",&x.a);
//     printf("address of b= %d \n",&x.b);
//     printf("address of c= %d \n",&x.c);
//     printf("address of x= %d \n",&x);

// }
// #include <stdio.h>
// union cse{
//     int a;
//     float b;
//     char c;
// };
// int main(){
//     union cse x;
//     x.a=10;
//     x.b=30.5;
//     x.c='s';
//     printf("a=%d \n",x.a);
//     printf("a=%f \n",x.b);
//     printf("a=%c \n",x.c);
//     printf("address of a= %d \n",&x.a);
//     printf("address of b= %d \n",&x.b);
//     printf("address of c= %d \n",&x.c);
//     printf("address of x= %d \n",&x);

// }
// create the students record using structure
// #include <stdio.h>
// struct student{
//     int id;
//     float marks;
//     char name[20];
// }x;
// int main(){
//     x.id=1188;
//     x.marks=30.5;
//     printf("enter the student name \n");
//     scanf("%s",x.name);
//     printf("id=%d \n",x.id);
//     printf("marks=%f \n",x.marks);
//     printf("name=%s \n",x.name);
// }
//implement more no of records using structure
// all the variable are separated with commas variable.
// #include <stdio.h>
// struct student{
//     int id;
//     float marks;
//     char name[20];
// }x,y;
// int main(){
//     x.id=1188;
//     y.id=1189;
//     x.marks=30.5;
//     y.marks=30.5;
//     printf("enter the student name1 \n");
//     scanf("%s",x.name);
//     printf("enter the student name2 \n");
//     scanf("%s",y.name);
//     printf("id=%d  \n",x.id);
//     printf("marks=%f \n",x.marks);
//     printf("name=%s \n",x.name);
//     printf("id=%d \n",y.id);
//     printf("marks=%f \n",y.marks);
//     printf("name=%s \n",y.name);
// }
// nested structure or embeded nested structure
// structure declaring inside structure is called nested structure
// syntax
// struct rgukt{
//     int a;
//     struct cse{
//         int b;
//     }x;
// }y;
// accesing
// y.a=10;
// y.x.b=20; --inside 
// #include <stdio.h>
// struct rgukt{
//     int a;
//     struct cse{
//         int b;
//     }x;
// }y;
// int main(){
//      y.a=10;
//      y.x.b=20;
//      printf("a=%d \n",y.a);
//      printf("b=%d \n ",y.x.b);
//      printf("address of a = %d \n",&y.a);
//      printf("addressy of b = %d \n",&y.x.b);
//      printf("address of x = %d \n",&y.x);
//      printf("address of y = %d \n",&y);


// }
//--separated nested structure--
// one structutre variable declaring inside another struture
// struct rgukt{
//     int a;
// }
// struct cse{
//         int b;
//         struct rgukt x;
// }y;
// #include <stdio.h>
// struct rgukt{
//     int a;
// };
// struct cse{
//         int b;
//         struct rgukt x;
// }y;
// int main(){
//     y.b=20;
//     y.x.a=30;
//     printf("b=%d",y.b);
//     printf("a=%d \n",y.x.a);
// }

//--structure and array--
//a stucture variable declaring using arrays than need to access large amount of students or employess data
//syntax
// struct cse{
//     int id;
//     char name[20];
//     float marks;
// }x[60]
//create 60 number of students details using stucture and arrays
// #include <stdio.h>
// struct cse{
//     int id;
//     char name[20];
//     float marks;
// }x[60];
// int main(){
//     int n;
//     printf("enter the numbers of students \n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//             printf("enter the student Id");
//             scanf("%d",&x[i].id);
//             printf("enter the student name \n");
//             scanf("%s",x[i].name);
//             printf("enter the student marks \n");
//             scanf("%f",&x[i].marks);
// }
//  for(int i=0;i<n;i++){
//             printf("the student Id %d \n",x[i].id);
//             printf("the student name %s \n",x[i].name);
//             printf("the student marks %f \n",x[i].marks);
// }
// }
// #include <stdio.h>
// struct csse{
//        int id;

// }x[20];
// int main(){
//        int n;
//        scanf("%d",&n);
//       for(int i=0;i<n;i++){
//        scanf("%d",&x[i].id);
//       }
//       for(int i=0;i<n;i++){
//        printf("%d",x[i].id);
//       }

// }
//--stucture and pointer--
//the stucture  variable itself having memory address the pointer variable holding address of structure variable 
// then we can access sturcture member using symbol.
//  #include <stdio.h>
// struct cse{
//    int a;
//    float b;
// }x;
// int main(){
//     struct cse *p;
//     p=&x;
//     p->a=10;
//     p->b=20.56;
//     printf("a=%d \n",p->a);
//     printf("b=%f \n",p->b);

// }
// #include <stdio.h>
// struct cse{
//     int id;
//     char name[20];
//     float marks;
// }x[60];
// int main(){
//     struct cse *p;
//     int n;
//     p=x;
//     printf("enter the numbers of students \n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//             printf("enter the student Id");
//             scanf("%d",&(p+i)->id);
//             printf("enter the student name \n");
//             scanf("%s",(p+i)->name);
//             printf("enter the student marks \n");
//             scanf("%f",&(p+i)->marks);
// }
//  for(int i=0;i<n;i++){
//             printf("the student Id %d \n",(p+i)->id);
//             printf("the student name %s \n",(p+i)->name);
//             printf("the student marks %f \n",(p+i)->marks);
// }
// }
//--structure and function--
//sturcture artual argmts to formal argmt.
// we passing the structure member from one function to another function 
//i.e means passing from actual arguments to formal 
// passing the argument three ways.1.passing indivual arguments2.passing entire stucture3.passing stucture address.
//syntax
// #include <stdio.h>
// struct cse{
//     int a;
//     float b;
//     char c;

// }x;
// int display();
// int main(){
//     x.a=10;
//     x.b=22.44;
//     x.c='s';
//     display(x.a,x.b,x.c);

// }
// int display(){
//     printf("%d \n",x.a);
//     printf("%f \n",x.b);
//     printf("%c \n",x.c);

// }


//1.-passing indivifual arguments of the sturcture-
//passing individual arguments from actual argument to formal arguments
// #include <stdio.h>
// struct cse{
//     int a;
//     float b;
//     char c;

// }x;
// int display(int ,float,char);
// int main(){
//     x.a=10;
//     x.b=22.44;
//     x.c='s';
//     display(x.a,x.b,x.c);

// }
// int display(int a ,float b,char c){
//     printf("%d \n",x.a);
//     printf("%f \n",x.b);
//     printf("%c \n",x.c);


// }
//2.passing entire stucture
//we passing the entire sturture from one function to another function
//i.e means passing the entire stucture with an argument.passing form actual argument to formal arguments
// #include <stdio.h>
// struct cse{
//     int a;
//     float b;
//     char c;

// }x;// it acts global variable
// // This function takes a copy of a struct and calls it 'y'
// int display(struct cse y);
// int main(){
//     x.a=10;
//     x.b=22.44;
//     x.c='s';
//     display(x);

// }
// int display(struct cse y){// 'y' contains the copy of x
//     printf("%d \n",x.a);// x is act as global variable
//     printf("%f \n",y.a);
//     printf("%f \n",y.b);
//     printf("%c \n",y.c);



// }
//-3.passing structure address-
//a structure variable itslef having some address now we passing 
//some address of the struture from actual argumrnts to formal arguments
// #include <stdio.h>
// struct cse{
//     int a;
//     float b;
//     char c;

// }x;
// int display(struct cse *y);
// int main(){
//     x.a=10;
//     x.b=22.44;
//     x.c='s';
//     display(&x);

// }
// int display(struct cse *y){
//     printf("%d \n",y->a);
//     printf("%f \n",y->b);
//     printf("%c \n",y->c);



// }
//--self reference structure--
//structure contain one or more pointer i.e pointing to same sturctures is called self referenced structure.
//syntax
// struct structure name{
//     struct structname *variable
// }
// #include <stdio.h>
// struct cse {
//     int a;
//     struct cse *next;

// };
// int main(){
//     struct cse ob1,ob2,ob3;
//     ob1.a=10;
//     ob1.next=NULL;
//     ob2.a=20;
//     ob2.next=NULL;
//     ob3.a=30;
//     ob3.next=NULL;
//     ob1.next=&ob2;//ob1 → ob2 → ob3 → NULL
//     ob2.next=&ob3;
//     printf("ob1 value = %d \n",ob1.a);
//     printf("ob2.value = %d \n ",ob2.a);
//     printf("ob3.value = %d \n ",ob3.a);
//     printf("ob2 value = %d \n",ob1.next->a);//printnext value
//     printf("ob3 value = %d \n",ob1.next->next->a);
// }
// ---unino--
// union is user definef data type using union we can declare diifernt data types in a single variable name.
// syntax
// union structure{
       //type value1 ;
       //type value2 ;
       //type value3 ;
//}variable name;
//ex:union cse{
// int a;
// float b;
// char a;
//}x
//1.declaring different datatypes using unions.
// #include <stdio.h>
// union cse{
//     int a;
//     int b;
//     char c;
// }x;
// int main(){
//     x.a=10;
//     x.b=20.50;
//     x.c='r';
//     printf("a=%d \n",x.a);
//     printf("b=%d \n",x.b);
//     printf("c=%d \n",x.c);// doubt
// }
