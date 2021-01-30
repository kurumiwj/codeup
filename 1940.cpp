#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int a[4];
	for(int i=1000;i<=9999;i++){
		a[0]=i/1000,a[1]=i%1000/100,a[2]=i%100/10,a[3]=i%10;
		reverse(a,a+4);
		int tmp=a[0]*1000+a[1]*100+a[2]*10+a[3];
		if(tmp==i*9) printf("%d\n",i);
	}
	system("pause");
	return 0;
}