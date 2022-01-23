// Deletion from head, tail, any position

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

  /*Recursion:
        //base case
            if(head==NULL){
                return;
            }
        //recusrsive case
            return 1+lenght(head->next);
  */
}
void insertion_at_head(node*&head,node*&tail,int data){ //Passed by reference (&)--> the value of parameters will change in the main
    node*n=new node(data);  //Create new node n(pointer)
    // case1. LL is empty --> when head = NULL
    if(head==NULL){
        head=tail=n;
    }
    // case2. LL isn't empty --> when head!= NULL
    else{
        n->next=head; //to access pointer,use -> (and) to access object,use .      
        head=n;
    }
    // head->display(head);
}
/*   ________      ________      ________                    ________      ________      ________
    |__2__|__|--> |__3__|__|--> |__4__|__|--> NULL  ===>>>  |_____|__|-x> |__3__|__|--> |__4__|__|--> NULL
    |    |           data '--> next      |                     |          |  data '--> next       |
. Head  Temp                           Tail                   Temp       Head                    Tail              */

void delete_from_head(node*&head,node*&tail){ //Passed by reference --> to get the changes in main
    // case1. LL is empty
    if(head==NULL){
        return;
    }
    // case2. LL with single node
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    // case3. LL with many nodes
    else{
        node*temp=head;
        head=head->next;
        delete temp;
    }
}
/*   ________      ________      ________                    ________      ________                 ________
    |__2__|__|--> |__3__|__|--> |__4__|__|--> NULL  ===>>>  |__2__|__|--> |__3__|__|--> NULL  -x-> |_____|__|
    |    |           ^                   |                  |             |       ^                |
. Head  Temp ->------''->--x------     Tail               Head          Temp      '------------<--Tail           */

void delete_from_tail(node*&head,node*&tail){ //Passed by reference --> to get the changes in main
    // case1. LL is empty
    if(head==NULL){
        return;
    }
    // case2. LL with single node
    else if(head->next==NULL){
        delete head;
        head=tail=NULL;
    }
    // case3. LL with many nodes
    else{
        node*temp=head; 
        while(temp->next!=tail){ //loop to 
            temp=temp->next;     //To jump to next node
        }
        delete tail;
        temp->next=NULL;
        tail=temp;
    }
}
/*   ________      ________      ________                    ________         ________         ________
    |__2__|__|--> |__3__|__|--> |__4__|__|--> NULL  ===>>>  |__2__|__| -x->  |_____|__|  --> |__4__|__|--> NULL 
    |    |           ^                  |                   |    |              |             |
. Head  Temp ->---x--'(pos=1)         Tail                Head  Temp            n           Tail           */

void delete_from_position(node*&head,node*&tail,int pos){ //Passed by reference (&)--> the value of parameters will change in the main
    // // Used dynamic allocation bcoz after returning from this function --> below initialised variable gets destroyed, thus further insertion won't be possible
    // case1. position-->begining
    if(pos==0){
        delete_from_head(head,tail);
    }
    // case2. position -->end
    else if(pos>=lenght(head)){
        delete_from_tail(head,tail);
    }
    //case3. any position
    else{
        node*temp=head;

        for(int jump=1;jump<pos;jump++){
            temp=temp->next;  //to access pointer,use -> (and) to access object,use .
        }
        
        node*n=temp->next;         
        temp->next=n->next;
        delete n;
    }
}
int main(){
    node*head=NULL;
    node*tail=NULL;

    insertion_at_head(head,tail,80);
    insertion_at_head(head,tail,50);
    insertion_at_head(head,tail,30);
    insertion_at_head(head,tail,20);
    insertion_at_head(head,tail,10);
    head->display(head); // display(head)----> if it wasn't a data member
    
    delete_from_head(head,tail);
    head->display(head);

    delete_from_tail(head,tail);
    head->display(head);

    int pos;
    cin>>pos;
    delete_from_position(head,tail,pos);
    head->display(head);
}