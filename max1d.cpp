#include<iostream>
using namespace std;

int main(){
    int arr[8]={1,13,34,2,4,56,3,5};
    int max=arr[0];
    int idx;

    for(int i=0;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
            idx=i;
        }
    }
    cout<<max<<" index is : "<<idx<<endl;
    return 0;

}