#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main() 
 {
     int number, score_comp=0,score_human=0,run;
     printf("*****Hand cricket game**** \n ENTER NUMBER ONLY BETWEEN 1 AND 6(inclusive) \n");
     do{
         printf("enter your number of runs \n");
         scanf("%d",&run);
         if(run>6|| run<1){
             printf("WARNING! enter number only between 1 and 6 \n");
             continue;
         }
         score_human+=run;
         srand(time(0));
         number=(rand()%6)+1;
         // number=(rand()%(upper-lower+1))+lower
         printf("computer's run is %d\n",number);
         score_comp+=number;

     }while(run!=number);
    printf("Ooops! game over!\n comuter's score is %d \n your score is %d\n", score_comp,score_human);
    if(score_comp>score_human)
    printf("sorry ,you lost....better luck next time \n");
    else if(score_comp<score_human)
    printf("congratulations you won\n");
    else printf("its a tie!!\n");

    return 0;
}