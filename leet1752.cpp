#include<iostream>//run in online compiler
using namespace std;

void  sorted(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
       if(arr[i-1]>arr[i]){
        count++;
       }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    if(count<=1){
        cout << "the array is sorted ."<<endl;
    }
    else cout<<"not sorted";
}

int main(){
    int arr[7];
    cout << "enter the velue : "<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    sorted(arr,7);
    return 0;
}