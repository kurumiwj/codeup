#include <stdio.h>
#include <stdlib.h>

int main(){
	char a[200],b[100];
	int i,j;
	while(scanf("%s %s",a,b)!=EOF){
		for(i=0;a[i]!='\0';i++);
		for(j=0;b[j]!='\0';j++) a[i++]=b[j];
		a[i]='\0';
		printf("%s\n",a);
	}
	system("pause");
	return 0;
}