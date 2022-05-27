#include<iostream>
#include<string>
using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ar[b];

//     for(int i=0;i<b;i++){
//         cin>>ar[i];
//     }

//     for(int j=0;j<b;j++){
//         if(ar[j]<=a){
//             cout<<"inside\n";
//         }
//         else 
//         cout<<"outside\n";
//     }
// }


void remove(string str){
    string word = "";
    for (auto x : str) {
        if (x == ' ')  {
            cout << word << endl;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    cout << word << endl;
}
  
int main(){
    string str;
    getline(cin,str); 
    remove(str);
    return 0;
}
