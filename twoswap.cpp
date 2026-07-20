#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "enter the size : ";
    cin>>size;
    
    int arr[40];
    int t;
   
    for(int j=0;j<size;j++){
        cin>>arr[j];
    }
    for(int i=0;i<size-1;i=i+2){
        // t=arr[i];
        // arr[i]=arr[i+1];
        // arr[i]=t;
        swap(arr[i],arr[i+1]);
    }
    for(int p=0;p<size;p++){
        cout<<arr[p]<<" ";
    }
    return 0;
}
