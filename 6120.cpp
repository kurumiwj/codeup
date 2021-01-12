#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2;	//s1为给定字符串，s2为要删除的字符组
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.length();i++)
		if(s2.find(s1[i])==string::npos) printf("%c",s1[i]);
	printf("\n");
	system("pause");
	return 0;
}