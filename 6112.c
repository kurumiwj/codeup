#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		int a[10000]={0},b[100000]={0};	//a数组记录每组每个数字出现的次数，b数字记录输入的数据
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
			a[b[i]]++;
		}
		for(i=0;i<n;i++)
			if(a[b[i]]==1){
				printf("%d\n",b[i]);
				break;
			}
		if(i==n) printf("None\n");
	}
	system("pause");
	return 0;
}