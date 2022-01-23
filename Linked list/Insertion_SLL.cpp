//  Insertion at head, tail, any position

#include<iostream>
using namespace std;
//class node{
//     public:
//         int data;
//         node*next;
//
//         node(int d){
//             data=d;
//             next=NULL;
//         }    
// };
// void insertion_at_head(node*&head,node*&tail,int data){ //Passed by reference (&)--> the value of parameters will change in the main
//     // Used dynamic allocation bcoz after returning from this function --> below initialised variable gets destroyed, thus further insertion won't be possible
//     node*n=new node(data);  //Create new node n(pointer)
//     // case1. LL is empty --> when head = NULL
//     if(head==NULL){
//         head=tail=n;
//     }
//     // case2. LL isn't empty --> when head!= NULL
//     else{
//         n->next=head; //to access pointer,use -> (and) to access object,use .        head=n;
//         head=n;
//     }
//     // head->display(head); --> wrong 
// }
// void display(node* head){ // Passed by value --> the value of head won't change in the main
//     while(head!=NULL){
//         cout<<head->data<<"-->";
//         head=head->next;
//     }
//     cout<<endl;
//
// //                 ( OR )
//
// //     node*temp =head;
// //     while(temp!=NULL){
// //         cout<<temp->data<<"-->";
// //         temp=temp->next;
// //     }
// //     cout<<endl;
//     }
//
// int main(){
//     node*head=NULL; //pointer at head
//     node*tail=NULL; //pointer at tail
//
//     insertion_at_head(head,tail,80);
//     insertion_at_head(head,tail,50);
//     insertion_at_head(head,tail,30);
//
//     display(head);
//}
class node{
    public:
        int data;
        node*next;

        //Parametrized Constructor
        node(int d){
            data=d;
            next=NULL;
        }    
        //Data member
        void display(node* head){ // Passed by value --> the value of head won't change in the main
            while(head!=NULL){
                cout<<head->data<<"-->";
                head=head->next;
            }
            cout<<endl;

//                 ( OR )

        //     node*temp =head;
        //     while(temp!=NULL){
        //         cout<<temp->data<<"-->";
        //         temp=temp->next;
        //     }
        //     cout<<endl;
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
/*   ________      ________      ________      ________
    |_____|__|--> |__2__|__|--> |__3__|__|--> |__4__|__|--> NULL 
    New_Node      |                data '--> next      |
.                Head                                 Tail                */

void insertion_at_head(node*&head,node*&tail,int data){ //Passed by reference (&)--> the value of parameters will change in the main
    // Used dynamic allocation bcoz after returning from this function --> below initialised variable gets destroyed, thus further insertion won't be possible
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
/*   ________      ________      ________         ________
    |__2__|__|--> |__3__|__|--> |__4__|__| - - > |_____|__|--> NULL 
    |                data '--> next      |        New_Node 
.  Head                                 Tail                               */

void insertion_at_tail(node*&head,node*&tail,int data){ //Passed by reference (&)--> the value of parameters will change in the main
    // Used dynamic allocation bcoz after returning from this function --> below initialised variable gets destroyed, thus further insertion won't be possible
    node*n=new node(data);  //Create new node n(pointer)
    // case1. LL is empty --> when head = NULL
    if(head==NULL){
        head=tail=n;
    }
    // case2. LL isn't empty --> when head!= NULL
    else{
        tail->next=n; //to access pointer,use -> (and) to access object,use .    
        tail=n;
    }
}
/*   ________      ________        ________        ________       
    |__2__|__|--> |__3__|__|- - > |_____|__| - - >|__4__|__|--> NULL 
    |                              New_Node       |        
.  Head                                          Tail                               */

void insertion_at_position(node*&head,node*&tail,int data, int pos){ //Passed by reference (&)--> the value of parameters will change in the main
    // // Used dynamic allocation bcoz after returning from this function --> below initialised variable gets destroyed, thus further insertion won't be possible
    // case1. position-->begining
    if(pos==0){
        insertion_at_head(head,tail,data);
    }
    // case2. position -->end
    else if(pos>=lenght(head)){
        insertion_at_tail(head,tail,data);
    }
    //case3. any position
    else{
        node*n=new node(data);  //Create new node n(pointer)
        node*temp=head;

        for(int jump=1;jump<pos;jump++){
            temp=temp->next;  //to access pointer,use -> (and) to access object,use .
        }
        
        n->next=temp->next;
        temp->next=n;
    }
}

int main(){
    node*head=NULL; //pointer at head
    node*tail=NULL; //pointer at tail

    insertion_at_head(head,tail,80);
    insertion_at_head(head,tail,50);
    insertion_at_head(head,tail,30);
    head->display(head); // display(head)----> if it wasn't a data member
    
    insertion_at_tail(head,tail,180);
    insertion_at_tail(head,tail,150);
    head->display(head);

    int pos;
    cin>>pos;
    insertion_at_position(head,tail,280,pos);
    head->display(head);
}