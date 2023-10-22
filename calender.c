#include<stdio.h>
#include<string.h>
#include<conio.h>
int start(int);

int main()
{
    
int k,l,i,j,day, weekday=0,year;
printf("Enter the year:\n");
scanf("%d",&year);
l=start(year);


char *month[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
if(( year%400 == 0)|| (( year%4 == 0 ) &&( year%100 != 0)))
date[1]=29;
for(j=0;j<=11;j++)
{
printf("\t*****%s*****\n",month[j]);
k=date[j];
printf("  sun  mon  tue  wed  thus  fri  sat");
printf("\n");
for(weekday=0; weekday<l;weekday++)
printf("     ");
for(day=1;day<=k;day++)
{
printf("%5d",day);
if(++weekday>6)
{
printf("\n");
weekday=0;
}
l=weekday;
}
printf("\n");
}
getch();
}
int start(int year)
{
int day;
day=(((year-1)*365) + ((year-1)/4) - ((year-1)/100) + (year)/400+1)%7;
return day;
}