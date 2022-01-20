#include<iostream>
using namespace std;
/*
X  X  X  X  X   
X  O  O  O  X   
X  O  X  O  X   
X  O  O  O  X   
X  X  X  X  X   
*/

void hollow_spiral(int n,int m,char a[100][100]){
    int sc=0,ec=m-1,sr=0,er=n-1;
    char ch ='X';
    while(sr<=er && sc<=ec){
        //first row
        for(int i=sc;i<=ec;i++){
            a[sr][i]=ch;
        }
        sr++;
        //last column
        for(int j=sr;j<=er;j++){
            a[j][ec]=ch;
        }
        ec--;
        //last row
        for(int k=ec;k>=sc;k--){
            a[er][k]=ch;
        } 
        er--;
        //first column
        for(int l=er;l>=sr;l--){
            a[l][sc]=ch;
        }
        sc++;

        if(ch=='X'){
            ch='O';
        }
        else ch='X';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<"   ";
        }
        cout<<"\n\n";
    }
    cout<<"\n\n";
}
int main(){
    int n,m;
    cin>>n>>m;
    char a[100][100];

    hollow_spiral(n,m,a);
    
return 0;
}