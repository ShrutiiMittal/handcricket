#include<stdio.h>

 int main() 
 {
    FILE *ptr;
    //int num;
    char c[20],hc[10];
    ptr=fopen("sampleef.txt","r");
    if (ptr==NULL)
    {
        printf("this file does not exists");
    }
    else{
    fscanf(ptr,"%s",&c);
    fscanf(ptr,"%s",&hc);
    fclose(ptr);
    printf("the value of num is %s\t%s",c,hc);
    }

    return 0;
}