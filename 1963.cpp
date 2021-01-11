#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(){
	string s;
	char c;
	int location;
	while(getline(cin,s)){
		scanf("%c",&c);
		while((location=s.find(c))!=string::npos) s.erase(location,1);
		cout<<s<<endl;
		cin.ignore();
	}
	system("pause");
	return 0;
}