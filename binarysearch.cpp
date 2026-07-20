#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int arr1[4]={1,3,5,7};
  
    int key;
    cout<<"enter the key : ";
    cin>>key;

    int idx=binarysearch(arr,9,key);
    cout<<idx<<endl;
    idx=binarysearch(arr1,4,key);
    cout<<idx;
    return 0;
}
    