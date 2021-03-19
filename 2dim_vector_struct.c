#include<stdio.h>
typedef struct vector {
    int x;
    int y;
}vec;

 int main() 
 {  vec v1,v2;
    printf("enter the value of x and y of first vector:");
    scanf("%d%d",&v1.x,&v1.y);
    printf("\nenter the value of x and y of secnd vector:");
    scanf("%d%d",&v2.x,&v2.y);
   printf("\nthe sum of vectors are: %dx + %dy",sumVector(v1.x,v2.x), sumVector(v1.y,v2.y));
    return 0;
}

int sumVector(int a,int b)
{   
    return a+b;
}