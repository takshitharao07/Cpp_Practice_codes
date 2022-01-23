// Search element
// Midpoint of LL : Using midpoint runner technique
// Reverse of LL

#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;

        // Parametrized Constructor
        node(int d){
            data=d;
            next=NULL;
        }
        // Data member
        void display(node*head){
            while(head!=NULL){
                cout<<head->data<<"-->";
                head=head->next;
            }
            cout<<endl;
        }
};
int lenght(node*head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

void insertion_at_head(node*&head,node*&tail,int data){ //Passed by reference (&)--> the value of parameters will change in the main
    node*n=new node(data);  //Create new node n(pointer)
    if(head==NULL){  // case1. LL is empty
        head=tail=n;
    }
    else{            // case2. LL isn't empty 
        n->next=head; //to access pointer,use -> (and) to access object,use .      
        head=n;
    }    // head->display(head);
}

bool search(node*head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
  /* Recursive
        //base case
            if(temp==NULL){
                return false;
            }
        //recursive case
            if(temp->data==key){
                return true;
            }
            return search(head->next,key); */
}

 // // MIDPOINT RUNNER TECHNIQUE: Floyd’s fast and slow pointer algorithm

/*    | _________________________________| S=2xF ----> S is at midpoint
    F | .................................|  100           of the race
    S |................50                |                                               */

node* mid(node*head){ // node* ----> returning a pointer
    // Empty LL
    if(head==NULL){
        return NULL;
    }
    // Not empty LL
    node*slow=head;   
    node*fast=head;         // 10 10 20 |30| 50 80
    // node*fast=head->next // 10 10 |20| 30 50 80

    // Odd LL 
    // while(fast->next!=NULL){ // for even LL ---> segmentation fault
    while(fast!=NULL && fast->next!=NULL){ //Even LL also runs
        fast=fast->next->next;  // jumping 2x faster
        slow=slow->next;        // jumping x times
    }
    return slow;
}

/*          ___________      ___________      ___________                      ____________      ___________      ___________
Prev       |__2__|_100_|--> |__3__|_200_|--> |__4__|_300_|--> NULL  ===>>>   |__2__|_NULL_|     |__3__|_200_|--> |__4__|_300_|--> NULL
 '->NULL   |     |           ^ data '--> next    |                                              |       |          ^         |
.         Head  Current -----'(n)               Tail                                          Head   Current ------'(n)     Tail        
.                                                                                                 prev <-'
         ____________       ___________       ___________                     ____________       ___________       ___________
        |__2__|_NULL_| <-- |__3__|_200_|     |__4__|_300_|--> NULL  ===>>>   |__2__|_NULL_| <-- |__3__|_200_| <-- |__4__|_100_|
                                             |    |                          |                                    |
                                           Head Current---> prev            Tail                                 Head               */

void reverse(node*&head,node*tail){
    // tail=head;
    node*prev=NULL;
    node*current=head;
    node*n;

    while(current!=NULL){
        n=current->next;
        current->next=prev;
        prev=current;
        current=n;
    }
    head=prev;
} 

int main(){
    node*head=NULL;
    node*tail=NULL;

    insertion_at_head(head,tail,80);
    insertion_at_head(head,tail,50);
    insertion_at_head(head,tail,30);
    insertion_at_head(head,tail,20);
    insertion_at_head(head,tail,10);
    insertion_at_head(head,tail,10);
    head->display(head); // display(head)----> if it wasn't a data member
    
    int key;
    cin>>key;
    if(search(head,key)==1){
        cout<<"The element is present in the linked list"<<endl;
    }
    else cout<<"The element not found in the linked list"<<endl;

    node*m=mid(head);
    cout<<"The midpoint data of the linked list = "<<m->data<<endl;

    reverse(head,tail);
    cout<<"Reversed linked list = ";
    head->display(head);
}