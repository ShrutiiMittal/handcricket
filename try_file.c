#include<stdio.h>

 int main() 
 {
    int n;
    printf("enter the value of n\n");
    scanf("&d",&n);
    int a[n];
    printf("enter array values");
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    printf("%d,%d,%d",&a[0],a[1],a[2]);
    
    return 0;
}