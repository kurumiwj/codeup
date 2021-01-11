#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s;
	char c;
	while(getline(cin,s)){
		for(int i=0;i<s.length()/2;i++){	//将字符串整体逆置
			c=s[s.length()-1-i];
			s[s.length()-1-i]=s[i];
			s[i]=c;
		}
		cout<<s<<endl;
		// cin.ignore();	//忽略缓冲区的空格等字符
	}
	system("pause");
	return 0;
}