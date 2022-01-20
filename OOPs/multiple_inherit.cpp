#include <iostream>
using namespace std;
class item{
	protected:
		string title;
		int price;
};
class sale{
	protected:
		int sales_figure;
};
class hwitem : item, sale{
	public:
		void getdata(){
			cout << "Enter title: ";
			fflush(stdin);
			getline(cin, title);
			cout << "Enter price: ";
			cin >> price;
			cout << "Enter three month sales figure: ";
			cin >> sales_figure;
		}
		void displaydata(){
			cout << "Title : " << title << "\nPrice : " << price;
			cout << "\nThree months sales figure : " << sales_figure << "\n";
		}
};
class switem : item, sale{
	public:
		void getdata(){
			cout << "Enter title: ";
			fflush(stdin);
			getline(cin, title);
			cout << "Enter price: ";
			cin >> price;
			cout << "Enter three month sales figure: ";
			cin >> sales_figure;
		}
		void displaydata(){
			cout << "Title : " << title << "\nPrice : " << price;
			cout << "\nThree month sales figure : " << sales_figure << "\n";
		}
};

int main(){
	hwitem ob1;
	switem ob2;
	cout << "\nEnter details for hardware item: \n";
	ob1.getdata();
	cout << "\nEnter details for software item: \n";
	ob2.getdata();
    cout<<"-------------------------------------------------"<<endl;
	cout << "Details for hardware item: \n";
	ob1.displaydata();
    cout<<"-------------------------------------------------"<<endl;
	cout << "Details for software item: \n";
	ob2.displaydata();
    cout<<"\n";
	return 0;
}