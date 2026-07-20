#include<iostream>
using namespace std;

void nintydegriprinting(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=col-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    nintydegriprinting(arr,3,3);
    return 0;
}

// 1 2 3 4 5 6 7 8 9 
// 1 2 3 
// 4 5 6
// 7 8 9

// 7 4 1
// 8 5 2
// 9 6 3