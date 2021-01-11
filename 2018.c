#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	if(n==1||n==2) return 1;
	else if(n==0) return 0;
	else return fib(n-1)+fib(n-2);
}

void print(int n){
	int i;
	printf("%d",fib(0));
	for(i=1;i<2*n+1;i++) printf(" %d",fib(i));
	printf("\n");
}
int main(){
	int i,m,n,j,k;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		for(k=0;k<n;k++){
			for(j=0;j<2*(n-k-1);j++) printf(" ");
			print(k);
		}
	}
	system("pause");
	return 0;
}