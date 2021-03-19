#include<stdio.h>

 int main() 
 {
    FILE *ptr;
    int num=45;
    ptr=fopen("generated.txt","r");
   // fprintf(ptr,"the value of num is %d .",num);
   char c=fgetc(ptr);
    printf("the value of char is ");
   while(c!=EOF)
   {
       printf("%c",c);
       c=fgetc(ptr);
   }
 //  printf("the value of char is ")
    fclose(ptr);
    return 0;
}