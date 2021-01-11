#include <stdio.h>
#include <stdlib.h>
int a[20]={0};

int choose(int sum,int n){	//n个物品中选出总数等于sum的方案个数
	if(sum==0) return 1;
	if(n==0||sum<0) return 0;
	else return choose(sum-a[n-1],n-1)+choose(sum,n-1);
}
int main(){
	const int vol=40;
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		printf("%d\n",choose(vol,n));
	}
	system("pause");
	return 0;
}