#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    // // print array
    for(int i=0;i,n;i++){
        cout<<arr[i]<<" ";
    }    

    // // array acts as pointer
    cout<<arr<<endl; // c/a internal pointer
    cout<<&arr[0]<<endl; // same output --> address
    // arr = &arr[0]
    cout<<arr+1<<" "<<&arr[1]; //6 6
    //    arr+i = &arr[i];
    // *(arr+i) = arr[i];   
    
    // // pointer vs array
    // ptr++ --> (legal)
    // arr++ --> (illegal)
}