#include<iostream>
#include<cstring> // for strcpy()
using namespace std;
// Blueprint

 // // // -------------- Intro --------------
// class car{
//     public:
//         char name[100];
//         int seats;
//         int model;
//         int price;
// };
// int main(){
//     // user-inbuilt_datatype variable_name
//     car A; // A --> object
//     //A.name="BMW"; ---> error : can't write string in char array
//     strcpy(A.name,"BMW"); // copy the name to A.name
//     A.seats=4;
//     A.model=2021;
//     A.price=5000000;
//
//     cout<<"Name of car: "<<A.name<<endl;
//     cout<<"No. of seats: "<<A.seats<<endl;
//     cout<<"Model of the car: "<<A.model<<endl;
//     cout<<"Price of car: "<<A.price<<endl;
//     cout<<endl;
//
//     car B; // B --> object 2
//     //B.name="BMW"; ---> error
//     strcpy(B.name,"BMW"); // copy the name to A.name
//     B.seats=4;
//     B.model=2021;
//     B.price=5000000;
//
//     cout<<"Name of car: "<<B.name<<endl;
//     cout<<"No. of seats: "<<B.seats<<endl;
//     cout<<"Model of the car: "<<B.model<<endl;
//     cout<<"Price of car: "<<B.price<<endl;
// }


 // // // -------------- Constructor & destructor --------------
// class car{
//    public:
//       string name;
//       int seats;
//       int model;
//       int price;
//
//       //----- Default constructor -----
//          // Whenever an object created, default constructor is called.
//          // car(){ }
//          //default constructor override: when we write someting in the constructor.
//          car(){
//             cout<<"In default constructor"<<endl;
//          }
//       //----- Parametrized constructor -----
//          // Whenever an object with parameter is created
//          car(string n,int s,int m,int p){
//             cout<<"In parametrized constructor"<<endl;
//             name=n;
//             seats=s;
//             model=m;
//             price=p;     
//          }
//       //----- Copy constructor -----
//          // Whenever an object is created and = other
//          // // *** Shallow copy ***
//          // car(car &X){ // X=A... car X --> error (copy const. must pass its first arg by reference)
//          //    cout<<"In copy constructor"<<endl;
//          //    name=X.name;
//          //    seats=X.seats;
//          //    model=X.model;
//          //    price=X.price;  
//          // }
//          // // *** Deep copy ***
//          car(car &X){ // X=A... car X --> error (copy const. must pass its first arg by reference)
//             cout<<"In copy constructor"<<endl;
//             name = new char[name.length()+1]; // since string is an object of class_string, and not a data type 
//             name=X.name;
//             seats=X.seats;
//             model=X.model;
//             price=X.price;  
//          }
// // // // Operator overloading
//       //----- Copy assignment constructor
//          void operator=(car x){ // return_type operator(+,-,=..) (class object)
//             cout<<"In copy assignment constructor"<<endl;
//             name=new char[name.length()+1];
//             name=x.name;
//             seats=x.seats;
//             model=x.model;
//             price=x.price;
//          }
//         
//    //Copy constructor--> when a new object is created from an existing object, as a copy of the existing object. 
//    //Copy assignment constructor--> when an already initialized object is assigned a new value from another existing object.
//
//           void printcar(){
//             cout<<"Name of car: "<<name<<endl;
//             cout<<"No. of seats: "<<seats<<endl;
//             cout<<"Model of the car: "<<model<<endl;
//             cout<<"Price of car: "<<price<<endl;
//             cout<<endl;            
//           }       
//       //----- Default destructor -----
//          // Whenever an object dies, been deleted or not in a scope; default destructor is called.
//          // ~car(){ }
//          // destructor override: when we write someting.
//          ~car(){
//             cout<<"Destructor for car "<<name<<" called"<<endl;
//          }
// };
// int main(){
//    // user-inbuilt_datatype variable_name
//    car A; // A --> object
//    A.name="BMW"; 
//    //strcpy(A.name,"BMW"); // copy the name to A.name, if it was char array
//    A.seats=4;
//    A.model=2021;
//    A.price=5000000;
//    A.printcar();
//    // cout<<"Name of car: "<<A.name<<endl;
//    // cout<<"No. of seats: "<<A.seats<<endl;
//    // cout<<"Model of the car: "<<A.model<<endl;
//    // cout<<"Price of car: "<<A.price<<endl;
//    // cout<<endl;
//
//    // When parameters are passed in an object --> parametrized constructor is called
//    car B("BMWB",4,2021,5000000); // B --> object 2
//    B.printcar();
//
//    // When copy objects
//    car C=A; // or car C(A)
//    C.printcar();
//       //Deep & shallow copy ....
//          //Shallow copy: copies reference of the original object. 
//          //Deep copy: copies the original object's value.
//          A.name[0]='T';
//          cout<<endl;
//
//          cout<<"After shallow copy:"<<endl;
//          A.printcar();
// 
//          cout<<"After Deep copy:"<<endl;
//          C.printcar();
// 
//    car D;
//    D=B; // copy assignment operator
//    D.printcar();
// }


