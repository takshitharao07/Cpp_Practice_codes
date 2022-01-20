#include<iostream>
using namespace std;
// BUBBLE SORT

void bubblesort(int *a,int n,int i,int j){
//Iterative
    // for(i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(a[j]>a[j+1]){
    //             swap(a[j],a[j+1]);
    //         }
    //     }
    // }
//Recursive
    // //base case
    // if(i==n-1){
    //     return;
    // }
    // //recursive case
    // for(int j=0;j<n-1-i;j++){
    //     if(a[j]>a[j+1]){
    //         swap(a[j],a[j+1]);
    //     }
    // }
    // bubblesort(a,n,i+1,j);
//Pure recursive
    if(j=n-1-i){
        bubblesort(a,n,i+1,0);
    }
    else{
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    bubblesort(a,n,i,j+1);
    }
}
int main(){
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n,0,0);
    for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
    }
return 0;
}