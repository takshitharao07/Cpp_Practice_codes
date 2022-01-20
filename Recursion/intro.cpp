#include<bits/stdc++.h>
using namespace std;
// int fib(int n){
//     // base case
//     if(n==0||n==1){
//         return n;
//     }
//     // recursive case
//     /*
//     int small_ans1= fib(n-1);
//     int small_ans2= fib(n-2);
//     int big_ans=small_ans1+small_ans2;
//     return big_ans;
//             |
//             |
//            \ /      
//             V               */
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
// }

//////////////////////////////////////////////////////////////////

// sorted or not?
bool isarray_sorted(int a[],int n){
    //base case
    if(n==1){
        return true;
    }
    //recursive case
    if(a[n-2]<=a[n-1]&&isarray_sorted(a,n-1)){
    // if(a[n-1]<=a[n-1]&&isarray_sorted(a+1,n-1)){
    // if(a[0]<=a[1]&&isarray_sorted(a+1,n-1)){
        return true;
    }
    else 
        return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isarray_sorted(a,n)!=0){
        cout<<"Sorted";
    }
    else
        cout<<"Not sorted";
    return 0;
}