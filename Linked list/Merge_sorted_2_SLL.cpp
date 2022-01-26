#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node*next;
        //constructor
        node(int d){
            data=d;
            next=NULL;
        }
        void display(node*head){
            while(head!=NULL){
                cout<<head->data<<"--> ";
                head=head->next;
            }
            cout<<endl;
        }
};
void insert(node*&head,node*&tail,int data){
    node*n= new node(data);
    // case1. LL is empty 
    if(head==NULL){
        head=tail=n;
    }
    // case2. LL isn't empty --> when head!= NULL
    else{
        tail->next=n; //to access pointer,use -> (and) to access object,use .    
        tail=n;
    }
}
//---------------------------------------------- MERGE ----------------------------------------------
/*       ________      ________      ________      ________
   L1   |__1__|__|--> |__2__|__|--> |__3__|__|--> |__4__|__|--> NULL 
        |                              data '--> next      |
       Head                                               Tail          
         ________      ________      ________      ________
   L2   |__0__|__|--> |__3__|__|--> |__6__|__|--> |__9__|__|--> NULL 
        |                              data '--> next      |
       Head                                               Tail      

         ________      ________      ________      ________      ________      ________      ________      ________
New_LL  |__0__|__|--> |__1__|__|--> |__2__|__|--> |__3__|__|--> |__3__|__|--> |__4__|__|--> |__6__|__|--> |__9__|__|---> NULL 
        |                                                                                                          |
       Head                                                                                                      Tail             */

node* merge_2_sorted(node*&head1,node*&head2){
    // case1. 1st LL is empty 
    if(head1==NULL){
        return head2;
    }
    // case2. 2nd LL is empty 
    if(head2==NULL){
        return head1;
    }
    node*new_head;
    // case3. data of 1st LL < 2nd LL
    if(head1->data<head2->data){
        new_head=head1;
        node*n=merge_2_sorted(head1->next,head2);
        new_head->next=n;
    }
    // case4. data of 2nd LL < 1st LL 
    else{
        new_head=head2;
        node*m=merge_2_sorted(head1,head2->next);
        new_head->next=m;
    }
    return new_head;
}
int main(){
    node*head1=NULL;
    node*tail1=NULL;
    node*head2=NULL;
    node*tail2=NULL;

    int n,m,d,b;

    cout<<"Enter number of elements of 1LL: ";
    cin>>n;
    while(n--){
        cin>>d;
        insert(head1,tail1,d);
    }
    head1->display(head1);
    
    cout<<"Enter number of elements of 2LL: ";
    cin>>m;
    while(m--){
        cin>>b;
        insert(head2,tail2,b);
    }
    head2->display(head2);

    node*new_head=merge_2_sorted(head1,head2);
    cout<<"Merged sorted LL: ";
    new_head->display(new_head);
}