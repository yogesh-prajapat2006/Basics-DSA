#include<iostream>
using namespace std;
bool issearch(int arr[3][3],int key,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"enter the key : ";
    cin>>key;
    int idx;

    if(issearch(arr,key,3,3)){
        cout <<"found integer key ..";
    }
    else cout <<"not found";

    return 0;
}