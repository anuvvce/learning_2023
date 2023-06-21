#include<stdio.h>
#include<stdlib.h>

struct timediff
{
    int hours;
    int minutes;
    int seconds;
};
typedef struct timediff timediff;
timediff calcltimediff(timediff funtime1,timediff funtime2)
{
    timediff difference;
    int firsttime= funtime1.hours*3600 + funtime1.minutes*60 + funtime1.seconds;
    int secondtime= funtime2.hours*3600 + funtime2.minutes*60 + funtime2.seconds;
    int diffinseconds = firsttime - secondtime;

    difference.hours =  diffinseconds/ 3600;
    diffinseconds %= 3600;
    difference.minutes = diffinseconds / 60;
    difference.seconds = diffinseconds % 60;

    return difference;
}
int main()
{
    timediff time1,time2,diff;
    printf("Enter the first time (hours minutes seconds)\n");
    scanf("%d %d %d",&time1.hours,&time1.minutes,&time1.seconds);
    printf("Enter the second time (hours minutes seconds)\n");
    scanf("%d %d %d",&time2.hours,&time2.minutes,&time2.seconds);
    diff=calcltimediff(time1,time2);
    printf("Time difference is: %d hours, %d minutes, %d seconds\n", abs(diff.hours), abs(diff.minutes), abs(diff.seconds));
    return 0;
}