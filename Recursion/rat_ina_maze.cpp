//Live session-22
#include<iostream>
using namespace std;
int count=0;
int sol[100][100]={0}; //global array.... just to avoid too many arguments in function
bool rat_in_a_maze(char maze[][1005],int n,int m,int i,int j){
    //base case
    if(i<0||j<0||i>n||j>m){
        return false;
    }
    if(i==n-1 && j==m-1){
        sol[i][j]=1;
        // display sol matrix
        for(int l=0;l<n;l++){
            for(int k=0;k<m;k++){
                cout<<sol[l][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        count++;     // counts possible number of path
        sol[i][j]=0; // backtracking
    
        //// prints 1st path
        // return true;
        //// prints all path
        return false;
    }

    //recursive case
    sol[i][j]=1;
    // Right movement
    if(maze[i][j+1]!='X'){
       bool forward_movement_possible=rat_in_a_maze(maze,n,m,i,j+1);
       if(forward_movement_possible==true){
           return true;
       }
    }
    // Downward movement
    if(maze[i+1][j]!='X'){
       bool downward_movement_possible=rat_in_a_maze(maze,n,m,i+1,j);
       if(downward_movement_possible==true){
           return true;
       }
    }
    sol[i][j]=0; //backracking
    return false; //else
}
int main(){
    // int n,m;
    // cin>>n>>m;
    // char maze[1005][1005];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>maze[i][j];
    //     }
    // }
    char maze[][1005]={
        "OOOO",
        "OOXX",
        "OOOO",
        "XXOO" };
    int n=4,m=4;
        rat_in_a_maze(maze,n,m,0,0);
    cout<<"Total path: "<<count<<endl;
}