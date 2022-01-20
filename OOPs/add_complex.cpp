#include<bits/stdc++.h>
using namespace std;

// defination of class Complex
class Complex
{
	private:
		float real;
		float imag;
	public:
		//default constructor to initialize
		Complex(){
			real = 0;
			imag = 0;
		}
		// parameterized constructor
		Complex(float r, float i){
			real = r;
			imag = i;
		}
		//friend function declaration to add complex number
		friend Complex add(Complex c1, Complex c2); 
		// function to display
		void display(){
			cout<<"( "<<real<<" + "<<imag<<"i )"<<endl;
		}
};

// friend function defination
Complex add(Complex c1, Complex c2){
	//create temporary object and return it
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
int main(){
	Complex c1(7.9, 4.4), c2(3.3, 9.7), c3;
	c3 = add(c1, c2);//adds c1 with c2 and returns to c3
    cout<<"\nFirst complex no. is ";
        c1.display();
    cout<<"\nSecond complex no. is ";
        c2.display();
    cout<<"\nSum of above two complex numbers is ";
	c3.display();
    cout<<"\n";
	return 0;
}