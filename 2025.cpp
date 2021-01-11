#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int m;
	char a[50],b[50];
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%s %s",a,b);
		if(strlen(a)>strlen(b)) printf("%s is longer than %s\n",a,b);
		else if(strlen(a)<strlen(b)) printf("%s is shorter than %s\n",a,b);
		else printf("%s is equal long to %s\n",a,b);
	}
	system("pause");
	return 0;
}