#include<bits/stdc++.h>
using namespace std;
/*
Input:
4 
Output:
1 2 3 4 5 6 7 
1 2 3 4 5 
1 2 3 
1 
*/
int main(){
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){
    //     int k=1;
    //     for(int j=2*(n-1);j>2*i-2;j--){           xxxxx WRONG xxxxx
    //         cout<<k++<<" ";
    //     }
    //     cout<<"\n";
    // }

    for(int i=n;i>0;i--){
        for(int j=1;j<2*i;j++){                  // vvvvv CORRECT vvvvv
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}