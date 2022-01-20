#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    string reg_no;
    public:
        void setVehicle(string reg_no){
            this->reg_no = reg_no;
        }
        virtual void showDetails(){
           if(reg_no==""){
               cout<<"Registration number: Yet to be allotted\n"<<endl;
           }
           else{
            cout<<"Registration number: "<<reg_no<<"\n"<<endl;
           }
        }
};

class Car : public Vehicle{
    string company;
    string model;
    public:
        void iniCar(string company,string model){
            this->company = company;
            this->model = model;
        }
        void showDetails(){
            cout<<"Company: "<<company<<"\n"<<endl;

            if(model==""){
                cout<<"Model: Ye to be design\n"<<endl;
            }
            else{
                cout<<"Model: "<<model<<"\n"<<endl;
            }
        }
};

int main(){
    string reg_no,company,model;

    cout<<"\nEnter the REGISTRATION NUMBER, COMPANY & MODEL of your vehicle"<<endl;
    cout<<"\n";
    getline(cin,reg_no);
    getline(cin,company);
    getline(cin,model);
    cout<<"\n----------------------------------------------------------------\n"<<endl;

    Car c;
    Vehicle v;

    Vehicle* ptr;
    v.setVehicle(reg_no);
    c.iniCar(company,model);

    ptr=&v;
    ptr->showDetails();
    ptr=&c;
    ptr->showDetails();
}