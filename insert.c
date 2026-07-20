#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
void linkedlist_travesal(struct node *ptr ){
    while(ptr !=NULL){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->link;
    }
}
struct node * inseratfirst(struct node * start, int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = start;
    return ptr;
}
int main(){
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;

    start =(struct node *)malloc(sizeof(struct node));
    second =(struct node *)malloc(sizeof(struct node));
    third =(struct node *)malloc(sizeof(struct node));
    fourth =(struct node *)malloc(sizeof(struct node));

    start->data=2;
    start->link=second;

    second->data=4;
    second->link=third;

    third->data=43;
    third->link=fourth;

    fourth->data=34;
    fourth->link=NULL;
    linkedlist_travesal(start);
    start=inseratfirst(start,46);
    linkedlist_travesal(start);
    return 0;
}