#include<iostream>
using namespace std;
/*                     abc
    a f(bc)  __________|||__________  c f(ab)
    /   \               |              /   \
  abc   acb          b f(ac)         cab   cba          
                      /   \
                    bac   bca
*/
void permutation(char *in,int i){
    //base case
    if(in[i]=='\0'){
        cout<<in<<endl;
        return;
    }
    //recursive case
    for(int j=i;in[j]!='\0';j++){ 
        swap(in[i],in[j]);
        permutation(in,i+1);
// abc
// acb
// cab
// cba
// abc
// acb
        swap(in[i],in[j]); //backtracking
// abc
// acb
// bac
// bca
// cba
// cab
    
    }
}
int main(){    
    char in[100]; //abc
    cin>>in;
    permutation(in,0);
}