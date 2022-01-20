#include<iostream>
using namespace std;
//--- DIVIDE & CONQUER ALGO --- sorted array

//BINARY SEARCH (iteration)  
// int search(int a[],int start,int end,int target){
//     int mid;
//     while(start<=end){
//         mid=(start+end)/2;
//         if(a[mid]==target){
//             return mid+1;
//         }
//         if(a[mid]>target){
//             end=mid-1;
//         }
//         else 
//             start=mid+1;
//     }
//     return -1;  
// }

//BINARY SEARCH (recursion)
int search(int a[],int start,int end,int target){
    int flag=0,mid;
    if(start<=end){
        mid=(start+end)/2;
        if(a[mid]==target){
            return mid+1;
        }
        if(a[mid]>target){
            return search(a,start,mid-1,target);
        }
        return search(a,mid+1,end,target);
    } 
    return -1;
}

int main(){
    int n,a[50],m;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    cout<<"Enter the target element: ";
    cin>>m;

   int s=search(a,0,n-1,m);

        if(s==-1){
           cout<<"-----Target element not found-----";
        }
        else 
            cout<<"---The target element is at position "<<s<<"---";
  return 0;
} 