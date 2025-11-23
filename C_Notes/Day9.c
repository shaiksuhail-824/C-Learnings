//---file_handling---
// file concept introduced 
//creating file,reading ,writing,close file.
// by close(),
//file is collection of data information which is stored in hard disk.
// the process of creating ,reading ,and closing the file by using the function 
//by printf(),scanf() is called file handling.
//types of data
//1.text data--.txt,.csv,.
// the file extend with .txt ,.csv
//2.binary data : 
//the data form of 0 and 1 is extend with .jpeg,.jpg
//--types of function--
//functions are 
//1.fopen() open a file
//2.fclose() close a file
//3.fpirntf() formatted output statement,writing block of data  to file
// 4.fputs() formatted output statement,writing block of data  to file
// 5.fputc() formatted output statement,writing single character to file
// 6.fscanf() formatted input statememt
// 7.fgets() formatted input statement
// 8.fgetch() formatted input statement
// 8.fread() reading ablock of data from file
//9.fwrite() writing block of data to file
//10.
//r open a file using read mode ,if file not exits error comes.
//w open a file using write mode ,if file not exit create the file it already exit write the data
//a addd the additional to the exits file .if not created it is created the file.
//r+ open a file reading& writing mode ,must exits else error comes. 
//w+ open a file using reading  & writing mode, it file not exits it create the file.
// a+ open a file using reading & writing mode ,add the data to the end of the file.
// --file operation--
// here performing different operators on th e file
//-1.creating a file-
// first have to create a file ,if you wnat to create a file ,the file is opening with open mode.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// FILE *p;
// p=fopen("cse.txt","r");
// if(p==NULL){
//     printf("file not a created\n");
//     return 1;   
//     }
//     printf("file is created \n");
//     fclose(p);
// }

//-2.writing a file-
// we can write the data to the  file .a file is opening with write mode.
//by using this data types fprintf(),fputs(),fput(),fwrite() we write data
//1.fprintf() -- to write the block of code.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// FILE *p;
// p=fopen("cse.txt","w");
// if(p==NULL){
//     printf("file not a created\n");
//     return 1;   
//     }
// printf("file is created \n");
// fprintf(p,"this is suhail \n");
// fprintf(p," im student of rgukt");
// fclose(p);
// }
// -2fputs()-.that is used to write block of data to the file
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// FILE *p;
// p=fopen("cse.txt","w");
// if(p==NULL){
//     printf("file not a created\n");
//     return 1;   
//     }
//     printf("file is created \n");
//     fputs("this is suhail \n",p);
//     fputs(" im student of rgukt \n",p);
//     fputs("good morning \n",p);
//     fclose(p);
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// FILE *p;
// int id;
// float marks;
// char  name[20];
// p=fopen("cse.txt","w");
// if(p==NULL){
//     printf("file not a created\n");
//     return 1;   
//     }
//     printf("file is created \n");
//     printf("enter the value \n");
//     fprintf(p,"%d \n %f \n %s\n",55,12.3,"suhail");
//     fclose(p);
// }
//-fputc function-
//fputc function writing a single character to the file.
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// FILE *p;
// p=fopen("cse.txt","w");
// if(p==NULL){
//     printf("file is not created");
// }
// fputc('s',p);
// }
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
// FILE *p;
// char s[100]="this is suhail";
// p=fopen("cse.txt","w");
// if(p==NULL){
//     printf("file is not created");
// }
// for(int i=0;i<=strlen(s);i++){
// fputc(s[i],p);
// }
// }
// -fwrite() function-
//fwrite function also write the block of code to the file.
//syntax
// fwrite(data,sizeof(type),sizeof(data),filepointer);
//  #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
// FILE *p;
// char s[100]="this is suhail from ongole rgukt";
// p=fopen("number.bin","wb");
// if(p==NULL){
//     printf("file is not created");
// }
// fwrite(s,sizeof(char),strlen(s),p);
// }
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     int nums[5] = {10, 20, 30, 40, 50};

//     fp = fopen("numbers.bin", "wb");
//     if (fp == NULL) {
//         printf("Unable to open file!");
//         return 0;
//     }

//     fwrite(nums, sizeof(int), 5, fp);

//     fclose(fp);
//     printf("Data written to binary file successfully!");
//     return 0;
// }

//3.reading a file
// reading data to the file .reading file from the file
//fscanf(),fgets(),fgetc(),fread().
//1.-fscanf-
// it is usef to reading the block of data of the file.
// syntax
//fscanf(FILE *strean,const char *format)
//fscanf(p,file);
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// FILE *p;
// char x[100];
// p=fopen("cse.txt","r");
// if(p==NULL){
//     printf("file is not created");
//     }
//     while(fscanf(p,"%s",x)!=EOF)
//     printf("%s ",x);
//     fclose(p);
// }
// FILE *fp = fopen("data.txt", "r");
// int age;
// char name[20];

// while (fscanf(fp, "%d %s", &age, name) != EOF) {
//     printf("%d %s\n", age, name);
// }

// fclose(fp);

//  }
//3.fgets()
 //fgets(array,sizeof(data),file pointer);
// #include <stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("csea.txt","r");
//     char s[100];
//     //step
//     while(fgets(s,sizeof(s),p)!=NULL){
//          printf("%s ",s);
//     }
//        fclose(p);