// // -------------- Initialisation List, data members, this-> -------------- 
// class car{
//    public:
//       string name;
//       int seats;
//       int model;
//       int price;
//       //Static function allows calling functions using the class, without using the object, 
//       //Constant function does not allow modifying objects.            
//       const int tyres; // constant data members
//       static int count; // static data members
//
//       //----- Default constructor -----
//          // Whenever an object created, default constructor is called.
//          // car(){ }
//          //default constructor override: when we write someting in the constructor.
//          car():tyres(4){
//             cout<<"In default constructor"<<endl;
//             count++;
//          }
//       //----- Parametrized constructor -----
//          // Whenever an object with parameter is created
//          // car(string n,int s,int m,int p):tyres(4){
//          // car(string n,int s,int m,int p):tyres(4),seats(s),model(m),price(p){ // ***** Initialization list *****
//          //    cout<<"In parametrized constructor"<<endl;
//          //    name=n;
//          //    // seats=s;
//          //    // model=m;
//          //    // price=p;
//          //    count++;     
//          // }        //----------------------------------- OR-----------------------------------
//          car(string name,int seats,int model,int price):tyres(4){ //if the parametes are of same titles
//             cout<<"In parametrized constructor"<<endl;
//             this->name=name;     ////this pointer points to the current object of the class.
//             this->seats=seats;
//             this->model=model;
//             this->price=price;
//             count++;     
//          }
//       //----- Copy constructor -----
//          // Whenever an object is created and = other
//          // // *** Shallow copy ***
//          // car(car &X):tyres(4){ // X=A... car X --> error (copy const. must pass its first arg by reference)
//          //    cout<<"In copy constructor"<<endl;
//          //    name=X.name;
//          //    seats=X.seats;
//          //    model=X.model;
//          //    price=X.price;  
//          // }
//
//          // // *** Deep copy ***
//          car(car &X):tyres(4){ // X=A... car X --> error (copy const. must pass its first arg by reference)
//             cout<<"In copy constructor"<<endl;
//             name = new char[name.length()+1]; // since string is an object of class_string, and not a data type 
//             name=X.name;
//             seats=X.seats;
//             model=X.model;
//             price=X.price;  
//             count++;
//          }
//
//          void printcar()const{ //const-> since no variable is changing
//             cout<<"Name of car: "<<name<<endl;
//             cout<<"No. of seats: "<<seats<<endl;
//             cout<<"Model of the car: "<<model<<endl;
//             cout<<"Price of car: "<<price<<endl;
//             cout<<"No.of tyres:"<<tyres<<endl;
//             cout<<endl;            
//          }         
//
//       //----- Default destructor -----
//          // Whenever an object dies, been deleted or not in a scope; default destructor is called.
//          // ~car(){ }
//          //destructor override: when we write someting.
//          ~car(){
//             cout<<"Destructor for car "<<name<<" called"<<endl;
//          }
// };
// int car::count;
// int main(){
//    car A; // A --> object
//    A.name="BMW"; 
//    //strcpy(A.name,"BMW"); // copy the name to A.name, if it was char array
//    A.seats=4;
//    A.model=2021;
//    A.price=5000000;
//    A.printcar();
//
//
//
//    // When parameters are passed in an object --> parametrized constructor is called
//    car B("BMWB",4,2021,5000000); // B --> object 2
//    B.printcar();
// 
//    // Copy constr.
//    car C=A;
//    C.printcar();
//
//    //Deep & shallow copy ....
//       //Shallow copy: copies reference of the original object. 
//       //Deep copy: copies the original object's value.
//       A.name[0]='T';
//       cout<<endl;
//
//       cout<<"After shallow copy:"<<endl;
//       A.printcar();
// 
//       cout<<"After Deep copy:"<<endl;
//       C.printcar();
// }


