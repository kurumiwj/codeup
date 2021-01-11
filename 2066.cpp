#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

struct num{
	int number;	//记录数字
	int group;	//记录组号
};

bool compare(num a,num b){
	if(a.group==b.group) return a.number<b.number;
	else return a.group<b.group;
}

int max(num *a,int n){
	int max=a[0].number;
	for(int i=1;i<n;i++)
		if(max<a[i].number) max=a[i].number;
	return max;
}

int min(num *a,int n){
	int min=a[0].number;
	for(int i=1;i<n;i++)
		if(min>a[i].number) min=a[i].number;
	return min;
}

int main(){
	int m,n;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		cin>>n;
		num a[n];
		int cnt=1;	//cnt用来统计总组数
		for(int j=0;j<n;j++) scanf("%d",&a[j].number);
		for(int j=0;j<n;j++) scanf("%d",&a[j].group);
		sort(a,a+n,compare);	//对a组进行排序，组号从小到大优先，其次数字从小到大
		for(int j=1;j<n;j++) if(a[j].group>a[j-1].group) cnt++;	//统计总组数
		// printf("%d\n",cnt);
		int t,k=0,max_a=max(a,n),min_a=min(a,n);
		// for(int j=0;j<n;j++) printf("%d %d\n",a[j].number,a[j].group);
		vector<bool> total(max_a+1,false);	//统计每组有几种元素
		vector<vector<int> > b(cnt+1,vector<int>(max_a+5,0));	//存放各个数字在分组中出现的次数
		for(int j=1;j<=cnt;j++){
			b[j][a[k].number]=1;	//每组的第一个元素
			for(t=k+1;a[t].group==a[t-1].group;t++){
				total[a[t].number]=true;	//记录该元素出现
				b[j][a[t].number]++;
			}
			k=t;
		}
		for(int j=1;j<=cnt;j++){
			printf("%d={%d=%d",j,min_a,b[j][min_a]);
			for(t=min_a+1;t<=max_a;t++)
				if(b[j][t]>0||total[t]==true) printf(",%d=%d",t,b[j][t]);
			printf("}");
			printf("\n");
		}
	}
	system("pause");
	return 0;
}