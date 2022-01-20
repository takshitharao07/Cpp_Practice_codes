#include<iostream>
using namespace std;
/* 
   SRC          Helper          DEST
    x         ----x---->                       
   xxx                          xxx
 xxxxxxxx                     xxxxxxxx
*/
void toh(int n,char src,int helper,char dest){
    //base case
    if(n==0){
        return;
    }
    //recursive case
    toh(n-1,src,dest,helper);//Sent helper to destination
    cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl;
    toh(n-1,helper,dest,src);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
}