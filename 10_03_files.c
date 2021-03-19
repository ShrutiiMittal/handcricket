#include<stdio.h>

 int main() 
 {
    FILE *ptr1,*ptr2;
    char c,store[50];
    int i=0;
    ptr1=fopen("sample.txt","r");
    ptr2=fopen("sample2.txt","w");
    //for(int i=0;i<2;i++){
    c=fgetc(ptr1);
    while(c!=EOF)
    {
       // fprintf(ptr2,"%c",c);
       // fprintf(ptr2,"%c",c);
       store[i]=c;
       c=fgetc(ptr1);
       i++;
    }
    fprintf(ptr2,"%s\n",store);
     fprintf(ptr2,"%s\n",store);
    //}
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}