// #include<stdio.h>
// int chng(int *x);
//  int main() 
//  {
//     int i=4;
//     chng(&i);
//   //  printf("the address of i is %u",&i);
//   printf("value after chng function %d",i);
//     return 0;
// }

// int chng(int *x){
//     *x = *x * 10;
// }

#include<stdio.h>
void sum_avg(int *sum,int *avg,int x,int y);
 int main() 
 {
     int x ,y=0,p1,p2;
    printf("enter the values of x and y \n");
    scanf("%d%d",&x,&y);
    sum_avg(&p1,&p2,x,y);
    printf("the value of sum is %d and average is %d\n",p1,p2);
    return 0;
}

void sum_avg(int *sum,int *avg,int x,int y)
{
    *sum=x+ y;
    *avg= (x+y)/2; 
}