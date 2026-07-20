#include<iostream>
using namespace std;
void insirsort(int arr[],int n){
    for(int i = 1;i < n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
           if(arr[j]>temp){
               arr[j+1]=arr[j];
            }
            else break;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int arr[10]={7,5,2,9,6,8,4,3,1,10};
    insirsort(arr,10);
    return 0;
}