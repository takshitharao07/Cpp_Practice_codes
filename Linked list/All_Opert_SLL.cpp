//  Insertion at head, tail, any position
// Deletion from head, tail, any position
// Search element
// Midpoint of LL : Using midpoint runner technique
// Reverse of LL

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
// --------------------------------------------- LENGTH ---------------------------------------------
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
// -------------------------------------------- INSERTION --------------------------------------------
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

// -------------------------------------------- DELETION --------------------------------------------
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
// --------------------------------------------- SEARCH ---------------------------------------------
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

// -------------------------------------------- MIDPOINT --------------------------------------------
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
// -------------------------------------------- REVERSE ---------------------------------------------
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

 //Recursion
 void RECUR_reverse(node*current,node*prev,node*&head){
    if(current==NULL){
        head=prev;
        return;
    }
    //Recursive case
    RECUR_reverse(current->next,current,head);
    current->next=prev;
}
// ---------------------------------------------- MAIN ----------------------------------------------
int main(){
    node*head=NULL; //pointer at head
    node*tail=NULL; //pointer at tail

  // // User-entered elements of LL
    // int t;
	// cin>>t;
	// while(t--){
	// 	int data;
	// 	cin>>data;
	// 	insert_tail(head,tail,data);
	// }

 // // INSERTION:
    insertion_at_head(head,tail,80);
    insertion_at_head(head,tail,50);
    insertion_at_head(head,tail,80);
    insertion_at_head(head,tail,50);
    insertion_at_head(head,tail,30);
    head->display(head); // display(head)----> if it wasn't a data member
    
    insertion_at_tail(head,tail,180);
    insertion_at_tail(head,tail,150);
    insertion_at_tail(head,tail,20);
    insertion_at_tail(head,tail,10);
    insertion_at_tail(head,tail,10);
    head->display(head);

    int pos;
    cout<<"Enter the position to insert the element = ";
    cin>>pos;
    cout<<endl;
    insertion_at_position(head,tail,280,pos);
    head->display(head);

 // // DELETION:
    delete_from_head(head,tail);
    delete_from_head(head,tail);
    head->display(head);

    delete_from_tail(head,tail);
    delete_from_tail(head,tail);
    delete_from_tail(head,tail);
    head->display(head);

    // int pos;
    // cin>>pos;
    delete_from_position(head,tail,pos);
    head->display(head); // display(head)----> if it wasn't a data member
    
 // // SEARCHING:
    int key;
    cout<<"Enter the element to be searched in LL = ";
    cin>>key;
    cout<<endl;
    if(search(head,key)==1){
        cout<<"The element is present in the linked list"<<endl;
    }
    else cout<<"The element not found in the linked list"<<endl;

 // // MIDPOINT:
    node*m=mid(head);
    cout<<"The midpoint data of the linked list = "<<m->data<<endl;

 // // REVERSE:
    cout<<"Reversed linked list = ";
    reverse(head,tail);
    head->display(head);

     cout<<"Reversed linked list (Recursion) = ";
    RECUR_reverse(head,NULL,head);  //for recursion
    head->display(head);
}