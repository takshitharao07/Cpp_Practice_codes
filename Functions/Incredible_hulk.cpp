/* The Incredible Hulk has to defeat an enemy who is N steps above the level where he is standing (assume it as the 0th level). Hulk can take jumps in power of 2.He has to reach the Nth step in minimum moves possible. 
    Input Format: The first line contains the number of test cases T. T test cases follow: The first line of each test case contains a number N.
    Constraints:  1<=T<=10 ; 1<=N<=10^5
    Output Format: Output T lines, containing the minimum number of moves required by Hulk to reach the Nth step
        Sample Input             Sample Output
        3                          2
        3                          1
        4                          2
        5
    Explanation: Let total steps is n, find the nearest integer which is of power 2 and less then n. let it would be k. now remaining steps to cover is n-k and result = 1 + min steps for (n-k) remaining steps. */
#include<iostream>
using namespace std;
// // METHOD 1:-------------------------------------------------
void hulk(int n){
    int i=0,a[n];
    while(n>0){
        a[i]=n%2; // to get bits of the number .... 13 --> 1101
        i++;      // iterate the index
        n/=2;     
    }
    for(i-1;i>=0;i--){ // in the number of digits of bit --> 4
        if(a[i]==1){  // count number of 1's --> 3
            n++;      // n=0 ++  <--!
        }
    }
    cout<<n<<endl;
}

// // METHOD 2:-------------------------------------------------
// void hulk(int n){
//     int i=0;
//     while(n>0){
//         n=n&(n-1);  // bitwise method
//         i++;
//     }
//     cout<<i<<endl;
// }

// // METHOD 3:-------------------------------------------------
// void hulk(int n){
//     int i=0;
//     while(n>0){
//         i+=(n&1); // binary &
//         n=n>>1;   // bit shift method
//     }
//     cout<<i<<endl;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        hulk(n);
    }
}