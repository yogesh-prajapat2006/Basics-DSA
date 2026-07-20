#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertatposition(node* &head,int d,int positon){
    node* ptr=head;
    int cnt=1;
    while(cnt<positon-1){
       ptr=ptr->next;
       cnt++;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=ptr->next;
    ptr->next=nodetoinsert;
}

void insertatend(node* &end,int d){
     node* ptr=new node(d);
     end->next=ptr;
     end=end->next;
}

void insertathead(node* &head,int d){
    node* ptr=new node(d);
    ptr->next=head;
    head=ptr;

}

void traversal(node* head){
    node* ptr=head;
      while(ptr!=NULL){
          cout<<ptr->data<<" ";
          ptr=ptr->next;
      }
      cout<<endl;
}

int main(){
    node *head= new node(10);
    node* end=head;
    insertathead(head,5555);
    insertathead(head,699);
    insertatend(end,11);
    insertatend(end,14);
    insertatend(end,15);
    insertatposition(head,88,3);
    
    
    traversal(head);
    return 0;
}