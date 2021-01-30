#include <iostream>
#include <cmath>
using namespace std;

int numSize(int n){
	int cnt=0;
	while(n>0){
		n/=10;
		cnt++;
	}
	return cnt;
}
int main(){
	int n,m;
	while(scanf("%d",&n)!=EOF){
		m=n*n%(int)pow(10,numSize(n));
		if(m==n) printf("Yes!\n");
		else printf("No!\n");
	}
	system("pause");
	return 0;
}