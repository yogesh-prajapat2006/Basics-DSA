#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void traversal(struct node*ptr){
    while(ptr!=NULL){
    cout<<ptr->data<<" "<<"yogesh"<<endl;
    ptr=ptr->next;
    }
};

int main(){
    struct node *frist;
    struct node *second;
    struct node *third;
    struct node *four;

    frist=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));
    
    frist->data=10;
    frist->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=four;
    four->data=40;
    four->next=NULL;
    traversal(frist);
    return 0;
}

