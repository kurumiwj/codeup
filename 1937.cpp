#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	while(scanf("%d",&n)!=EOF){
		vector<int> a(n);
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		scanf("%d",&m);
		vector<int> b(m);
		for(int i=0;i<m;i++) scanf("%d",&b[i]);
		sort(a.begin(),a.end());
		for(int j=0;j<m;j++){
			int left=0,right=n-1,mid;
			while(left<=right){
				mid=(left+right)/2;
				if(b[j]==a[mid]){
					printf("YES\n");
					break;
				}
				else if(b[j]<a[mid]) right=mid-1;
				else left=mid+1;
			}
			if(left>right) printf("NO\n");
		}
	}
	system("pause");
	return 0;
}