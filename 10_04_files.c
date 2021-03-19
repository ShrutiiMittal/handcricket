#include<stdio.h>

 int main() 
 {
    FILE *ptr;
    char name1[20],name2[20];
    int sal1,sal2;
    ptr=fopen("sample2.txt","w");
    printf("enter the name of two employees :\n");
    gets(name1);
    gets(name2);
    printf("enter the salary of %s and %s respectively: \n",name1,name2);
    scanf("%d%d",&sal1,&sal2);
    fprintf(ptr,"%s,%d\n%s,%d\n",name1,sal1,name2,sal2);
    fclose(ptr);
    return 0;
}