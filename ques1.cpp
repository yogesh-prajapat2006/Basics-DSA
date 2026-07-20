#include<iostream>
using namespace std;

int leftocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = start + (end - start) / 2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int rightocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = start + (end - start) / 2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end - start) / 2;;
    }
    return ans;
}

int main(){
    int arr[9]={1,1,1,1,6,6,6,9};
    int arr1[5]={1,3,3,7,7};
  
    int key;
    cout<<"enter the key : ";
    cin>>key;
    int idx;

    idx=leftocc(arr,9,key);
    cout<<"frist occrance of idx is : "<<idx<<endl;
    idx=rightocc(arr,9,key);
    cout<<"last occrance of idx is : "<<idx<<endl;
    return 0;
}