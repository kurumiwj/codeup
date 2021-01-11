#include <iostream>
#include <cstdlib>
using namespace std;

int m=1,P[8],a[95][8]={0};
bool hashTable[8]={false};
void generate(int index){
	if(index==9){
		for(int i=1;i<=8;i++) a[m][i-1]=a[m][i-1]*10+P[i];
		m++;
		return ;
	}
	for(int x=1;x<=8;x++){
		if(hashTable[x]==false){
			bool flag=true;
			for(int pre=1;pre<index;pre++){
				if(abs(pre-index)==abs(x-P[pre])){
					flag=false;
					break;
				}
			}
			if(flag){
				P[index]=x;
				hashTable[x]=true;
				generate(index+1);
				hashTable[x]=false;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	generate(1);
	for(int i=0;i<n;i++){
		scanf("%d",&m);
		for(int j=0;j<8;j++) printf("%d",a[m][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}