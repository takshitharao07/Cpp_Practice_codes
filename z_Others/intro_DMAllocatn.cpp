#include<iostream>
using namespace std;
int main(){    

    //// VARIABLES
    // int a;             // --> static
    // a=10;
    int*a=new int;        // --> dynamic
    *a=10;


    //// ARRAY
    //-------1D-------
    // int a[100];        // --> static
    int*ar=new int[100]; // --> dynamic
    
    int n; 
    cin>>n;
    // int a[n];          // --> statically wrong
    int*arr=new int [n];  // --> dynamically possible
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //-------2D-------
    int row,col;
    cin>>row>>col;
    int**ptr;
    ptr=new int*[row];
    for(int i=0;i<row;i++){
        ptr[i]=new int[col];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>ptr[i][j];
        }    
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ptr[i][j]<<" ";
        }   
        cout<<endl;
    }
    

    // STATIC: memory gets cleared automatically as program terminates
    // DYNAMIC: memmory needs to be cleared --> 1.delete variable   2.variable = NULL 

    delete a; // clear memory
    a=NULL;

    delete[] arr; // []--> clear array memory
    arr=NULL;

    for (int i=0;i<row;i++){
        delete[] ptr[i];
        ptr[i]=NULL;
    }
    delete[] ptr;
    ptr=NULL;

    return 0;
}

//// FUNCTION

// int* f(int n){
    // 	int *aptr=new int[n];
    // 	for (int i = 0; i <n; ++i)
    // 	{
    // 		cin>>aptr[i];
    // 	}
    // 	return aptr;
// }
// int main(){
    // 	int n;
    // 	cin>>n;
    // 	int *fptr=f(n);
    // 	for (int i = 0; i < n; ++i)
    // 	{
    // 		cout<<fptr[i]<<" ";
    // 	}
    // 	cout<<endl;
    // 	return 0;
// } 