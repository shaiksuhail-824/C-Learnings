// #include <stdio.h>
// int main(){
//     //int lines=0,words=0,inword=0;
//     int ch;
//     FILE *fp;
//     fp=fopen("file.txt","r");
//     if(fp==NULL){
//         printf("cannot open the file \n");
//     }
//     while((ch=fgetc(fp))!=EOF){
//                 printf("%c",ch);
//     }
// }//------read the file data ..
// #include <stdio.h>
// #include <ctype.h>
// int main(){
//     int lines=0,words=0,inword=0;
//     char ch,filename[50];
//     printf("Enter the file name :");
//     scanf("%s",filename);

//     FILE *fp;
//     fp=fopen(filename,"r");
//     if(fp==NULL){
//         printf("cannot open the file \n");
//     }
//     while((ch=fgetc(fp))!=EOF){
//                 if(ch=='\n'){
//                     lines++;
//                 }
//                 if (isspace(ch)){
//                           inword=0;
//                 }else if(inword==0){
//                     inword=1;
//                     words++;
//                 }
//     }
//     fclose(fp);
//     printf("Number of lines :%d \n",lines);
//     printf("Number of words :%d \n",words);

// }
// #include <stdio.h>
// int main(){
//     FILE *source,*target;
//     char ch,sourcefile[50],destfile[50];
//     printf("Enter the source file name :");
//     scanf("%s",sourcefile);
//     printf("Enter the destination file name :");
//     scanf("%s",destfile);
//     source=fopen(sourcefile,"r");
//     if(source==NULL){
//         printf("cannot open the source file \n");
//     }
//     target=fopen(destfile,"w");
//     if(target==NULL){
//         printf("cannot open the target file \n");
//     }
//     while((ch=fgetc(source))!=EOF){
//         fputc(ch,target);
//     }
//     printf("File Copied");

// }
// #include <stdio.h>
// int main(){
//     FILE *source,*target;
//     char ch,sourcefile[50],destfile[50];
//     printf("Enter the source file name :");
//     scanf("%s",sourcefile);
//     printf("Enter the destination file name :");
//     scanf("%s",destfile);
//     source=fopen(sourcefile,"r");
//     if(source==NULL){
//         printf("cannot open the source file \n");
//     }
//     target=fopen(destfile,"a");
//     if(target==NULL){
//         printf("cannot open the target file \n");
//     }
//     while((ch=fgetc(source))!=EOF){
//         fputc(ch,target);
//     }
//     printf("File appended \n");

// }
// #include <stdio.h>
// #include <string.h>
// int main(){
//    FILE *fp;
//    char ch,filename[50],word[50],line[200];
//    int lineNumber=0,found=0;
//      printf("Enter the file name :");
//      scanf("%s",filename);
//      printf("Enter the word to find:");
//      scanf("%s",word);
//      fp=fopen(filename,"r");
//      if(fp==NULL){
//         printf("file cannot exits \n");
//         return 1;
//      }
//     while(fgets(line,sizeof(line),fp)){
//            lineNumber++;
//            if(strstr(line,word)){
//             printf("'%s' found at line %d: %s",word,lineNumber,line);
//             found=1;
//            }     
//     }
//     if(!found){
//         printf("word is not found in file \n");
//     }

// }