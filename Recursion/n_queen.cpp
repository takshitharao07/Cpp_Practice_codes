#include<iostream>
using namespace std;
int count=0;
bool placable(int board[][50],int n,int i,int j){
    //check for column
    for(int k=0;k<n;k++){
        if(board[k][j]==1){
            return false;
        }
    }
    //check for row
    for(int k=0;k<n;k++){
        if(board[i][k]==1){
            return false;
        }
    }
    //check for right diagonal
    int r=i,c=j; // assigned i and j for left diagonal operation
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;
    }
    //check for left diagonal
    while(r>=0 && c>=0){
        if(board[r][c]==1){
            return false;
        }
        r--;
        c--;
    }
    return true;
}

bool n_queen(int board[][50],int n,int i){
    
    //base case
    if(i==n){
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                if(board[k][l]==1){
                    cout<<"Q ";
                    // cout<<"{"<<k+1<<"-"<<l+1<<"}";
                }
                else{
                    cout<<"_ ";
                }
            }
            cout<<endl;
        }
        count++;
        cout<<endl;
        // // returns 1st matrix
        // return true;
        // returns all possible matrix
        return false;
    }

    //recursive case
    for(int j=0;j<n;j++){
        if (placable(board,n,i,j)==true){
            board[i][j]=1;
            bool downward_placable=n_queen(board,n,i+1);
            if(downward_placable==true){
                return true;
            }
            //else-----> false from downward_placable
            board[i][j]=0;
        }
    }
    return false;
}
int main(){
    int board[50][50]={0};
    int n;
    cin>>n;
    n_queen(board,n,0);
    cout<<endl<<count<<endl;
}