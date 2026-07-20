#include <bits/stdc++.h>
using namespace std;
void bubbles(int *arr,int size){
    if(size==0 || size==1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbles(arr,size-1);
}
int main() {
    int arr[5]={3,7,0,9,2};
    int size=5;
    bubbles(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}