#include<iostream>
using namespace std;

void reverseprinting(int arr[3][3],int row,int col){
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        }
        else {
            for(int j=row-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
        }
    }
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
    reverseprinting(arr,3,3);
    return 0;
}

// 1 2 3 4 5 6 7 8 9 
// 1 2 3 
// 4 5 6
// 7 8 9
// 1 4 7
// 8 5 2
// 3 6 9