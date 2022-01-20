//live session-20... 2:00:00
#include<iostream>
using namespace std;
int count=0;
void subseq(char *in,int i,char *out,int j){
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    //recursive case  
    subseq(in,i+1,out,j);
    out[j]=in[i];
    count++;
    subseq(in,i+1,out,j+1);
}
int main(){
    char in[100],out[100];
    cin>>in;
    subseq(in,0,out,0);
    cout<<count+1;
}