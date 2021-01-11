#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,m,i,k;
	while(scanf("%d%d",&n,&m)!=EOF){
		int a[2][200]={{0},{0}};
		for(i=0;i<n;i++){
			scanf("%d",&k);
			a[0][i]=k;
			a[1][k]++;
		}
		for(i=0;i<n;i++){
			if(a[1][a[0][i]]==1) printf("BeiJu\n");
			else printf("%d\n",a[1][a[0][i]]-1);
		}
	}
	system("pause");
	return 0;
}