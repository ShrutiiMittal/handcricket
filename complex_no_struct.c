#include<stdio.h>
typedef struct complex_no
{
    int x;
    int y;/* data */
}cmp;

 int main() 
 {  
    cmp c[5];
    cmp *p;
    int i;
    for(i=0;i<5;i++){
        printf("enter the %d value for x and y:",(1+i));
        scanf("%d%d",&c[i].x,&c[i].y);
    }
    p=&c;
    display(p);
    return 0;
}

void display(cmp *pnt){
     printf("the complex numbers are :\n");
    for(int i=0;i<5;i++,pnt++)
        printf("%d + %di\n",pnt->x,pnt->y);
}