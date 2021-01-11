#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[256];
	gets(str);
	int i,j;
	for(i=0,j=strlen(str)-1;i<j;i++,j--){
		if(str[i]!=str[j]) break;
	}
	if(i<j) printf("NO");
	else printf("YES");
	system("pause");
	return 0;
}