#include<bits/stdc++.h>
using namespace std;
int fact(int num){
    int ans=1,i=1;
    while(i<=num){
        ans*=i;
        i++;
    }
    return ans;
}
float comb_value(int n,int r){
    float fac=fact(n)/(fact(r)*fact(n-r));
    return fac;
}
int main(){
    int n,r;
    cin>>n>>r;
    if(n==r){
        cout<<"Value of nCr = "<<1;
    }
    if(n>r){
        cout<<"Value of nCr = "<<comb_value(n,r);
    }
    else if(n<r)
        cout<<"---The value of n should be greater than r---";
}        