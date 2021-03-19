#include<stdio.h>
#include<string.h>
 struct employee
    {
        int code ;
        char name[20];
        int phno;
        float salary;
    };
void printing(struct employee *new1)
{
    printf("%d",new1->phno);
    new1->phno+=1;
    printf("\nvalue in the function :%d\n",new1->phno);
}
 int main() 
 {
    
    struct employee *ptr;
    struct employee e2;
     e2.code=101;
    strcpy(e2.name,"harry");
     e2.phno=848394998;
     e2.salary=479.77;
    ptr=&e2;
     printing(ptr);
     printf("\nvalue outside the function :%d\n",e2.phno);
    return 0;
}
