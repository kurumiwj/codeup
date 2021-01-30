#include <iostream>
using namespace std;

const int pricex=5,pricey=3;
const double pricez=1.0/3;
int main(){
	int x=0,y=0,n;
	while(scanf("%d",&n)!=EOF){
		for(x=0;x<=n/pricex&&x<=100;x++)
			for(y=0;y<=n/pricey&&x+y<=100;y++){
				int z=100-x-y;
				if(x*pricex+y*pricey+z*pricez<=n) printf("x=%d,y=%d,z=%d\n",x,y,z);
			}
	}
	system("pause");
	return 0;
}