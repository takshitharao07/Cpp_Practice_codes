#include<iostream>
#include<vector>  // must while using vectors
using namespace std;
int main(){
    /* 
     Iterators:         begin(), end() ...(pointers)
     Element accessor:  front(), back(), at(n)
     Capacity function: size(), capacity(), max_size(), empty(), shrink_to_fit()
     Modifiers:         push_back(), pop_back(), swap(v), insert(position, number), emplace(position, number), erase(position)
    */
    // vector<data type> variable;
    vector<int> v;
    v.push_back(5); //5
        cout<<"Size = "<<v.size()<<endl; //1
        cout<<"Capacity = "<<v.capacity()<<endl; //1
    v.push_back(9); //5 9
        for(int i=0;i<v.size();i++){
            cout<<endl<<v[i]<<endl;
        } 
        cout<<"---------"<<endl;
    v.pop_back(); //5
    v.push_back(8); //5 8
    v.push_back(7); //5 8 7
        for(int i=0;i<v.size();i++){
            cout<<endl<<v[i]<<endl;
        }
        cout<<"---------"<<endl;
        cout<<"Size = "<<v.size()<<endl; //3
        cout<<"Capacity = "<<v.capacity()<<endl; //4
    cout<<"Element at "<<" = "<<v.at(2)<<endl; //7
    cout<<"Element at front "<<v.front()<<endl; //5
    cout<<"Element at back "<<v.back()<<endl; //7
  
    v.pop_back(); //5 8
        for(int i=0;i<v.size();i++){
            cout<<endl<<v[i]<<endl;
        }
        cout<<"---------"<<endl; 
        cout<<"Size = "<<v.size()<<endl; //2
        cout<<"Capacity = "<<v.capacity()<<endl; //4
    v.clear();
        cout<<"Size = "<<v.size()<<endl; //0
        cout<<"Capacity = "<<v.capacity()<<endl; //0
        for(int i=0;i<v.size();i++){
            cout<<endl<<v[i]<<endl;
        }
     
    // //vector<data type>name(initial vector size , number to be stored in all index of given initial vector size);
    // vector<int>v(4,10); // 10 10 10 10 _ _ _ ...
}