// // // -------------- Operator overloading --------------
// class Pair{
//     public:
//         int a;
//         int b;
//    
//     //constructor
//     Pair(int a, int b){
//         this->a=a;
//         this->b=b;
//     }
//     //op overloading
//     bool operator<(Pair &y){ //operator overloading --> datatype operator sign (class object)
//         if(a<y.a && b<y.b){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//     Pair x(10,20), y(15,30);
//     if(x<y){
//         cout<<"x is less tha y"<<endl;
//     }
//     else{
//         cout<<"x is greater than y"<<endl;
//     }
//     // cout<<x.a<<" "<<x.b<<endl;
//     return 0;
// }


 // // // ------------ Member function --------------
 
 // // ------ Static Memmory ------
//
// class car{
//     public:
//         string name;
//         int seats;
//         int model;
//         int price;
//
//         //default CONSTRUCTOR: whenever a object created, constructor is called.
//            // car(){ }
//
//         // // Manager functions: Constructor , destructor
//         //default constructor override: when we write someting in the constructor.
//         car(){
//             cout<<"In default constructor"<<endl;
//         }
//         //Parametrized constructor
//         car(string n,int s,int m,int p){
//             cout<<"In parametrized constructor"<<endl;
//             name=n;
//             seats=s;
//             model=m;
//             price=p;     
//         }
//
//         // // Member functions
//         void printcar(){
//             cout<<"Name of car: "<<name<<endl;
//             cout<<"No. of seats: "<<seats<<endl;
//             cout<<"Model of the car: "<<model<<endl;
//             cout<<"Price of car: "<<price<<endl;
//             cout<<endl;            
//         }
// };
// int main(){
//     // user-inbuilt_datatype variable_name
//     car A; // A --> object
//     A.name="BMW"; 
//     //strcpy(A.name,"BMW"); // copy the name to A.name, if it was char array
//     A.seats=4;
//     A.model=2021;
//     A.price=5000000;
//
//     A.printcar();
//     // cout<<"Name of car: "<<A.name<<endl;
//     // cout<<"No. of seats: "<<A.seats<<endl;
//     // cout<<"Model of the car: "<<A.model<<endl;
//     // cout<<"Price of car: "<<A.price<<endl;
//     // cout<<endl;
//
//     // When parameters are passed in an object --> parametrized constructor is called
//     car B("BMW",4,2021,5000000); // B --> object 2
//     B.printcar();
// }


 // // ------ Dynamic Memmory ------
