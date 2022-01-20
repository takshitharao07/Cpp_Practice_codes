#include<iostream>
using namespace std;
void merge_sorted_array(int n,int *a,int m,int *b){
    int i=0,j=0,k=0,merge[1000];
    while(i<n&&j<m){
        if(a[i]<b[j]){
            merge[k]=a[i];
            k++;
            i++;
        } 
        else{
            merge[k]=b[j];
            k++;
            j++;
        }
    }
    //i==n.... work on b[]
    while(j<m){
        merge[k]=b[j];
        k++;
        j++;
    }
    //j==m.... work on a[]
    while(i<n){
        merge[k]==a[i];
        k++;
        i++;
    }
    //Display
    for(int l=0;l<n+m-1;l++){
        cout<<merge[l]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int a[100],b[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    merge_sorted_array(n,a,m,b);
}