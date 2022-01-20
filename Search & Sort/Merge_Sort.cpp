//https://log2base2.com/courses/algorithms/merge-sort-part-2
#include<iostream>
using namespace std;
//Divide n Conquer 
 /*     Divide
        Sort
        Merge     */
void merge_2sorted_array(int *a,int s,int n){
    int mid=(s+n)/2;
    int i=s;
    int k=s;
    int j=mid+1;
    int merge[100000];

    while(i<=mid&&j<=n){
        if(a[i]<a[j]){
            merge[k]=a[i];
            k++;
            i++;
        }
        else{
            merge[k]=a[j];
            k++;
            j++;
        }
    }
    //j>n.... work on i[]
    while(i<=mid){
        merge[k]=a[i];
        k++;
        i++;
    }
    //i>mid... work on j[]
    while(j<=n){
        merge[k]=a[j];
        k++;
        j++;
    }
    //save the array
    for(int l=s;l<=n;l++){
        a[l]=merge[l];
    }
}             
void merge_sort(int *a,int s,int n){
    //base case
    if(s>=n){
        return;
    }
    //recursive case
        //divide by mid
        int mid=(s+n)/2;
        //Sort
        merge_sort(a,s,mid);
        merge_sort(a,mid+1,n);
        //Merge
        merge_2sorted_array(a,s,n);
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}