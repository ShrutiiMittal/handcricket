#include<stdio.h>

#define pi 3.14

 int main() 
 {
    float r,h;
    printf("enter radius and height in metres\n");
    scanf("%f%f",&r,&h);
   // printf("value f pi is %f",pi);
   printf("r is %f and height is %f\n",r,h);
    printf("area of circle is %f\n",pi*r*r);
    printf("area of cylinder is %f\n",pi*r*r*h);
    return 0;
}