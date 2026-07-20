#include<iostream>
using namespace std;

bool issorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaningpart = issorted(arr+1,size-1);
        return remaningpart;
    }

}

int main(){
    int arr[6]={2,4,5,3,7,8};
    int size=6;
    bool ans=issorted(arr,size);
    cout <<"The array is sorted : "<<ans<<endl;
    return 0;
    
}