// class car{
//     public:
//         char *name; // array pointer
//
//         int seats;
//         int model;
//         int price;
//
//         //default CONSTRUCTOR: whenever a object created, constructor is called.
//            // car(){ }
//
//         // // Manager functions: Constructor , destructor
//         //default constructor override: when we write someting in the constructor.
//         car(){
//             cout<<"In default constructor"<<endl;
//             name=NULL;
//         }
//         //Parametrized constructor
//         car(char *n,int s,int m,int p){
//             cout<<"In parametrized constructor"<<endl;
//             name= new char[ strlen(n)+1 ]; //strlen(n) + 1 --> array sizee
//             strcpy(name,n);
//             seats=s;
//             model=m;
//             price=p;     
//         }
//
//         // // Member functions
//         void printcar(){
//             cout<<"Name of car: "<<name<<endl;
//             cout<<"No. of seats: "<<seats<<endl;
//             cout<<"Model of the car: "<<model<<endl;
//             cout<<"Price of car: "<<price<<endl;
//             cout<<endl;            
//         }
//
//         void update(char *n){
//             if(name!=NULL){
//                 // we make it NULL
//                 delete []name;
//                 name=NULL;
//             } 
//             name=new char[strlen(n)+1]; // now, memory is allocated to name instead of NULL
//             strcpy(name,n);
//         }
// };
// int main(){
//     // user-inbuilt_datatype variable_name
//     car A; // A --> object
//     //A.name="BMW"; 
//     // strcpy(A.name,"BMW"); // copy the name to A.name, if it was char array
//     /* gives segmentation fault: 
//             1) Object A created
//             2) default constructor called
//             3) name = NULL;
//             4) since, we can't access NULL --> we can't copy anything to it
//             5) segmentation fault
//             6) So we create a function  */
//     A.update("BMW");
//     A.seats=4;
//     A.model=2021;
//     A.price=5000000;
//
//     A.printcar();
//     // cout<<"Name of car: "<<A.name<<endl;
//     // cout<<"No. of seats: "<<A.seats<<endl;
//     // cout<<"Model of the car: "<<A.model<<endl;
//     // cout<<"Price of car: "<<A.price<<endl;
//     // cout<<endl;
//
//     // When parameters are passed in an object --> parametrized constructor is called
//     car B("BMW",4,2021,5000000); // B --> object 2
//     B.printcar();
// }


 // // // ------------ Access Specifier --------------
// /* Default private access specifier is considered.
//       Public    : data can be accessed outside the class
//       Private   : data can be accessed only by functions within the class
//       Protected : */
// class car{
//    private: // can't be accessed outside this class
//       int price;  // private member can be accessed useing setter and getter.
//    public: // can be accessed outside this class
//       char *name; 
//       int seats;
//       int model;
//
//          //default CONSTRUCTOR: whenever a object created, constructor is called.
//             // car(){ }
//
//          // // Manager functions: Constructor , destructor
//          //default constructor override: when we write someting in the constructor.
//          car(){
//             cout<<"In default constructor"<<endl;
//             name=NULL;
//          }
//         //Parametrized constructor
//          car(char *n,int s,int m,int p){
//             cout<<"In parametrized constructor"<<endl;
//             name= new char[ strlen(n)+1 ]; //strlen(n) + 1 --> array sizee
//             strcpy(name,n);
//             seats=s;
//             model=m;
//             price=p;     
//          }
//
//         // // Member functions
//          void printcar(){
//             cout<<"Name of car: "<<name<<endl;
//             cout<<"No. of seats: "<<seats<<endl;
//             cout<<"Model of the car: "<<model<<endl;
//             cout<<"Price of car: "<<price<<endl;
//             cout<<endl;            
//          }
//
//          void update(char *n){
//             if(name!=NULL){
//                // we make it NULL
//                delete []name;
//                name=NULL;
//             } 
//             name=new char[strlen(n)+1]; // now, memory is allocated to name inplace of NULL
//             strcpy(name,n);
//          }
//
//          void setprice(int p){ //setter to access private member 
//             price=p;
//             // // to set limit of price 
//             // if(p<200){
//             //    p=2000;
//             // }
//             // else{
//             //    price=p;
//             // }
//          }
//
//          // void getprice() --> error........ we can also use AUTO if any unpredictable condition 
//          int getprice(){ //getter to get values from private member 
//             return price;
//          }
// };
// int main(){
//    // user-inbuilt_datatype variable_name
//    car A; // A --> object
//    char m[]="BMW";
//    A.update(m);
//    A.seats=4;
//    A.model=2021;
//    // A.price=5000000;
//    A.setprice(5000000); // c/a setter to set values to accessing members in private.
//    A.printcar();
//    cout<<"Price of car using getter to access private member: "<<A.getprice()<<endl<<endl;
//
//    // When parameters are passed in an object --> parametrized constructor is called
//    car B(m,4,2021,5000000); // B --> object 2
//    B.printcar();
// }


 // // // // ---------------------------------- Complete prog @ place ----------------------------------
class car{
   private: 
      int price;
   public: 
      char *name;      // char name[100]; --> static memory allocation
      int modelno;
      int seats;
      int cou;
      const int tyres; //constant data members
      static int co;

