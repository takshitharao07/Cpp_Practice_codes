#include<iostream>
using namespace std;

// // // CLOCKWISE   SPIRAL   PRINT

void spiral(int n,int m,int a[100][100]){
    int sc=0,ec=m-1,sr=0,er=n-1;
    while(sr<=er && sc<=ec){
        //first row
        for(int i=sc;i<=ec;i++){
            cout<<a[sr][i]<<" ";
        }
        sr++;
        //last column
        for(int j=sr;j<=er;j++){
            cout<<a[j][ec]<<" ";
        }
        ec--;
        //last row
        for(int k=ec;k>=sc;k--){
            cout<<a[er][k]<<" ";
        } 
        er--;
        //first column
        for(int l=er;l>=sr;l--){
            cout<<a[l][sc]<<" ";
        }
        sc++;
    }
}

// // // ANTI-CLOCKWISE   SPIRAL   PRINT

// void spiral(int n,int m,int a[100][100]){
//     int sc=0,ec=m-1,sr=0,er=n-1;
//     while(sr<=er && sc<=ec){
        
//         //first column
//         for(int l=sr;l<=er;l++){
//             cout<<a[l][sc]<<" ";
//         }
//         sc++;        
//         //last row
//         for(int k=sc;k<=ec;k++){
//             cout<<a[er][k]<<" ";
//         } 
//         er--;
//         //last column
//         for(int j=er;j>=sr;j--){
//             cout<<a[j][ec]<<" ";
//         }
//         ec--;
//         //first row
//         for(int i=ec;i>=sc;i--){
//             cout<<a[sr][i]<<" ";
//         }
//         sr++;
        
//     }
// }
int main(){
    int n,m;
    cin>>n>>m;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    spiral(n,m,a);
    
return 0;
}