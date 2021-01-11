#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n,i,x;
	while(scanf("%d",&n)!=EOF){
		int *a = (int *)malloc(sizeof(int)*(n+3));
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++) scanf("%d",a+i);
		scanf("%d",&x);
		for(i=0;i<n;i++)
			if(*(a+i)==x){
				printf("%d\n", i);
				break;
			}
		if(i==n) printf("-1\n");
	}
	system("pause");
	return 0;
}