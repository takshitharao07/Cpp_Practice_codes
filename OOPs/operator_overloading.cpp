#include<iostream>
using namespace std;

//operator overloading example
class Pair{
    public:
        int a;
        int b;
    
    //constructor
    Pair(int a, int b){
        this->a=a;
        this->b=b;
    }
    //op overloading
    bool operator<(Pair &y){ //operator overloading --> datatype operator sign (class object)
        if(a<y.a && b<y.b){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Pair x(10,20), y(15,30);
    if(x<y){
        cout<<"x is less tha y"<<endl;
    }
    else{
        cout<<"x is greater than y"<<endl;
    }
    // cout<<x.a<<" "<<x.b<<endl;
    return 0;
}


// class complex{
//     private:
//         float real,imag;
//     public:
//     complex (){ //default constructor
//     }
//     complex(float x, float y){ //paramterized constructor
//         real=x;
//         imag=y;
//     }
//     void display(void){
//         cout<<"\n"; 
//         cout<<"Real = "<<real<<" Imag = "<<imag<<endl;    
//     }
//     void operator ++(){
//         real++;
//         imag++;
//     }    
//     complex operator ++(int){
//         complex temp;
//         temp.real=real++;
//         temp.imag=imag++;
//         return temp;
//     }
//     friend complex operator +(complex m1, complex m2){
//         class complex temp;
//         temp.real=m1.real+m2.real;
//         temp.imag=m1.imag+m2.imag;
//         return(temp);
//     }
//     bool operator <(complex m1){ 
//     class complex temp;
//         if((real<m1.real)) //and (imag<m1.imag))
//             return true;//cout<<"True";
//         else
//             return false;//cout<<"False"
//     }
// };

// int main(void){
//     class complex t1(7.7,9.9),t2(9.7,7.9),t3;
//     cout<<"\nFirst complex no. is ";
//         t1.display();
//     cout<<"\nSecond complex no. is ";
//         t2.display();
//     int n;
//    cout<<("\nMENU:\n1. Apply prefix increment operator on the object of class complex:\n2. Apply postfix increment operator on the object of class complex\n3. Add two objects of class complex\n4. Compare two complex numbers using < operator \n");
//    while('N'||'n'){
//    cout<<("\nPlease enter your choice (1-4) here: ");
//    cin>>n;
//     switch(n){
//         case 1:{
//             cout<<"\nAfter incrementing the first complex number with ++t1";
//             ++t1;
//                 t1.display();
//             break;
//         }
//         case 2:{
//             cout<<"\nAfter incrementing the second complex number with t2++";
//             t2++;
//                 t2.display();
//             break;
//         }
//         case 3:{
//             t3=t1+t2;
//             cout<<"\nSum of above two complex numbers is ";
//                 t3.display();
//             break;
//         }
//         case 4:{
//             if (t1<t2)
//                 cout<<"Complex no.1 is less than complex no.2";
//             else
//                 cout<<"Complex no. 1 is greater than complex no.2";
//             break;
//         }
//     }
//     cout<<"\n(Y/N)";
//     char y;
//     cin>>y;
//    }
//     return 0;
// }