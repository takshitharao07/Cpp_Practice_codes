#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isPalindrome(string s){
    char temp;
    vector<char> data;
    for(auto i=s.begin();i!=s.end();i++){ // auto --> automatically identify type of element in range
            // pointer at first character to last character of string 
        temp=*i;
        if(temp>='A'&&temp<='Z'){
            data.push_back(tolower(temp));
            // data.push_back((temp - 'A') + 'a');
        }
        else if(temp>='a'&&temp<='z'){
            data.push_back(temp);
        }
        else if(isdigit(temp)){
            data.push_back(temp);
        }
    }
    int i=0,j=data.size()-1;
    while (i<j){
        if (data[i]!=data[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(isPalindrome(s)==1){
        cout<<"true";
    }
    else cout<<"false";
    return 0;
}