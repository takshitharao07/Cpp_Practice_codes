#include<iostream>
#include<vector>
using namespace std;
vector<int> ind;
void all_indices(int *a,int i,int n,int m){
	//base case
	if(i==n){
		return;
	}
	//recursive case
	
	if(a[i]==m){
		ind.push_back(i);
		all_indices(a,i+1,n,m);
	}
	else //edited
		all_indices(a,i+1,n,m);
}
int main() {
	int n,m;
	cin>>n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;

	all_indices(a,0,n,m);

	for(int i=0;i<ind.size();i++){
		cout<<ind[i]<<" ";
	}
	
	return 0;
}