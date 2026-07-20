#include <iostream>
using namespace std;

int main(){
    int arr[9]={2,4,1,6,8,5,3,9,7};
    int size=9;
    int targetsum=8;

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]+arr[j]==targetsum){
                cout<<arr[i]<<','<<arr[j]<<endl;
            }
        }
    }
    return 0;
}