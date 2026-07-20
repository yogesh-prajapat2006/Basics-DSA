#include<iostream>
using namespace std;

void largestsum(int arr[3][3],int row,int col){
    int larg=0;
    for(int i=0;i<row;i++){
        int sum=0;
        
        for(int j=0;j<col;j++){
           sum=sum+arr[i][j];
           
        }
       cout<<sum<<endl;
       if(larg<sum){
          larg=sum;
       }
    }
    cout<<"large sum : "<<larg;
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
    largestsum(arr,3,3);
    return 0;
}