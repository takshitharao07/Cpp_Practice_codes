#include<iostream>
using namespace std;
 /*  
      Linked list consists of nodes -> each node contains a data field and 
        a reference(link) to the next node in the list.
         ________      ________      ________
        |__2__|__|--> |__3__|__|--> |__4__|__|--> NULL 
        |               data '--> next       |
    Head/Front                           Tail/End
*/   
class node{
    public: // since, private is considered default 
    int data;
    node* next;  // the address of next node will be NULL, till it's created

    //parametrized constructor
    node(int d){
        data=d;
        next=NULL;
    }
};
int main(){
    node n1(20); //data of 1st node --> (n1 object) = 20
    node n2(30); //data of 2nd node --> (n2 object) = 30
    n1.next=&n2; // next of 1st node = address of next node
    
    // 3 ways to get n2 data:  
    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<n1.data<<" "<<(*n1.next).data<<endl; //object wants to access data (.) , derefering n1.next: *n1.next
    cout<<n1.data<<" "<<(n1.next)->data<<endl; //pointer wants access data (->)
}

// // Operations
