#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    int n,i=0,ans=0;
    long long sum=0;
    cin>>n;
    for(int j=0;j<a.size();j++){    
        cin>>a[i];      
    }
    while(sum<n){
        if(i<a.size()&&a[i]<=sum+1){ // i can take it and
            sum+=a[i];
            i++;
        }
        else{
            ans++;
            sum+=sum+1; //sum= 2*(sum)+1
        }
    }
    cout<<ans;
}