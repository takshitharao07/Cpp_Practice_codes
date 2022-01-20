#include<iostream>
using namespace std;
int sum(int a=0,int b=0,int c=0,int d=0,int e=0){
    return a+b+c+d+e;
}
int main(){
    cout<<sum(4)<<endl;
    cout<<sum(2,3)<<endl;
    cout<<sum(4,5,2)<<endl;
    cout<<sum(2,3,4,5)<<endl;
    cout<<sum(9,8,7,6,5)<<endl;
}