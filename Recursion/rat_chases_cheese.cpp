//Live session-22
#include<iostream>
using namespace std;
/*  5 7
    OXOOOOX           1 0 1 1 1 0 0 
    OXOXOXX           1 0 1 0 1 0 0 
    OXOXOOX   ---->   1 0 1 0 1 0 0
    OOOXOXX           1 1 1 0 1 0 0 
    XXOXOOO           0 0 0 0 1 1 1   */
int count=0;
bool flag=true;
int sol[100][100]={0}; //global array.... just to avoid too many arguments in function
void rat_in_a_maze(char maze[][1005],int n,int m,int i,int j){
    ////base case
    if(i<0||j<0||i>=n||j>=m){
        return ;
    }
    if(maze[i][j]=='X'||sol[i][j]==1){
        return ;
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
        sol[i][j]=0; // backtracking
        flag=false;
       return ;
    }
    ////recursive case
    sol[i][j]=1;
    // Upward movement
       rat_in_a_maze(maze,n,m,i-1,j);
    // Downward movement
       rat_in_a_maze(maze,n,m,i+1,j);
    // Left movement
       rat_in_a_maze(maze,n,m,i,j-1);
    // Right movement
       rat_in_a_maze(maze,n,m,i,j+1);

    sol[i][j]=0; //backracking
}
int main(){
    int n,m;
    cin>>n>>m;
    char maze[1005][1005];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j];
        }
    }
    // char maze[][1005]={
    //     "OOOO",
    //     "OOXX",
    //     "OOOO",
    //     "XXOO" };
    // int n=3,m=2;
    rat_in_a_maze(maze,n,m,0,0);
	if(flag){
		cout<<"NO PATH FOUND";
	}
}