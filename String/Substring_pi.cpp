#include<iostream>
#include<string>
using namespace std;
string replace_pi(string s){
    //base case
    if(s.size()==0){
        return "";
    }
    //recursive case
    if(s.substr(0,2)=="pi"){
        return "3.14"+replace_pi(s.substr(2));
    }
    return s[0]+replace_pi(s.substr(1));
}
int main(){
    string s;
    cin>>s;
    cout<<replace_pi(s);
    return 0;
}