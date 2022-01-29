#include<iostream>
#include<vector>  // must while using vectors
using namespace std;

    /* 
     Iterators:         begin(), end() ...(pointers)
     Element accessor:  front(), back(), at(n)
     Capacity function: size(), capacity(), max_size(), empty(), shrink_to_fit()
     Modifiers:         push_back(), pop_back(), swap(v), insert(position, number), emplace(position, number), erase(position)
    */

void print_vector(vector<int>A){
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"-----------------"<<endl;
}

// // 2D-Vector ----> vector of vector
void print_2D_vector(vector<vector <int>>A){
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++){       // Output:
            cout<<A[i][j]<<" ";               // -1 -1
        }                                     // -1 -1
        cout<<endl;                           // -1 -1
    }
    cout<<endl;
}

int main(){
// -------------------------------------------------- Vector Operations --------------------------------------------------
    
    vector<int> v;  // // vector <data-type> variable;
    v.push_back(5); //5
        cout<<"Size = "<<v.size()<<endl; //1
        cout<<"Capacity = "<<v.capacity()<<endl; //1
    v.push_back(9); //5 9
        print_vector(v);
        
    v.pop_back(); //5
    v.push_back(8); //5 8
    v.push_back(7); //5 8 7
        print_vector(v);

        cout<<"Size = "<<v.size()<<endl; //3
        cout<<"Capacity = "<<v.capacity()<<endl; //4
    cout<<"Element at "<<" = "<<v.at(2)<<endl; //7
    cout<<"Element at front "<<v.front()<<endl; //5
    cout<<"Element at back "<<v.back()<<endl; //7
  
    v.pop_back(); //5 8
        print_vector(v);
        cout<<"Size = "<<v.size()<<endl; //2
        cout<<"Capacity = "<<v.capacity()<<endl; //4
    v.clear();
        cout<<"Size = "<<v.size()<<endl; //0
        cout<<"Capacity = "<<v.capacity()<<endl; //0
        print_vector(v);

// -------------------------------------------------- Initialised vector --------------------------------------------------

    // //vector<data type>name(initial vector size , number to be stored in all index of given initial vector size);
    // vector<int>v(4,10); // 10 10 10 10 _ _ _ ...
    vector<int> B(3);   // A(size)
    print_vector(B);    // 0 0 0 

    vector<int> A(3,-1);// A(size,initial value)
    print_vector(A);    // -1 -1 -1

    A.push_back(3);
    print_vector(A);    // -1 -1 -1 3 
    
// ------------------------------------------------------ 2D-vector ------------------------------------------------------

    vector<vector<int>> C(3,vector<int> (2,-1)); // 3 rows, 2 column --> initial value -1 is set , else it will print 0
    cout<<"Printing 2D vector"<<endl;
    print_2D_vector(C);

}