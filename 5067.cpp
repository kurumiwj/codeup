#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int Partition(int a[],int left,int right){
	int tmp=a[left];
	while(left<right){
		while(left<right&&a[right]<=tmp) right--;
		a[left]=a[right];
		while(left<right&&a[left]>=tmp) left++;
		a[right]=a[left];
	}
	a[left]=tmp;
	return left;
}

int QSort(int a[],int left,int right,int k){
	if(left<right){
		int pos=Partition(a,left,right);
		if(pos>k) QSort(a,left,pos-1,k);
		else if(pos<k) QSort(a,pos+1,right,k);
		else return pos;
	}
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",a+i);
	//先排序，后输出
	// sort(a,a+n);
	// printf("%d\n",a[n-m]);
	//直接用nth_element函数找出第k大数
	// nth_element(a,a+n-m,a+n);
	// printf("%d\n",a[n-m]);
	printf("%d\n",a[QSort(a,0,n-1,m-1)]);
	system("pause");
	return 0;
}