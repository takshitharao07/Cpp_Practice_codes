#include <iostream>
using namespace std;
class student{
	protected:
		char name[100];
		string prn;
};
class marks : student{
	protected:
		int marks[5];
		void getdetails(){
			int i;
			cout << "Enter name: ";
			cin.getline(name,80);
			cout << "Enter prn: ";
			cin >> prn;
			cout << "Enter marks in 5 subjects: \n";
			for(i = 0; i < 5; i++){
				cin >> marks[i];
			}
		}
		void displaydetails(){
			int i;
			cout << "Name: " << name << "\nPrn: " << prn << "\nMarks in 5 subjects: \n";
			for(i = 0; i < 5; i++){
				cout << marks[i] << "\n";
			}
		}
};
class result : marks{
	public:
		int total;
		void calculate_result(){
			int i;
			cout << "Enter details of the student:-\n";
			getdetails();
			total = 0;
			for(i = 0; i < 5; i++)			{
				total += marks[i];
			}
            cout<<"------------------------------------------"<<endl;
			cout << "Result of the student:-\n";
			displaydetails();
            cout<<"------------------------------------------"<<endl;
			cout << "Total Marks:-" << total;
		}
};

int main(){
	result r;
	r.calculate_result();
	return 0;
}