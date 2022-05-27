/*
    Input: 1 2 3 4 5 6
    Output: 1 3 5 5 3 1
*/

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
void solve(node* start){
    if(start==NULL)
        return;
    cout<<start->data<<" ";
    if(start->next!=NULL)
        solve(start->next->next);
    cout<<start->data<<"  ";
}

int main(){
    node*head1=NULL;
    node*tail1=NULL;

    int n,m,d,b;

    cout<<"Enter number of elements of 1LL: ";
    cin>>n;
    while(n--){
        cin>>d;
        insert(head1,tail1,d);
    }
    head1->display(head1);
    solve(head1);
}
 