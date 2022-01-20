#include<iostream>
using namespace std;

class student{
               int PRN;
               char name[30];
               char class_st[10];
               int marks[4];
               float percentage;
               float calculate();
               public:
               void readmarks();
               void displaymarks();
};

float student::calculate(){
               percentage=0;
               for(int i=0;i<4;i++)
                    percentage+=marks[i];
                    percentage=(percentage/4);
               return percentage;
}

void student::readmarks(){
               cout<<"Enter the PRN: ";
               cin>>PRN;
               cout<<"Enter the name: ";
               cin>>name;
               cout<<"Enter the class studing in: ";
               cin>>class_st;
               cout<<"Enter the marks: "<<endl;
               for(int j=0;j<4;j++){
                    cout<<"\tEnter mark"<<j+1<<":";
                    cin>>marks[j];
               }
}

void student::displaymarks(){
               cout<<"PRN: "<<PRN<<endl;
               cout<<"Name: "<<name<<endl;
               cout<<"Class: "<<class_st<<endl;
               cout<<"Percentage: "<<calculate()<<endl;
}

int main(){
               student s1;
               s1.readmarks();
               s1.displaymarks();
               return 0;
}