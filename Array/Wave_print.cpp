#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int col=0;col<m;col++){
        if(col%2==0){
            // even no. 
            //print top-bottom
            for(int row=0;row<n;row++){
                cout<<a[row][col]<<" ";
            }
        }
        else{
            // odd no.
            //print bottom-top
            for(int row=n-1;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
    }
    return 0;
}