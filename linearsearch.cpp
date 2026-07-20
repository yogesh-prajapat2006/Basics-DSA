#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,13,34,2,4,56,3,5};
    int key=19;
    int idx=0;

    for(int i=0;i<8;i++){
        if(arr[i]==key){
            idx=1;
            cout<<"the key is found index :"<<idx<<endl;
        }
        
    }
    if(idx==0){
        cout<<"not"<<endl;
    }

    return 0;
}