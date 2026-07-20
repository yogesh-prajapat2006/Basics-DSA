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
struct node * inseratmid(struct node * start, int data,int index){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=start;
    int i=0;
    while(i!=index-1){
        p=p->link;
        i++;
    }
    ptr->data=data;
    ptr->link=p->link;
    p->link=ptr;
    return start;
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
    start=inseratmid(start,46,2);
    linkedlist_travesal(start);
    return 0;
}