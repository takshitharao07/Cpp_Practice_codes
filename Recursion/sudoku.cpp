#include<iostream>
#include<cmath>
using namespace std;
/*  9
    5 3 0 0 7 0 0 0 0
    6 0 0 1 9 5 0 0 0
    0 9 8 0 0 0 0 6 0
    8 0 0 0 6 0 0 0 3
    4 0 0 8 0 3 0 0 1
    7 0 0 0 2 0 0 0 6
    0 6 0 0 0 0 2 8 0
    0 0 0 4 1 9 0 0 5
    0 0 0 0 8 0 0 7 9 
*/
bool placable(int box[9][9],int n,int i,int j,int num){
    //check in row
    for(int k=0;k<n;k++){
        if(box[i][k]==num){
            return false;
        }
    }
    //check in column
    for(int k=0;k<n;k++){
        if(box[k][j]==num){
            return false;
        }
    }
    //check in the small square
    n=sqrt(n);
    //starting idexes of small square box
    int start_i=(i/n)*n;    
    int start_j=(j/n)*n;

    for(int k=start_i;k<start_i+n;k++){
        for(int l=start_j;l<start_j+n;l++){
            if(box[k][l]==num){
                return false;
            }
        }
    }
    // when number not fount in row, column, small square
    return true;
}
bool sudoku(int box[9][9],int n,int i,int j){
    //base case
    if(i==n){
        for(int k=0;k<n;k++){
            for(int l=0;l<n;l++){
                cout<<box[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    //recursive case
    if(j==n){
        return sudoku(box,n,i+1,0);
    }
    if(box[i][j]!=0){
        return sudoku(box,n,i,j+1);
    }
    for(int num=1;num<=9;num++){
        if(placable(box,n,i,j,num)==true){
            box[i][j]=num;
            bool got_ans=sudoku(box,n,i,j+1);
            if(got_ans==true){
                return true;
            }
            //else--->if I get the number in the row
            box[i][j]=0; //backtracking
        }
    }
    return false; 
}
int main(){
    int n;
    cin>>n;
    int box[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>box[i][j];
        }
    }
    cout<<endl; 
    sudoku(box,9,0,0);
}