#include <iostream>
using namespace std;
bool isPalindrome(int x){
        int n=0,rem,num=0,temp=x;
        if(x>=0){
            while(temp>0){
                rem=temp%10;
                num=num*10+rem;
                temp/=10;
            }
            if(num==x)
                return true;
            else 
                return false;        
         }
        
        else
           return false;
}
int main(){
    int x;
    cin>>x;
    if(isPalindrome(x)==0){
        cout<<"False";
    }
    else cout<<"True";
    return 0;
}