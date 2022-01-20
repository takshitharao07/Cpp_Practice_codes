#include<iostream>
using namespace std;
class student{
    protected:
       string roll;
       string name;
    public:
        void get_num(string s,string n){
            name=s;
            roll=n;
        }
        void put_num(void){
            cout<<"\n";
            cout<<"Name: "<<name<<endl;
            cout<<"PRN: "<<roll<<endl;
            cout<<"--------------------"<<endl;
        }
};
class exam: public student{
    protected: 
        float part1,part2;
    public:
        void get_marks(float x,float y){
            part1=x;
            part2=y;
        }
        void put_marks(void){
            cout<<"Marks of: "<<endl;
            cout<<"Part 1 = "<<part1<<endl;
            cout<<"Part 2 = "<<part2<<endl;
            cout<<"--------------------"<<endl;
        }
};
class sports{
    protected:
        float score;
    public:
        void get_score(float s){
            score=s;
        }
        void put_score(void){
            cout<<"Sports: "<<score<<endl;
            cout<<"--------------------"<<endl;        
        }
};
class result: public exam,public sports{
    float total;
    public:
        void display(void);
};
void result :: display(void){
    total = part1+part2+score;
    put_num();
    put_marks();
    put_score();
    cout<<"Total Score: "<<total<<endl;
    cout<<"\n";
}
int main(){
    result student_1;
    student_1.get_num("Takshitha","20070122020");
    student_1.get_marks(98.8,96.9);
    student_1.get_score(9.8);
    student_1.display();

    return 0;
}