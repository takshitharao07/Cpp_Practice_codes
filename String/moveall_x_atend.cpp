//live session 20....2:30:00
#include<iostream>
#include<string>
using namespace std;
string move_x(string s){
    //base case
    if(s.length()==0){
        return "";
    }
    //recursive case
    string small_str= move_x(s.substr(1));
    if(s.substr(0,1)=="x"){
        return move_x(s.substr(1))+s.substr(0,1);
    }
    else{
        return s.substr(0,1)+move_x(s.substr(1));
    }
}
int main(){
    string s;
    cin>>s;
    cout<<move_x(s)<<endl;
    return 0;
}