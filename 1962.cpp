#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s,a,b;	//s为多个单词的字符串，a为待替换的单词，b是替换的单词
	while(getline(cin,s)){
		s=" "+s+" ";
		cin>>a;
		a=" "+a+" ";
		cin>>b;
		b=" "+b+" ";
		if(s.find(a)!=string::npos) s.replace(s.find(a),a.length(),b);
		s.erase(0,1);
		s.erase(s.length()-1,1);
		cout<<s<<endl;
		cin.ignore();
	}
	system("pause");
	return 0;
}