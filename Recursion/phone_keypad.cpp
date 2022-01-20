#include<iostream>
#include<string>
using namespace std;
/*            K
D        0   1   2   3      
I    0  _   _   _  '\0'
G    1  _   _   _  '\0'
I    2  A   B   C  '\0'
T    3  D   E   F  '\0'
S    4  G   H   I  '\0'
*/
//// STRINGS ------------------------------------------------------------------
string keys[10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keypad(string in,int i,string out,int j){
    //base case
    if(i==in.size()){
        cout<<out<<endl;
        return;
    }
    //recursive case
    int digit=in[i]-'0'; //char to int
    for(int k=0;k<keys[digit].size();k++){
        char c=keys[digit][k];
        keypad(in,i+1,out+c,j+1);
        out[j]=' '; //backtracking
    }
}
int main(){
    string in,out;
    cin>>in;
    keypad(in,0,out,0);
    return 0;
}
//// CHARACTER ARRAY  ----------------------------------------------------------
// char keys[10][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
// void keypad(char in[],int i,char out[],int j){
//     //base case
//     if(in[i]=='\0'){
//         out[j]='\0';
//         cout<<out<<endl;
//         return;
//     }
//     //recursive case
//     int digit=in[i]-'0'; //char to int
//     for(int k=0;keys[digit][k]!='\0';k++){
//         out[j]=keys[digit][k];
//         keypad(in,i+1,out,j+1);
//         out[j]=' '; //backtracking
//     }
// }
// int main(){
//     char in[100],out[100];
//     cin>>in;
//     keypad(in,0,out,0);
//     return 0;
// }