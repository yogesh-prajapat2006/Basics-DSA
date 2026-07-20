#include<iostream>
using namespace std;

int main(){
    int size;
    cout<< "enter the size : ";
    cin>>size;

    int arr[40];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ret;
    for(int i=0;i<size;i++){
       for(int j=0;j<size;j++){
        if(arr[i]!=arr[j+1]){
            ret=1;
        }
        else ret=0;
    }
    }
    if(ret){
        cout<<"yes";
    }
    else cout<<"no";
}
