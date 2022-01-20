#include <bits/stdc++.h>
using namespace std;
 
//Sorts the array using pigeonhole algorithm (principle) 
void pigeonhole_Sort(int a[], int n){
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++){ // Find minimum & maximum values in a[]
        if (a[i] < min){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i]; 
        }
    }
    int range = max - min + 1; // Find range
    
    // Create an array of vectors. Size of array is range. 
    //Each vector represents a hole that is going to contain matching elements.
    vector<int> holes[range];
 
    // Traverse through input array and put every element in its respective hole
    for (int i = 0; i < n; i++){
        holes[a[i]-min].push_back(a[i]);
    }
 
    // Traverse through all holes one by one. For every hole, take its elements and put in array.
    int index = 0;  // index in sorted array
    for (int i = 0; i < range; i++){
        vector<int>::iterator it;
        for (it = holes[i].begin(); it != holes[i].end(); ++it)
            a[index++]  = *it;
    }
}
 
// Driver program 
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    pigeonhole_Sort(a, n);
 
    cout<<"Sorted Array is: ";
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    } 
    return 0;
}