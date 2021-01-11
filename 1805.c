#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char a[105];
	int i,flag;
	while(gets(a)!=NULL){	//接受一整行字符串给a
		a[0]-=32;	//首字母转为大写
		for(i=1;a[i]!='\0';i++){
			flag=false;	//用来标记是否中间有空格等字符
			while(a[i]==' '||a[i]=='\t'||a[i]=='\r'||a[i]=='\n') flag=true,i++;
			if(flag) a[i]-=32;
		}
		printf("%s ",a);
	}
	system("pause");
	return 0;
}