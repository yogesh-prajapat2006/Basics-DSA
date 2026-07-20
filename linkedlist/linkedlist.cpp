#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertathead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertattail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertatposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return ;
    }
    Node* insertnode=new Node(d);
    Node* temp=head;
    
    int cnt=1;
    while(cnt < position-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    
    insertnode->next=temp->next;
    temp->next=insertnode;
}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;

    insertathead(head,15);
    print(head);

    insertathead(head,25);
    print(head);

    insertattail(tail,11);
    print(head);

    insertattail(tail,22);
    print(head);

    insertattail(tail,33);
    print(head);

    insertatposition(tail,head,3,100);
    print(head);

    insertatposition(tail,head,3,800);
    print(head);

    insertatposition(tail,head,9,32);
    print(head);

    insertatposition(tail,head,1,0);
    print(head);

    return 0;
}