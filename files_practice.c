#include<stdio.h>

 int main() 
 {  
    int num;
    FILE *ptr;
    ptr=fopen("multiplication_table.txt","w");
    printf("enter the number of which u want the multiplication table of :\n");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    return 0;
}