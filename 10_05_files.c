#include<stdio.h>

 int main() 
 {
    FILE *ptr1,*ptr2;
    int num;
    ptr1=fopen("sample2.txt","r");
    fscanf(ptr1,"%d",&num);
    printf("%d",num);
    ptr2=fopen("sample2.txt","w");
    fprintf(ptr2,"%d",num*2);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}