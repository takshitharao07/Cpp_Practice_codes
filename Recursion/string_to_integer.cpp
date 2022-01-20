#include<iostream>
#include<string>
using namespace std;
int str_to_int(string s,int l){ //"48",2
    //base case
    if(l==0){
        return 0;
    }
    //recursive case
    int digit=s[l-1]-'0'; //'8'-'0'=8---->'4'-'0'=4
    return str_to_int(s,l-1)*10+digit; //s[l-2]*10+8 = 48
}
int main(){
    string s;
    cin>>s;
    int l=s.length();
    cout<<str_to_int(s,l);
}