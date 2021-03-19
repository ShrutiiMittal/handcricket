#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main() 
 {
     
    int n,num,c=0;
    srand(time(0));
    n=(rand()%(100-1+1))+1;
    // number=(rand()%(upper-lower+1))+lower

    printf("enter any number between 1 and 100 \n");
    while( 1){
        c++;
        scanf("%d",&num);
     if(num>n)
     printf("enter a lower number please\n");
     else if(num<n)
     printf("enter a greater number pls\n");
     else
     {
         printf("congratulations u guessed it in %d times\n",c);
         break;
     }
    }
    return 0;
}