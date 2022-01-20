#include<iostream>
using namespace std;
//LINEAR SEARCH
void search(int a[],int start,int end,int target){  // 2 3 7.. 0.. 3... 7
    int flag=0;
    for(int i=start;i<end;i++){
        if(a[i]==target){  // 0-->2!=7, 1-->3!=7, 2-->7=7
            cout<<"--- The target element is at position "<<i+1<< " ---"<<endl;  
            flag++;
        }
    }    
    if(flag==0){
            cout<<"-----Target element not found-----";
        }
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

    search(a,0,n,m);
    return 0;
} 
