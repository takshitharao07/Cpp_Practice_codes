#include<iostream>
#include<string>
using namespace std;
//  hello  -->  hel*lo 

void dup(string s,int i){
	//base case
	if(s[i]==*s.end()){ //pointer to end of the string
		return;
	}
	//recursive case
	if(s[i]==s[i+1]){
		cout<<s[i]<<"*";
	}
	else
        cout<<s[i];
	dup(s,i+1);
}
int main(){
	string s;
	cin>>s;
	dup(s,0);
	return 0;
}