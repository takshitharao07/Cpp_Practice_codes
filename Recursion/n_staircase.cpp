#include<iostream>
using namespace std;
/*
                     _M_
                 ___| 5
             ___| 4
         ___| 3 
     ___| 2
 _C_| 1  
  0                    */
//Total ways child can reach to his mother?
int stair_case3(int n){
    //base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    //recursive case
    return stair_case3(n-1)+stair_case3(n-2)+stair_case3(n-3);//for max steps 3---> n-1,n-2,n-3
}
//Total ways child can reach within max steps to his mother?
//Generalization
int stair_case(int n,int max){
    //base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    //recursive case
    int sum=0;
    for(int i=1;i<=max;i++){
        sum+=stair_case(n-i,max);
    }
    return sum;
}
int main(){
    int n,max;
    cin>>n>>max;
    cout<<"Total ways with max 3 steps = "<<stair_case3(n)<<endl;
    cout<<"Total ways with user entered max "<<max<<" steps = "<<stair_case(n,max)<<endl;
}