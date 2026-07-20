#include<iostream>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
  }
}



void sortingarr(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}


int main(){
    int arr[7]={1,1,0,1,0,1,0};
     
    sortingarr(arr,7);
    printarr(arr,7);
    return 0;
}