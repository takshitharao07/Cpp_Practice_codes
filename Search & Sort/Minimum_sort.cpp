#include<iostream>
using namespace std;
int main(){
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    //BUBBLE SORT
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(a[j]>a[j+1]){
    //             swap(a[j],a[j+1]);
    //         }
    //     }
    // }

    //BUBBLE SORT OPTIMIZED
    int swc=0;
    for(int i=0;i<1;i++){  // iteration i 0-->1
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                    swc++;
                swap(a[j],a[j+1]);
            }
        }
        if(swc==0){
            break;
        }
    }
    cout<<"Minimun swap = "<<swc<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    return 0;
}