#include<iostream>
using namespace std;
int length(char *arr){
    int i=0,co=0;
    while(arr[i]!='\0'){
        co++;
        i++;
    }
    return co;
}
bool palin(char *arr){
    int i=0,j=length(arr)-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return false;
        }
    i++;
    j--;
    }
    return true;
}
int main(){
    char arr[100];
    cin.getline(arr,50);
    
    if(palin(arr)){
        cout<<"Yes palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    return 0;
}

// // USING STRING
/* 
include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	int count;
	cin>>s;
	int len=s.length();  // <-- length
	for(int i=0;i<len;i++){
			if(s[i]==s[len-1-i]){  // s[i]==s[j]
				count=0;
			}
			else{
			    count++;
			    break;
			}
	}
	count==0?cout<<"true":cout<<"false";
	return 0;
}
*/