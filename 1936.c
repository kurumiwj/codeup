#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,k,a[80]={0},b[80]={0};
	while(scanf("%d",&n)!=EOF)
		for(i=0;i<n;i++){
			int cnt=0;
			scanf("%d",&k);
			for(j=0;j<k;j++) scanf("%d",&a[j]);
			if(a[0]<a[1]||a[0]>a[1]) b[cnt++]=0;
			for(j=1;j<k;j++){
				if(j==k-1&&(a[j]<a[j-1]||a[j]>a[j-1])){
					b[cnt++]=j;
				}
				else if(a[j]>a[j-1]&&a[j]>a[j+1]||a[j]<a[j-1]&&a[j]<a[j+1]) b[cnt++]=j;
			}
			if(cnt>0){
				printf("%d",b[0]);
				for(j=1;j<cnt;j++){
					printf(" %d",b[j]);
					if(j==cnt-1) printf("\n");
				}
			}
		}
	system("pause");
	return 0;
}