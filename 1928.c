#include <stdio.h>
#include <stdlib.h>

typedef int bool;

// int Day1[12]={31,28,31,30,31,30,31,31,30,31,30,31};	//平年
// int Day2[12]={31,29,31,30,31,30,31,31,30,31,30,31};	//闰年
int Day[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
bool isleap(int year){	//判断是否为闰年
	return (year%4==0&&year%100!=0)||(year%400==0);
}

int main(){
	int date1,date2,max,min,year1,year2,month1,month2,day1,day2;
	while(scanf("%d%d",&date1,&date2) != EOF){
		if(date1>date2) max=date1,min=date2;
		else if(date1<date2) max=date2,min=date1;
		else{
			printf("1\n");
			continue;
		}
		year1=max/10000,year2=min/10000;
		month1=max%10000/100,month2=min%10000/100;
		day1=max%100,day2=min%100;
		int day=1;
		while(year2<year1||month2<month1||day2<day1){
			day2++;
			// if(isleap(year2)){
			// 	if(day2==Day2[month2]+1) month2++,day2=1;
			// 	if(month2==13) year2++,month2=1;
			// }else{
			// 	if(day2==Day1[month2]+1) month2++,day2=1;
			// 	if(month2==13) year2++,month2=1;
			// }
			if(day2==Day[month2][isleap(year2)]+1){
				month2++;
				day2=1;
			}
			if(month2==13){
				year2++;
				month2=1;
			}
			day++;
		}
		printf("%d\n", day);
	}
	system("pause");
	return 0;
}