	// // // default constructor override
	car():tyres(4){
		cout<<"In default constructor"<<endl;
		name=NULL;
		co++;
	}
	// permetrized constructor
	// car(char *n,int s,int m,int p):tyres(4),modelno(m),price(p),seats(s){
		car(char *n,int seats,int modelno,int price):tyres(4){
		cout<<"In perametrized constructor"<<endl;
		name=new char[strlen(n)+1];
		strcpy(name,n);
		this->seats=seats;
		this->modelno=modelno;
		this->price=price;
		co++;
	}
	// copy constructor
	car(car &x):tyres(4){ //in x we have car c
		cout<<"In copy constructor"<<endl;
		// name=x.name;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);
		price=x.price;
		seats=x.seats;
		modelno=x.modelno;
		co++;
	}
	// copy assignment constructor
	void operator=(car x){ //x-->B
		cout<<"In copy Assignment constructor"<<endl;
		// name=x.name;
		name=new char[strlen(x.name)+1];
		strcpy(name,x.name);
		price=x.price;
		seats=x.seats;
		modelno=x.modelno;
	}
	//member functions
	void printcar()const{ //constant functions
	cout<<"name of car is "<<name<<endl;
	cout<<"price of car is "<<price<<endl;
	cout<<"seats in car are "<<seats<<endl;
	cout<<"modelno of car is "<<modelno<<endl;
	}

	void update(char *n){
		if(name!=NULL){
			delete []name;
			name=NULL;
		}
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}
   //setter to access private data member
	void setprice(int p){
		if(p<200){
			price=200;
		}
		else{
			price=p;
		}
	}
   //getter to retrive from private data member
	int Getvalue() const{
		return price;
	}
// destructor
	~car(){
		cout<<"destructor for car "<<name<<" is called. "<<endl;
		delete[] name;
		co--;
	}
};

int car::co=0; //since it is static and be don't want it to be reintialised to 0 every time the object is created 
int main(){
	// datatype variable-name;
	// whenever object is created constructor is called
	car A; //A  is object of class car 
	// A.name="BMW";
	// strcpy(A.name,"BMW");
	A.update("Bmw");
	A.seats=4;
	A.modelno=2020;
	// A.price=50000;
	A.setprice(65000); //setter
	A.setprice(400); 
	A.update("qwerty");
	// cout<<"price of car is "<<A.price<<endl;
	// cout<<"name of car is "<<A.name<<endl;
	// cout<<"price of car is "<<A.Getvalue()<<endl;
	// cout<<"seats in car are "<<A.seats<<endl;
	// cout<<"modelno of car is "<<A.modelno<<endl;
	A.printcar();
	cout<<"No of tyres "<<A.tyres<<endl;
   cout<<endl;

	car B;
	// strcpy(B.name,"Audi");
	B.update("Audi");
   // 	B.seats=4;
   // 	B.modelno=2010;
   // 	// B.price=30000;
   // 	B.setprice(30000);

   // 	// cout<<"name of car is "<<B.name<<endl;
   // 	// cout<<"price of car is "<<B.price<<endl;
   // 	// cout<<"seats in car are "<<B.seats<<endl;
   // 	// cout<<"modelno of car is "<<B.modelno<<endl;
   // 	B.printcar();
   // 		cout<<"price of car is "<<B.Getvalue()<<endl;

   car C("duster",8,2021,600000);
   	// cout<<"name of car is "<<C.name<<endl;
   	// cout<<"price of car is "<<C.price<<endl;
   	// cout<<"seats in car are "<<C.seats<<endl;
   	// cout<<"modelno of car is "<<C.modelno<<endl;
   C.printcar();
   cout<<endl;

   car D=C; //car D(C) constructor call-->copy constructor
   D.name[0]='M';
   D.printcar();
   cout<<endl;
   // // deep and shallow copy
   // D.name[0]='M';
   // cout<<endl<<endl;
   // C.printcar();
   // cout<<endl<<endl;
   // D.printcar();

   // // copy assignment constructor
   car E;
   E=A; //operator overoading
   // E.name[0]='u';
   E.printcar();
   cout<<endl;

   car U=E;
   cout<<"total count of cars"<<endl;
   cout<<car::co<<endl;

   return 0;
} 