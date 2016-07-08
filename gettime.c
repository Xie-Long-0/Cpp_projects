#include <stdio.h>
#include <time.h>
#include <conio.h>

int main( )
{
time_t nowtime;
struct tm *timeinfo;
int year, month, day, hour, min, sec;
while (1)
{
	time( &nowtime );
	timeinfo = localtime( &nowtime );
year = timeinfo->tm_year + 1900;
month = timeinfo->tm_mon + 1;
day = timeinfo->tm_mday;
hour = timeinfo->tm_hour;
min = timeinfo->tm_min;
sec = timeinfo->tm_sec;
printf("%d年 %d月 %d日 %d时 %d分 %d秒\n", year, month, day, hour, min, sec);
usleep(500000);
clrscr();
}
return 0;
}
