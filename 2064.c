#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int m,i,j,cnt;
	char c[102][22];
	scanf("%d",&m);
	for(i=1;i<=m;i++){
		scanf("%s",c[i]);
		cnt=1;
		for(j=i;j>1;j--){
			printf("%d=%s ",i-j+1,c[j]);
			cnt++;
			if(cnt==4){
				j--;
				break;
			}
		}
		printf("%d=%s\n",i-j+1,c[j]);
	}
	system("pause");
	return 0;
}