#include<iostream>
using namespace std;
int main(){
    // int, float,double, bool, char --> primitive datatypes
    // user-defined datatypes
    string s;
    //  cin>>s; // hello world --> hello
    getline(cin,s); // hello world --> hello world 
    cout<<s<<endl;
    
    // string s2("I am Takshitha")
    // cout<<s2<<endl;   // I am Takshitha
    
    // char s[100]="Hello world";
    // cout<<s<<endl;


    //// CONCATENATION
    string s1,s3,s2,s4;
    s1="abcd";
    s2="def";
    s3=s1+s2; // abcddef
    cout<<s3<<endl;

    ////COMPARISON
    if(s1>s2){
        cout<<"s1 is greater than s2"<<endl;
    }
    else{
        cout<<"s2 is greater than s1"<<endl;
    }

    ////SUBSTRING
    cout<<s3.substr(3)<<endl;
    cout<<s3.substr(2,5)<<endl; //s.substr(start,range)

    ////LENGTH
    cout<<s3.length()<<endl; //

    ////PUSH & POP CHARACTER
    string s5="abc";
    s5.push_back('d');
    cout<<s3<<endl; // abcd
    s5.pop_back(); // --> removes last character
    cout<<s5<<endl; // abc

    ////AUTO SPECIFIER with POINTERS(begin(), end())
    for(auto i=s.begin();i!=s.end();i++){
        // auto --> automatically identify type of element in range
        // pointer at first character to last character of string 
        cout<<*i<<"..";
    }
    return 0;
    }