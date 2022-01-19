#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> answer;
//With MODULO OPERATOR
    for(int i=1;i<=n;i++){
        if(i%15==0){
            answer.push_back("FizzBuzz");
        }
        else if(i%3==0){
            answer.push_back("Fizz");
        }
        else if(i%5==0){
            answer.push_back("Buzz");
        }
        
        else{
            answer.push_back(to_string(i));
        }
    }
    cout<<"[";
    for(int j=0;j<=n;j++){
        cout<<'"'<<answer[j]<<'"';
        if(j<n){
            cout<<",";
        }
    }
    cout<<"]";

//without MODULO OPERATOR .... less complexity

        //     vector<string> ans;
        //     int count_three = 0, count_five = 0;
        
        //     for(int i = 1; i <= n; i++){
        //         count_three++;
        //         count_five++;
            
        //         if(count_three == 3 or count_five == 5){
        //             if(count_three == 3 and count_five == 5){
        //                 ans.push_back("FizzBuzz");
        //                 count_three = 0;
        //                 count_five = 0;
        //                 continue;
        //             }else {
        //                 if(count_three == 3){
        //                 ans.push_back("Fizz");
        //                 count_three = 0; 
        //             }
        //             if(count_five == 5){
        //                 ans.push_back("Buzz");
        //                 count_five = 0;
        //             }
        //         }  
        //             continue;
        //         }else {
        //             ans.push_back(to_string(i));
        //         } 
        //    }
}
