#include<iostream>
#include<cmath>
using namespace std;
// int main(){
//     int y=90;
//     int *yptr=&y; //address of y
//     int **yyptr=&yptr; //address of yptr (pointer of pointer)
    
//     return 0;
// }
// // POINTER OPERATION
int main(){
    int x=10,y=20;
    int *a=&x;
    int *b=&y;
    (*a)++;
    int *c=&x;
    cout<<*c<<endl;
    (*b)++;
    (*(&x))++;
    cout<<y<<endl;
    (*c)++;
    cout<<x;
}