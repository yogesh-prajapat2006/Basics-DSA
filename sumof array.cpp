#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "enter the size : ";
    cin>>size;
    
    int arr[40];
    int sum=0;
   
    for(int j=0;j<size;j++){
        cin>>arr[j];
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"the sum of array is : "<<sum;
    return 0;
}