// }
//fgetc()
// #include <stdio.h>
// int main(){
// FILE *fp = fopen("cse.txt", "r");
// char ch;

// while ((ch = fgetc(fp)) != EOF) {
//     printf("%c", ch);
// }

// fclose(fp);
// }
// #include <stdio.h>

// int main() {
//     FILE *fp;
//     int num;

//     fp = fopen("numbers.bin", "rb");
//     if (fp == NULL) {
//         printf("File not found!");
//         return 0;
//     }

//     // Read until fread() fails or reaches end of file
//     while (fread(&num, sizeof(int), 1, fp) == 1) {
//         printf("%d\n", num);
//     }

//     fclose(fp);
//     return 0;
// }


//3.closing a file
//fclose()
//close the function by using the syntax
//fclose(pointer)
// #include <stdio.h>
// #include <stdlib.h>
// int main(){

//     FILE *p;
//     p=fopen("cse.txt","w");
//     printf("%d \n",p);
//     fclose(p);
//     printf("%d \n",p);

// }
//  #include <stdio.h>
// #include <stdlib.h>
// int main(){

//     FILE *p;
//     p=fopen("cse.txt","w");
//     printf("%d \n",p);
//     fclose(p);
//     p=NULL;
//     printf("%d \n",p);

// }

// #include <stdio.h>

// int main() {

//     FILE *fp;
//     fpos_t pos;               // used for fgetpos() and fsetpos()
//     char ch;

//     fp = fopen("cse.txt", "r");
//     if (fp == NULL) {
//         printf("File not found!");
//         return 0;
//     }

//     /*
//     ------------------ RANDOM ACCESS FUNCTIONS REVISION ------------------

//     1. fseek(fp, offset, position)
//        -> Moves file pointer anywhere in file.
//        -> position:
//             SEEK_SET = beginning
//             SEEK_CUR = current location
//             SEEK_END = end of file

//     2. ftell(fp)
//        -> Returns current file pointer position in bytes.

//     3. rewind(fp)
//        -> Moves pointer to beginning of file.
//        -> Same as fseek(fp, 0, SEEK_SET)
//        -> Also clears error flags.

//     4. fgetpos(fp, &pos)
//        -> Saves the current file pointer position into 'pos'.
//        -> Useful when you want to jump back later.

//     5. fsetpos(fp, &pos)
//        -> Returns file pointer to previously saved position.
//     ----------------------------------------------------------------------
//     */

//     // --------------------- fseek() Example -----------------------
//     fseek(fp, 5, SEEK_SET);        // move pointer 5 bytes from start
//     printf("Character at 6th byte: %c\n", fgetc(fp));


//     // --------------------- ftell() Example -----------------------
//     long location = ftell(fp);     // get current byte position
//     printf("Pointer now at byte: %ld\n", location);


//     // --------------------- rewind() Example ----------------------
//     rewind(fp);                    // move pointer to beginning
//     printf("After rewind, pointer at: %ld\n", ftell(fp));


//     // ------------------- fgetpos() Example -----------------------
//     fgetpos(fp, &pos);             // save current pointer
//     printf("First char: %c\n", fgetc(fp));


//     // Move pointer somewhere else
//     fseek(fp, 10, SEEK_SET);

//     // ------------------- fsetpos() Example -----------------------
//     fsetpos(fp, &pos);             // restore saved position
//     printf("After fsetpos, again first char: %c\n", fgetc(fp));


//     fclose(fp);
//     return 0;
// }

//typedef
// #include <stdio.h>
// typedef struct students{
//     int id;
//     char name[20];
// }STU;
// typedef int  marks[20];
// typedef STU *ptr;
// int main(){
//     STU s ={1188,"suhail"};
//     marks m={10,2,0,4};
//     ptr p=&s;
//     printf("ID=%d",p->id);
//     printf("name=%s",p->name);
//     for(int i=0;i<4;i++){
//         printf("%d \n",m[i]);
//     }
// }
//enum (enumeration) is a user-defined data type that allows you 
//to assign names to integer constants.
// #include <stdio.h>
// enum std{id,name,class};
// int main(){
//      enum std l;
//      l=name;
//      printf("%d \n",l);
//      printf("%d \n",class);

// }
// #include <stdio.h>
// enum std{id=7,name=10,class};
// int main(){
//      enum std l;
//      l=name;
//      printf("%d \n",l);
//      printf("%d \n",class);
// }
// #include <stdio.h>
// typedef enum{
//     male,
//     female,
//     other,
// }gender;
// int main(){
//     gender g1=female;
//     printf("%d",g1);
// }
// #include <stdio.h>
// enum gender{male,female,other};
// int main(){
//      enum gender g1;
//      g1=female;
//      switch (g1)
//      {
//      case male:
//         printf("THE give number is male");
//         break;
//       case female:
//         printf("THE give number is female");
//         break;
//       case other:
//         printf("THE give number is other");
//         break;
//      default:
//         break;
//      }
// }
//enum to integer constant
// #include <stdio.h>
// enum gender{male ,female,other};

// int main(){
//     enum gender;
//     printf("%d",female);
// }
// integer constant to enum;
