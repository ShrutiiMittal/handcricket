#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;

 int main() 
 {
    
    // d1.day=22;
    // d1.month=07;
    // d1.year=2020;
    // d2.day=02;
    // d2.month=4;
    // d2.year=2020;
    date d1 = {02,12,2020};
    date d2 = {7,11,2020};
    printf("the date is %d/%d/%d",d1.day,d1.month,d1.year);
   printf("%d",compare(d1,d2));
    return 0;
}

int compare(date d1,date d2){
    printf("\n%d\n",d1.day);
    if(d1.year>d2.year)
    return 1;
    else if(d1.year<d2.year)
    return -1;
    if(d1.month>d2.month)
    return 1;
    else if(d1.month<d2.month) 
    return -1;
    if(d1.day>d2.day)
    return 1;
    else if(d1.day<d2.day)
    return -1;
    return 0;
}