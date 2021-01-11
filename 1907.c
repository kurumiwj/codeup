#include <stdio.h>
#include <stdlib.h>

int eat_sweet(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else return eat_sweet(n-1)+eat_sweet(n-2);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",eat_sweet(n));
	}
	system("pause");
	return 0;
}