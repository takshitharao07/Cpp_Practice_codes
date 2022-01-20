#include<iostream>
using namespace std;
int main(){
    int a[]={9,10};
    int b[]={1,2,3,4},c[]={5,6,7,8};
    int*p=a;
    int*q=b;
    int*r=c;
    *p=*p+1;
    *q=*q+1;
    *r=*r+1;
    cout<<*p<<" "<<*q<<" "<<*r ;
       return 0;
}