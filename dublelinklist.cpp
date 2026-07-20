#include<iostream>
using namespace std;

class Node{
    public:
    int deta;
    Node* prev;
    Node* next;

    Node(int d){
        this->deta=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}

void print(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        cout<<temp->deta<<endl;
        temp=temp->next;
    }
    cout<<"length is : "<<len<<endl;
}


int main(){
    Node* head=new Node(10);
    print(head);   

    insertathead(head,66);
    print(head);

    insertathead(head,65);
    print(head);

    insertathead(head,64);
    print(head);

    insertathead(head,63);
    print(head);
}